//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerLayer, GADObserverCollection, GADVideoPlayer;

@interface GADVideoPlayerView : UIView
{
    GADVideoPlayer *_player;
    AVPlayerLayer *_playerLayer;
    GADObserverCollection *_didActivateObservers;
}

- (void).cxx_destruct;
- (void)resetPlayerLayer;
- (void)setFrame:(struct CGRect)arg1;
- (void)setUpWithPlayer:(id)arg1;

@end

