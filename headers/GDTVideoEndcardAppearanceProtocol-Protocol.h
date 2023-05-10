//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTAdBaseModel, NSString, UIViewController;

@protocol GDTVideoEndcardAppearanceProtocol <NSObject>
- (void)GDTfunctionq1UPQO;
@property(retain, nonatomic) GDTAdBaseModel *adModel;
@property(copy, nonatomic) CDUnknownBlockType deepLinkCallback;
@property(copy, nonatomic) CDUnknownBlockType endCardBodyClickedCallback;
@property(copy, nonatomic) CDUnknownBlockType endCardCloseButtonClickedCallback;
@property(copy, nonatomic) CDUnknownBlockType endCardReplayButtonClickedCallback;
- (_Bool)goBack;
@property(nonatomic) _Bool hasExposured;
- (id)initWithFrame:(struct CGRect)arg1 adModel:(GDTAdBaseModel *)arg2;
@property(copy, nonatomic) CDUnknownBlockType jumpToAppstoreCallback;
@property(copy, nonatomic) CDUnknownBlockType loadFailureCallback;
- (void)loadRequest;
@property(copy, nonatomic) CDUnknownBlockType loadSuccessCallback;
@property(nonatomic) long long playBeginTime;
- (void)preloadRequest;
@property(nonatomic) __weak UIViewController *rootViewController;
@property(nonatomic) unsigned long long status;
@property(copy, nonatomic) NSString *xjLandingPageUrl;
@end

