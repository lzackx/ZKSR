//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol OS_dispatch_group;

@interface GADOperation : NSObject
{
    CDUnknownBlockType _operationBlock;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasStarted
    NSObject<OS_dispatch_group> *_completionGroup;
    id _result;
    NSError *_error;
    NSString *_operationName;
    CDUnknownBlockType _completionBlock;
    double _timeout;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dealloc;
- (id)initWithOperationName:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)start;

@end

