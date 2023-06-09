//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BUVideofinishViewProtocol-Protocol.h"

@class BUMaterialMeta, NSString, UIButton, UIImageView, UILabel;

@interface BUNormalVideoFinishView : UIView <BUVideofinishViewProtocol>
{
    BUMaterialMeta *materialMeta;
    CDUnknownBlockType detailClick;
    CDUnknownBlockType _replayClick;
    UIView *_maskView;
    UIButton *_detailButton;
    UIButton *_replayButton;
    UIImageView *_finishBackgroundView;
    UILabel *_oneCharLabel;
    UILabel *_sourceLabel;
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
- (void)addAccessibilityIdentifier;
- (void)buildViews;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(copy, nonatomic) CDUnknownBlockType detailClick; // @synthesize detailClick;
@property(retain, nonatomic) UIImageView *finishBackgroundView; // @synthesize finishBackgroundView=_finishBackgroundView;
- (void)goToDetail:(id)arg1;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (id)init;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) BUMaterialMeta *materialMeta; // @synthesize materialMeta;
@property(retain, nonatomic) UILabel *oneCharLabel; // @synthesize oneCharLabel=_oneCharLabel;
- (void)reSetFrameWithsuperFrame:(struct CGRect)arg1;
- (void)replay:(id)arg1;
@property(retain, nonatomic) UIButton *replayButton; // @synthesize replayButton=_replayButton;
@property(copy, nonatomic) CDUnknownBlockType replayClick; // @synthesize replayClick=_replayClick;
- (void)setFinishViewDataWithMaterialMeta:(id)arg1;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
- (void)setupFinshMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

