//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTFMCComponentHandler.h"

#import "GDTLandingPageWebViewControllerDelegate-Protocol.h"

@class GDTLandingPageWebViewController, NSString;

@interface GDTConsultComponentHandler : GDTFMCComponentHandler <GDTLandingPageWebViewControllerDelegate>
{
    CDUnknownBlockType _dismissBlock;
    GDTLandingPageWebViewController *_webviewController;
}

- (void).cxx_destruct;
- (void)GDTfunctionm44HmC:(id)arg1 dismissBlock:(CDUnknownBlockType)arg2;
- (void)GDTfunctionp6HFVg:(id)arg1;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) GDTLandingPageWebViewController *webviewController; // @synthesize webviewController=_webviewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
