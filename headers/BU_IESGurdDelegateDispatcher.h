//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, Protocol;

@interface BU_IESGurdDelegateDispatcher : NSObject
{
    Protocol *_protocol;
    NSHashTable *_delegatesHashTable;
}

+ (id)dispatcherWithProtocol:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *delegatesHashTable; // @synthesize delegatesHashTable=_delegatesHashTable;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (void)registerDelegate:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)unregisterDelegate:(id)arg1;

@end

