//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSYD_CoverController, NSString, UIViewController;

@protocol KSYD_CoverControllerDelegate <NSObject>

@optional
- (void)coverController:(KSYD_CoverController *)arg1 currentController:(UIViewController *)arg2 finish:(_Bool)arg3 perClass:(NSString *)arg4 chapter:(long long)arg5 page:(long long)arg6;
- (UIViewController *)coverController:(KSYD_CoverController *)arg1 getAboveControllerWithCurrentController:(UIViewController *)arg2;
- (UIViewController *)coverController:(KSYD_CoverController *)arg1 getBelowControllerWithCurrentController:(UIViewController *)arg2;
- (void)coverController:(KSYD_CoverController *)arg1 willTransitionToPendingController:(UIViewController *)arg2;
@end

