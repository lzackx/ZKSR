//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMPLoggerDelegate-Protocol.h"

@class NSString;

@interface APMPixieLogger : NSObject <APMPLoggerDelegate>
{
}

- (void)logWithLevel:(long long)arg1 message:(id)arg2 context:(id)arg3 silent:(_Bool)arg4 monitored:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
