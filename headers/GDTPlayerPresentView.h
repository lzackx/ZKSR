//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTPlayerView.h"

@class AVPlayer, NSString;

@interface GDTPlayerPresentView : GDTPlayerView
{
    AVPlayer *_player;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)avLayer;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSString *videoGravity;

@end

