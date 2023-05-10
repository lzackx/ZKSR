//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSYD_OtherRewardVideoAdManager, NSString;

@interface KSYD_ReadLockView : UIView
{
    _Bool _isComic;
    long long _location;
    NSString *_readerRewardKey;
    NSString *_readerRewardIndex;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _disMissBlock;
    CDUnknownBlockType _failBlock;
    CDUnknownBlockType _showBlock;
    UIView *_contentView;
    KSYD_OtherRewardVideoAdManager *_adManager;
    double _contentHeight;
    double _contentWidth;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KSYD_OtherRewardVideoAdManager *adManager; // @synthesize adManager=_adManager;
- (void)buildUI;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void)clickCencel;
- (void)clickSureBtn;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
- (void)disMiss;
@property(copy, nonatomic) CDUnknownBlockType disMissBlock; // @synthesize disMissBlock=_disMissBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(nonatomic) _Bool isComic; // @synthesize isComic=_isComic;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *readerRewardIndex; // @synthesize readerRewardIndex=_readerRewardIndex;
@property(copy, nonatomic) NSString *readerRewardKey; // @synthesize readerRewardKey=_readerRewardKey;
@property(copy, nonatomic) CDUnknownBlockType showBlock; // @synthesize showBlock=_showBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)show;

@end
