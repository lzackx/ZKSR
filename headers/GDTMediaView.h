//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTBizVideoPlayerViewDelegate-Protocol.h"
#import "GDTMediaViewConnectorProtocol-Protocol.h"
#import "GDTVideoStoreViewControllerDelegate-Protocol.h"

@class GDTBizFeedVideoPlayerView, GDTUnifiedNativeAdDataObject, NSString, UIViewController;
@protocol GDTMediaViewDelegate;

@interface GDTMediaView : UIView <GDTMediaViewConnectorProtocol, GDTVideoStoreViewControllerDelegate, GDTBizVideoPlayerViewDelegate>
{
    _Bool _videoAutoPlayOnWWAN;
    _Bool _videoMuted;
    _Bool _hasAddedToAntiSpam;
    id <GDTMediaViewDelegate> _delegate;
    GDTUnifiedNativeAdDataObject *_dataObject;
    GDTBizFeedVideoPlayerView *_bizVideoPlayerView;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
- (void)GDTfunctiona1wXv6:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType GDTfunctiona6HXyy; // @dynamic GDTfunctiona6HXyy;
@property(copy, nonatomic) CDUnknownBlockType GDTfunctionc2PJaI; // @dynamic GDTfunctionc2PJaI;
- (void)GDTfunctiond6IJZ6:(id)arg1;
- (void)GDTfunctionf7U4GD:(id)arg1;
- (void)GDTfunctionf7hlMg;
- (void)GDTfunctioni2zlKg:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType GDTfunctioni9Z9Up; // @dynamic GDTfunctioni9Z9Up;
- (void)GDTfunctionj22uid:(unsigned long long)arg1 duration:(long long)arg2;
@property(copy, nonatomic) CDUnknownBlockType GDTfunctionl5MlJs; // @dynamic GDTfunctionl5MlJs;
- (void)GDTfunctionq3ZTze:(id)arg1;
- (void)GDTfunctionr5gYVq:(id)arg1;
- (void)GDTfunctionr6FrU0;
- (void)GDTfunctionr7F3FM;
@property(copy, nonatomic) CDUnknownBlockType GDTfunctiont1yC0t; // @dynamic GDTfunctiont1yC0t;
- (void)GDTfunctiont6DgtJ;
- (void)GDTfunctionu9kyyR:(id)arg1;
- (void)GDTfunctionw6ZZiC;
- (void)GDTfunctionz9k4nV:(id)arg1 dataObject:(id)arg2 viewController:(id)arg3;
- (void)adapter_mediaViewDidPlayFinished:(id)arg1;
- (void)adapter_mediaViewDidTapped:(id)arg1;
- (void)autoPlay;
@property(retain, nonatomic) GDTBizFeedVideoPlayerView *bizVideoPlayerView; // @synthesize bizVideoPlayerView=_bizVideoPlayerView;
@property(nonatomic) __weak GDTUnifiedNativeAdDataObject *dataObject; // @synthesize dataObject=_dataObject;
- (void)dealloc;
@property(nonatomic) __weak id <GDTMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasAddedToAntiSpam; // @synthesize hasAddedToAntiSpam=_hasAddedToAntiSpam;
- (id)init;
- (void)muteEnable:(_Bool)arg1;
- (void)pause;
- (void)play;
- (void)setPlayButtonImage:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic) _Bool videoAutoPlayOnWWAN; // @synthesize videoAutoPlayOnWWAN=_videoAutoPlayOnWWAN;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)stop;
- (double)videoDuration;
- (double)videoPlayTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

