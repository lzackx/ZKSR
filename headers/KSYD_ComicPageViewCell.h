//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "BarrageRendererDelegate-Protocol.h"

@class BarrageRenderer, KSYD_ComicBarrageModel, KSYD_ComicChapterModel, NSString, UIButton, UIImageView, UILabel, UIView, YYAnimatedImageView;
@protocol KSYD_ComicPageViewCellCellDelegate;

@interface KSYD_ComicPageViewCell : UICollectionViewCell <BarrageRendererDelegate>
{
    KSYD_ComicChapterModel *_chapterModel;
    YYAnimatedImageView *_contentImageView;
    id <KSYD_ComicPageViewCellCellDelegate> _delegate;
    double _viewH;
    NSString *_imagePath;
    UILabel *_indexLabel;
    UIView *_reloadView;
    UIImageView *_reloadImageV;
    UILabel *_messageLabel;
    UIButton *_reloadLabel;
    long long _barrageIndex;
    BarrageRenderer *_renderer;
    KSYD_ComicBarrageModel *_barrageModel;
}

- (void).cxx_destruct;
- (void)KSYD_addBarrage;
- (void)KSYD_barrageMessage:(id)arg1;
- (void)KSYD_showMessage:(long long)arg1;
- (id)avatarBarrageViewSpriteDescriptorWithDirection:(unsigned long long)arg1 side:(unsigned long long)arg2 line:(long long)arg3;
- (id)avatarBarrageViewSpriteDescriptorWithDirection:(unsigned long long)arg1 side:(unsigned long long)arg2 line:(long long)arg3 model:(id)arg4;
@property(nonatomic) long long barrageIndex; // @synthesize barrageIndex=_barrageIndex;
@property(retain, nonatomic) KSYD_ComicBarrageModel *barrageModel; // @synthesize barrageModel=_barrageModel;
- (void)barrageRenderer:(id)arg1 spriteStage:(long long)arg2 spriteParams:(id)arg3 sprite:(id)arg4;
- (void)cancelMockingBarrageMessage;
@property(retain, nonatomic) KSYD_ComicChapterModel *chapterModel; // @synthesize chapterModel=_chapterModel;
- (void)clickReload;
@property(retain, nonatomic) YYAnimatedImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
- (void)dealloc;
@property(nonatomic) __weak id <KSYD_ComicPageViewCellCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) UILabel *indexLabel; // @synthesize indexLabel=_indexLabel;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIImageView *reloadImageV; // @synthesize reloadImageV=_reloadImageV;
@property(retain, nonatomic) UIButton *reloadLabel; // @synthesize reloadLabel=_reloadLabel;
@property(retain, nonatomic) UIView *reloadView; // @synthesize reloadView=_reloadView;
@property(retain, nonatomic) BarrageRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) double viewH; // @synthesize viewH=_viewH;
- (void)setupUI;
- (void)startMockingBarrageMessage;
- (void)stopMockingBarrageMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
