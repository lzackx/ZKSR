//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GADMediaContent, GADObserverCollection;
@protocol GADMediaContentDisplaying;

@interface GADMediaView : UIView
{
    id <GADMediaContentDisplaying> _internalMediaContent;
    GADMediaContent *_mediaContent;
    UIView *_mediaView;
    GADObserverCollection *_observers;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
@property(retain, nonatomic) GADMediaContent *mediaContent;
- (void)setContentMode:(long long)arg1;
- (void)setInternalMediaContent:(id)arg1;

@end

