//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GADBinaryHeap : NSObject
{
    struct __CFBinaryHeap *_heap;
}

- (void)addObjectToHeap:(id)arg1;
- (_Bool)containsObject:(id)arg1;
@property(readonly, nonatomic) long long count;
- (void)dealloc;
- (id)initWithComparator:(CDUnknownFunctionPointerType)arg1;
- (id)minimum;
- (id)removedMinimum;
- (id)sortedObjects;

@end

