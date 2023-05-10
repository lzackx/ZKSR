//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADEventContextSource-Protocol.h"
#import "GADMonitorOwner-Protocol.h"

@class GADEventContext, GADRootViewControllerProvider, NSMutableArray, NSString;

@interface GADAdContent : NSObject <GADEventContextSource, GADMonitorOwner>
{
    GADEventContext *_context;
    NSMutableArray *_monitors;
    GADRootViewControllerProvider *_rootViewControllerProvider;
    NSString *_requestID;
}

- (void).cxx_destruct;
- (void)addMonitor:(id)arg1;
@property(readonly, nonatomic) GADEventContext *context;
- (id)initWithContext:(id)arg1;
@property(readonly, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) GADRootViewControllerProvider *rootViewControllerProvider; // @synthesize rootViewControllerProvider=_rootViewControllerProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

