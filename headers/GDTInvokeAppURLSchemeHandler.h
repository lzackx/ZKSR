//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTInvokeAppProtocol-Protocol.h"

@class NSString;

@interface GDTInvokeAppURLSchemeHandler : NSObject <GDTInvokeAppProtocol>
{
}

+ (_Bool)canOpenUrlScheme:(id)arg1;
+ (void)openURL:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failedHandler:(CDUnknownBlockType)arg3;
+ (_Bool)openUrlScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

