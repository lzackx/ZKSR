//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GADViewHierarchyTraverser : NSObject
{
    _Bool _traversing;
    long long _sequenceNumber;
    NSObject<OS_dispatch_queue> *_SDKLowPrioritySerialQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)setTraversing:(_Bool)arg1;
- (void)traverseView:(id)arg1 traversalBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

