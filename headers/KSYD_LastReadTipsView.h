//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class YBookDetailModel;

@interface KSYD_LastReadTipsView : UIView
{
    CDUnknownBlockType _SuccessBlock;
    UIView *_contentView;
    YBookDetailModel *_model;
}

- (void).cxx_destruct;
- (id)KSYD_cachePathWithSummaryM:(id)arg1;
- (id)KSYD_getBookRecordPercentWithBook:(id)arg1;
- (id)KSYD_recordKeyWithSummayM:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType SuccessBlock; // @synthesize SuccessBlock=_SuccessBlock;
- (void)buildUI;
- (void)clickRead;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)disMiss;
- (id)init;
@property(retain, nonatomic) YBookDetailModel *model; // @synthesize model=_model;
- (void)show;

@end

