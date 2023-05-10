//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUSKOverlayCallBackDelegate-Protocol.h"

@class BUAdInfoViewModel, NSString, UIWindow;
@protocol BUSKOverlayManagerDelegate;

@interface BUSKOverlayManager : NSObject <BUSKOverlayCallBackDelegate>
{
    _Bool _hadShowSKOverlay;
    _Bool _shouldReopen;
    UIWindow *_window;
    NSObject<BUSKOverlayManagerDelegate> *_delegate;
    BUAdInfoViewModel *_indexModel;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)dismissOverlay;
+ (_Bool)hadShowSKOverlay;
+ (void)reShowOverlayWithIndexModel;
+ (void)setDelegateObjct:(id)arg1;
+ (id)shareInstance;
+ (void)showOverlayWithSKANModel:(id)arg1;
- (void).cxx_destruct;
- (void)appstoreDidAppear:(id)arg1;
- (void)appstoreDidDisAppear:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) __weak NSObject<BUSKOverlayManagerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hadShowSKOverlay; // @synthesize hadShowSKOverlay=_hadShowSKOverlay;
@property(retain, nonatomic) BUAdInfoViewModel *indexModel; // @synthesize indexModel=_indexModel;
- (void)promptsClose:(id)arg1;
- (void)promptsShow:(id)arg1;
- (void)registerNotification;
@property(nonatomic) _Bool shouldReopen; // @synthesize shouldReopen=_shouldReopen;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
- (void)storeOverlay:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)storeOverlay:(id)arg1 didFinishDismissal:(id)arg2;
- (void)storeOverlay:(id)arg1 didFinishPresentation:(id)arg2;
- (void)storeOverlay:(id)arg1 willStartDismissal:(id)arg2;
- (void)storeOverlay:(id)arg1 willStartPresentation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

