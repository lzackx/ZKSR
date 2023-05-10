//
//  ZooMemoryLeakData.m
//  Zoo
//
//  Created by lZackx on 2022/4/14.

#import "MLeaksFinder.h"
#import "ZooMemoryLeakData.h"
#if _INTERNAL_MLF_RC_ENABLED
#import <FBRetainCycleDetector/FBRetainCycleDetector.h>
#endif
#import <Zoo/ZooDefine.h>

@interface ZooMemoryLeakData()

@property (nonatomic, strong) NSMutableArray *dataArray;
@property (nonatomic, copy) ZooLeakManagerBlock block;

@end

@implementation ZooMemoryLeakData

+ (ZooMemoryLeakData *)shareInstance{
    static dispatch_once_t once;
    static ZooMemoryLeakData *instance;
    dispatch_once(&once, ^{
        instance = [[ZooMemoryLeakData alloc] init];
    });
    return instance;
}

- (instancetype)init{
    self = [super init];
    if (self) {
        _dataArray = [NSMutableArray array];
    }
    return self;
}

- (void)addLeakBlock:(ZooLeakManagerBlock)block{
    self.block = block;
}

- (void)addObject:(id)object{
    NSString *className = NSStringFromClass([object class]);
    NSNumber *classPtr = @((uintptr_t)object);
    NSArray *viewStack = [object viewStack];
    NSString *retainCycle = [self getRetainCycleByObject:object];
    
    NSDictionary *info = @{
        @"className":STRING_NOT_NULL(className),
        @"classPtr":STRING_NOT_NULL(classPtr),
        @"viewStack":STRING_NOT_NULL(viewStack),
        @"retainCycle":STRING_NOT_NULL(retainCycle)
    };
    [_dataArray addObject:info];
    
    if (self.block) {
        self.block(info);
    }
}

- (void)removeObjectPtr:(NSNumber *)objectPtr{
    for (NSInteger i=_dataArray.count-1; i == 0; i--) {
        NSDictionary *dic = _dataArray[i];
        if ([dic[@"classPtr"] isEqualToNumber:objectPtr]) {
            [_dataArray removeObjectAtIndex:i];
        }
    }
}


- (NSArray *)getResult{
    return _dataArray;
}

- (void)clearResult{
    [_dataArray removeAllObjects];
}

- (NSString *)getRetainCycleByObject:(id)object{
    NSString *result;
#if _INTERNAL_MLF_RC_ENABLED
    FBRetainCycleDetector *detector = [FBRetainCycleDetector new];
    [detector addCandidate:object];
    NSSet *retainCycles = [detector findRetainCyclesWithMaxCycleLength:20];
    
    BOOL hasFound = NO;
    for (NSArray *retainCycle in retainCycles) {
        NSInteger index = 0;
        for (FBObjectiveCGraphElement *element in retainCycle) {
            if (element.object == object) {
                NSArray *shiftedRetainCycle = [self shiftArray:retainCycle toIndex:index];
                
                result = [NSString stringWithFormat:@"%@", shiftedRetainCycle];
                hasFound = YES;
                break;
            }
            
            ++index;
        }
        if (hasFound) {
            break;
        }
    }
    if (!hasFound) {
        result = @"Fail to find a retain cycle";
    }
#endif
    return result;
}

- (NSArray *)shiftArray:(NSArray *)array toIndex:(NSInteger)index {
    if (index == 0) {
        return array;
    }
    
    NSRange range = NSMakeRange(index, array.count - index);
    NSMutableArray *result = [[array subarrayWithRange:range] mutableCopy];
    [result addObjectsFromArray:[array subarrayWithRange:NSMakeRange(0, index)]];
    return result;
}

@end
