//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTSplashUtils : NSObject
{
}

+ (_Bool)allowSplashADShowSlideAnimationWithAdModel:(id)arg1;
+ (_Bool)appStoreClickInvalidFix;
+ (id)dataWithParams:(id)arg1 isFromPreload:(_Bool)arg2;
+ (double)doPreloadABTestWithSettingKey:(id)arg1 cfgDict:(id)arg2;
+ (void)fitFrameForLogoView:(id)arg1 skipStyle:(long long)arg2;
+ (long long)getExposureDurationWithModel:(id)arg1;
+ (id)gxbBannerClickAreaScope:(id)arg1;
+ (_Bool)isGxbBannerEnableAndRestrictWithAdModel:(id)arg1;
+ (_Bool)isGxbBannerEnableWithAdModel:(id)arg1;
+ (_Bool)isOnlyShakeViewClickable:(id)arg1;
+ (_Bool)isShakeSupported:(id)arg1;
+ (double)preloadDelayDuration;
+ (void)savePreloadDelayDurationWithCfg:(id)arg1;
+ (long long)shakeCheckCount:(id)arg1;
+ (double)shakeSensitivity:(id)arg1;
+ (id)shakeSubTitle:(id)arg1;
+ (id)shakeTitle:(id)arg1;
+ (long long)shakeViewClickAreaScope:(id)arg1;
+ (_Bool)shouldRemoveCacheWhenUsed:(id)arg1;
+ (struct CGRect)skipViewRectWithSkipStyle:(long long)arg1 bottomView:(id)arg2 hitSplashZoomOut:(_Bool)arg3 fitLogoView:(_Bool)arg4 vPlusSkipDirectly:(_Bool)arg5;
+ (long long)skipViewStyleWithAdModel:(id)arg1;
+ (_Bool)slideGuideSupportedWithAdModel:(id)arg1;
+ (_Bool)supportPreloadWithAdModel:(id)arg1;
+ (_Bool)supportSplashLongVideo:(id)arg1;
+ (_Bool)vPlusSkipDirectlyWithPlacementId:(id)arg1;

@end

