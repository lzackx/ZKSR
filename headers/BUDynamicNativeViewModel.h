//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUAdInfoViewModel, BUDynamicAdInfoModel, BUDynamicAppInfoModel, BUDynamicTemplateInfoModel;

@interface BUDynamicNativeViewModel : NSObject
{
    BUDynamicTemplateInfoModel *_templateInfoModel;
    BUDynamicAppInfoModel *_appInfoModel;
    BUDynamicAdInfoModel *_adInfoModel;
    BUAdInfoViewModel *_infoViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUDynamicAdInfoModel *adInfoModel; // @synthesize adInfoModel=_adInfoModel;
- (long long)appCommentNum;
- (id)appIconURLString;
@property(retain, nonatomic) BUDynamicAppInfoModel *appInfoModel; // @synthesize appInfoModel=_appInfoModel;
- (id)appName;
- (double)appScore;
- (id)button_text;
- (long long)comment_num_i18n;
- (long long)defaultCommentNumValue;
@property(retain, nonatomic) BUAdInfoViewModel *infoViewModel; // @synthesize infoViewModel=_infoViewModel;
- (id)initWithDictionary:(id)arg1 infoViewModel:(id)arg2;
- (_Bool)originMuted;
- (double)realAppScore;
- (struct CGSize)recommendSize;
- (double)score_exact_i18n;
@property(retain, nonatomic) BUDynamicTemplateInfoModel *templateInfoModel; // @synthesize templateInfoModel=_templateInfoModel;
- (long long)skipShowPolicyWithSkipShowTime:(long long *)arg1;
- (double)skipTime;
- (long long)videoDuration;

@end
