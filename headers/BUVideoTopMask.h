//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class BUAdSlot, BUMaterialMeta, BUStarView, NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol BUBUVideoTopMaskClickDelegate;

@interface BUVideoTopMask : UIView <UIGestureRecognizerDelegate>
{
    id <BUBUVideoTopMaskClickDelegate> _delegate;
    BUMaterialMeta *_materialMeta;
    BUAdSlot *_slot;
    UIView *_containerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    BUStarView *_starView;
    UILabel *_scoreLabel;
    UITapGestureRecognizer *_tapGesture;
    UITapGestureRecognizer *_subviewsTapGesture;
    NSString *_clickTypeString;
    long long _starCount;
}

- (void).cxx_destruct;
- (void)addGesture;
- (void)buildUpView;
- (id)c_xyDict;
@property(copy, nonatomic) NSString *clickTypeString; // @synthesize clickTypeString=_clickTypeString;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <BUBUVideoTopMaskClickDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (id)initWithMaterialMeta:(id)arg1 slot:(id)arg2;
- (void)layoutSubviews;
- (void)maskTapped:(id)arg1;
@property(retain, nonatomic) BUMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) BUAdSlot *slot; // @synthesize slot=_slot;
@property(nonatomic) long long starCount; // @synthesize starCount=_starCount;
@property(retain, nonatomic) BUStarView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UITapGestureRecognizer *subviewsTapGesture; // @synthesize subviewsTapGesture=_subviewsTapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)subViewsTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

