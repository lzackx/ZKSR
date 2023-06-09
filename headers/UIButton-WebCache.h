//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSDictionary, NSURL;

@interface UIButton (WebCache)
+ (id)createBlockButtonWithButtonStyle:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
+ (id)createBlockButtonWithFrame:(struct CGRect)arg1 andButtonStyle:(id)arg2 andCallBack:(CDUnknownBlockType)arg3;
+ (id)createButtonFrame:(struct CGRect)arg1 backImageName:(id)arg2 title:(id)arg3 titleColor:(id)arg4 font:(id)arg5 target:(id)arg6 action:(SEL)arg7;
+ (void)setSharedImageDownloader:(id)arg1;
+ (id)sharedImageDownloader;
- (void)_yy_cancelBackgroundImageRequestForSingleState:(id)arg1;
- (void)_yy_cancelImageRequestForSingleState:(id)arg1;
- (void)_yy_setBackgroundImageWithURL:(id)arg1 forSingleState:(id)arg2 placeholder:(id)arg3 options:(unsigned long long)arg4 manager:(id)arg5 progress:(CDUnknownBlockType)arg6 transform:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_yy_setImageWithURL:(id)arg1 forSingleState:(id)arg2 placeholder:(id)arg3 options:(unsigned long long)arg4 manager:(id)arg5 progress:(CDUnknownBlockType)arg6 transform:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (id)af_backgroundImageDownloadReceiptForState:(unsigned long long)arg1;
- (id)af_imageDownloadReceiptForState:(unsigned long long)arg1;
- (void)af_setBackgroundImageDownloadReceipt:(id)arg1 forState:(unsigned long long)arg2;
- (void)af_setImageDownloadReceipt:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGPoint)beginPoint;
- (id)bu_eventDict;
@property(readonly, nonatomic) NSDictionary *bu_eventDict_sec;
@property(nonatomic) long long bu_phase;
- (void)cancelBackgroundImageDownloadTaskForState:(unsigned long long)arg1;
- (void)cancelImageDownloadTaskForState:(unsigned long long)arg1;
@property(nonatomic) struct CGRect ctaFrame;
- (_Bool)isActiveBackgroundTaskURLEqualToURLRequest:(id)arg1 forState:(unsigned long long)arg2;
- (_Bool)isActiveTaskURLEqualToURLRequest:(id)arg1 forState:(unsigned long long)arg2;
- (id)sdBu_backgroundImageURLForState:(unsigned long long)arg1;
- (void)sdBu_cancelBackgroundImageLoadForState:(unsigned long long)arg1;
- (void)sdBu_cancelImageLoadForState:(unsigned long long)arg1;
@property(readonly, nonatomic) NSURL *sdBu_currentBackgroundImageURL;
@property(readonly, nonatomic) NSURL *sdBu_currentImageURL;
- (id)sdBu_imageURLForState:(unsigned long long)arg1;
- (id)sdBu_imageURLStorage;
- (void)sdBu_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2;
- (void)sdBu_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sdBu_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3;
- (void)sdBu_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sdBu_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4;
- (void)sdBu_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sdBu_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 context:(id)arg5;
- (void)sdBu_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 context:(id)arg5 progress:(CDUnknownBlockType)arg6 completed:(CDUnknownBlockType)arg7;
- (void)sdBu_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (void)sdBu_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2;
- (void)sdBu_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sdBu_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3;
- (void)sdBu_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sdBu_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4;
- (void)sdBu_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sdBu_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 context:(id)arg5;
- (void)sdBu_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 context:(id)arg5 progress:(CDUnknownBlockType)arg6 completed:(CDUnknownBlockType)arg7;
- (void)sdBu_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (id)sd_backgroundImageURLForState:(unsigned long long)arg1;
- (void)sd_cancelBackgroundImageLoadForState:(unsigned long long)arg1;
- (void)sd_cancelImageLoadForState:(unsigned long long)arg1;
@property(readonly, nonatomic) NSURL *sd_currentBackgroundImageURL;
@property(readonly, nonatomic) NSURL *sd_currentImageURL;
- (id)sd_imageURLForState:(unsigned long long)arg1;
- (id)sd_imageURLStorage;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 context:(id)arg5;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 context:(id)arg5 progress:(CDUnknownBlockType)arg6 completed:(CDUnknownBlockType)arg7;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 context:(id)arg5;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 context:(id)arg5 progress:(CDUnknownBlockType)arg6 completed:(CDUnknownBlockType)arg7;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURL:(id)arg2;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURL:(id)arg2 placeholderImage:(id)arg3;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURLRequest:(id)arg2 placeholderImage:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setBeginPoint:(struct CGPoint)arg1;
- (void)setBu_eventDict:(id)arg1;
- (void)setImageForState:(unsigned long long)arg1 withURL:(id)arg2;
- (void)setImageForState:(unsigned long long)arg1 withURL:(id)arg2 placeholderImage:(id)arg3;
- (void)setImageForState:(unsigned long long)arg1 withURLRequest:(id)arg2 placeholderImage:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setSubstituteFontName:(id)arg1;
@property(nonatomic) long long user_behavior_move;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)yy_backgroundImageURLForState:(unsigned long long)arg1;
- (void)yy_cancelBackgroundImageRequestForState:(unsigned long long)arg1;
- (void)yy_cancelImageRequestForState:(unsigned long long)arg1;
- (id)yy_imageURLForState:(unsigned long long)arg1;
- (void)yy_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (void)yy_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholder:(id)arg3;
- (void)yy_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholder:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)yy_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholder:(id)arg3 options:(unsigned long long)arg4 manager:(id)arg5 progress:(CDUnknownBlockType)arg6 transform:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)yy_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholder:(id)arg3 options:(unsigned long long)arg4 progress:(CDUnknownBlockType)arg5 transform:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)yy_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (void)yy_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholder:(id)arg3;
- (void)yy_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholder:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)yy_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholder:(id)arg3 options:(unsigned long long)arg4 manager:(id)arg5 progress:(CDUnknownBlockType)arg6 transform:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)yy_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholder:(id)arg3 options:(unsigned long long)arg4 progress:(CDUnknownBlockType)arg5 transform:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
@end

