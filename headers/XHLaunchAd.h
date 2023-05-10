//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIWindow, XHLaunchAdButton, XHLaunchAdVideoView, XHLaunchImageAdConfiguration, XHLaunchVideoAdConfiguration;
@protocol OS_dispatch_source, XHLaunchAdDelegate;

@interface XHLaunchAd : NSObject
{
    _Bool _detailPageShowing;
    id <XHLaunchAdDelegate> _delegate;
    long long _launchAdType;
    long long _waitDataDuration;
    XHLaunchImageAdConfiguration *_imageAdConfiguration;
    XHLaunchVideoAdConfiguration *_videoAdConfiguration;
    XHLaunchAdButton *_skipButton;
    XHLaunchAdVideoView *_adVideoView;
    UIWindow *_window;
    NSObject<OS_dispatch_source> *_waitDataTimer;
    NSObject<OS_dispatch_source> *_skipTimer;
    struct CGPoint _clickPoint;
}

+ (id)cacheImageURLString;
+ (id)cacheVideoURLString;
+ (_Bool)checkImageInCacheWithURL:(id)arg1;
+ (_Bool)checkVideoInCacheWithURL:(id)arg1;
+ (void)clearDiskCache;
+ (void)clearDiskCacheExceptImageUrlArray:(id)arg1;
+ (void)clearDiskCacheExceptVideoUrlArray:(id)arg1;
+ (void)clearDiskCacheWithImageUrlArray:(id)arg1;
+ (void)clearDiskCacheWithVideoUrlArray:(id)arg1;
+ (float)diskCacheSize;
+ (void)downLoadImageAndCacheWithURLArray:(id)arg1;
+ (void)downLoadImageAndCacheWithURLArray:(id)arg1 completed:(CDUnknownBlockType)arg2;
+ (void)downLoadVideoAndCacheWithURLArray:(id)arg1;
+ (void)downLoadVideoAndCacheWithURLArray:(id)arg1 completed:(CDUnknownBlockType)arg2;
+ (id)imageAdWithImageAdConfiguration:(id)arg1;
+ (id)imageAdWithImageAdConfiguration:(id)arg1 delegate:(id)arg2;
+ (void)removeAndAnimated:(_Bool)arg1;
+ (void)setLaunchImagesSource:(long long)arg1;
+ (void)setLaunchSourceType:(long long)arg1;
+ (void)setWaitDataDuration:(long long)arg1;
+ (id)shareLaunchAd;
+ (void)skipAction;
+ (id)videoAdWithVideoAdConfiguration:(id)arg1;
+ (id)videoAdWithVideoAdConfiguration:(id)arg1 delegate:(id)arg2;
+ (id)xhLaunchAdCachePath;
- (void).cxx_destruct;
@property(retain, nonatomic) XHLaunchAdVideoView *adVideoView; // @synthesize adVideoView=_adVideoView;
- (void)addSkipButtonForConfiguration:(id)arg1;
- (void)addSubViews:(id)arg1;
- (void)clickAndPoint:(struct CGPoint)arg1;
@property(nonatomic) struct CGPoint clickPoint; // @synthesize clickPoint=_clickPoint;
- (id)commonConfiguration;
- (void)dealloc;
@property(nonatomic) id <XHLaunchAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool detailPageShowing; // @synthesize detailPageShowing=_detailPageShowing;
@property(retain, nonatomic) XHLaunchImageAdConfiguration *imageAdConfiguration; // @synthesize imageAdConfiguration=_imageAdConfiguration;
- (id)init;
@property(nonatomic) long long launchAdType; // @synthesize launchAdType=_launchAdType;
- (void)remove;
- (void)removeAndAnimate;
- (void)removeAndAnimateDefault;
- (void)removeAndAnimated:(_Bool)arg1;
- (void)removeSubViewsExceptLaunchAdImageView;
@property(retain, nonatomic) XHLaunchAdButton *skipButton; // @synthesize skipButton=_skipButton;
@property(copy, nonatomic) NSObject<OS_dispatch_source> *skipTimer; // @synthesize skipTimer=_skipTimer;
@property(retain, nonatomic) XHLaunchVideoAdConfiguration *videoAdConfiguration; // @synthesize videoAdConfiguration=_videoAdConfiguration;
@property(nonatomic) long long waitDataDuration; // @synthesize waitDataDuration=_waitDataDuration;
@property(copy, nonatomic) NSObject<OS_dispatch_source> *waitDataTimer; // @synthesize waitDataTimer=_waitDataTimer;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)setupImageAdForConfiguration:(id)arg1;
- (void)setupLaunchAd;
- (void)setupLaunchAdEnterForeground;
- (void)setupVideoAdForConfiguration:(id)arg1;
- (void)skipButtonClick;
- (void)startSkipDispathTimer;
- (void)startWaitDataDispathTiemr;

@end
