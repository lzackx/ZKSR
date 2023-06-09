//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBProgressHUDDelegate-Protocol.h"

@class MBProgressHUD, NSString;

@interface KSYD_ProgressHUD : NSObject <MBProgressHUDDelegate>
{
    _Bool _hudWasShow;
    CDUnknownBlockType _cancelAction;
    MBProgressHUD *_hud;
    MBProgressHUD *_readHud;
}

+ (void)hideLoadingHUD;
+ (void)hideReadLoadingHUD;
+ (id)shareProgressHUD;
+ (void)showErrorHUDWith:(id)arg1;
+ (void)showLoadingHUD;
+ (void)showLoadingHUDWithRead;
+ (void)showLoadingHUDWithString:(id)arg1;
+ (void)showMessageHUDWith:(id)arg1;
+ (void)showSloganHUDWith:(id)arg1;
+ (void)showStatusHUDWith:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
- (void)cancelWork:(id)arg1;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(nonatomic) _Bool hudWasShow; // @synthesize hudWasShow=_hudWasShow;
@property(retain, nonatomic) MBProgressHUD *readHud; // @synthesize readHud=_readHud;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

