//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MJRefresh/MJRefreshGifHeader.h>

@class LOTAnimationView, UILabel;

@interface KSYD_GifHeader : MJRefreshGifHeader
{
    long long _loadingH;
    UILabel *_label;
    LOTAnimationView *_loadingView;
}

- (void).cxx_destruct;
- (void)endRefreshing;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(nonatomic) long long loadingH; // @synthesize loadingH=_loadingH;
@property(retain, nonatomic) LOTAnimationView *loadingView; // @synthesize loadingView=_loadingView;
- (void)prepare;
- (void)setPullingPercent:(double)arg1;
- (void)setState:(long long)arg1;

@end
