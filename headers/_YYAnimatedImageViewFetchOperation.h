//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class UIImage, YYAnimatedImageView;
@protocol YYAnimatedImage;

@interface _YYAnimatedImageViewFetchOperation : NSOperation
{
    YYAnimatedImageView *_view;
    unsigned long long _nextIndex;
    UIImage<YYAnimatedImage> *_curImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage<YYAnimatedImage> *curImage; // @synthesize curImage=_curImage;
- (void)main;
@property(nonatomic) unsigned long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(nonatomic) __weak YYAnimatedImageView *view; // @synthesize view=_view;

@end

