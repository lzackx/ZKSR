//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol BUNativeExpressBannerOverseaDislikeViewDelegate;

@interface BUNativeExpressBannerOverseaDislikeView : UIView
{
    _Bool _isSmallBanner;
    id <BUNativeExpressBannerOverseaDislikeViewDelegate> _delegate;
    UIImageView *_backgroundImageView;
    UILabel *_closeLabel;
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)buildupView;
@property(retain, nonatomic) UILabel *closeLabel; // @synthesize closeLabel=_closeLabel;
@property(nonatomic) __weak id <BUNativeExpressBannerOverseaDislikeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)gotoLogoWebViewVoid;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isSmallBanner; // @synthesize isSmallBanner=_isSmallBanner;
- (void)layoutSubviews;

@end

