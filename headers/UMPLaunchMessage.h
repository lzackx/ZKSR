//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class NSDictionary, NSString, UIButton, UIImageView, UIViewController, UIWindow, UMPADModel, UMPADViewController;
@protocol OS_dispatch_source;

@interface UMPLaunchMessage : NSObject <NSCacheDelegate>
{
    _Bool _debugMode;
    long long _noDataDuration;
    UMPADViewController *_launchVc;
    UIImageView *_launchView;
    UIImageView *_messageImgView;
    UIImageView *_bottomImgView;
    UIButton *_skipButton;
    NSObject<OS_dispatch_source> *_noDataTimer;
    NSObject<OS_dispatch_source> *_skipButtonTimer;
    long long _duration;
    UMPADModel *_launchModel;
    NSDictionary *_launchDictionary;
    NSString *_skipDisplayName;
    long long _postDurantion;
    double _startT;
    UIWindow *_finishDisplayWindow;
    UIViewController *_finishViewController;
    UIWindow *_adwindow;
    NSString *_file;
    NSString *_webViewClassString;
    struct CGRect _messageFrame;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)debugMode;
+ (void)initLaunchMessage;
+ (void)setDebugMode:(_Bool)arg1;
+ (void)setWebViewClassString:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) UIWindow *adwindow; // @synthesize adwindow=_adwindow;
@property(retain, nonatomic) UIImageView *bottomImgView; // @synthesize bottomImgView=_bottomImgView;
- (void)btnclick;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createDB;
- (void)dealWithBottomStatWithResult:(id)arg1 image:(id)arg2;
- (id)dealWithDisplayStatistics;
- (void)dealWithLogic;
- (void)dealWithLogicWhenRequestFail;
- (void)dealWithTopStatWithResult:(id)arg1 image:(id)arg2;
- (int)dealwithShowtimes;
@property(nonatomic) _Bool debugMode; // @synthesize debugMode=_debugMode;
- (void)displayBottom;
- (void)displayLaunchAD;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *file; // @synthesize file=_file;
@property(retain, nonatomic) UIWindow *finishDisplayWindow; // @synthesize finishDisplayWindow=_finishDisplayWindow;
@property(retain, nonatomic) UIViewController *finishViewController; // @synthesize finishViewController=_finishViewController;
- (id)getLaunchImage;
- (void)initLaunchMessage;
- (void)initViewFrame;
@property(retain, nonatomic) NSDictionary *launchDictionary; // @synthesize launchDictionary=_launchDictionary;
- (id)launchImageWithType:(id)arg1;
@property(retain, nonatomic) UMPADModel *launchModel; // @synthesize launchModel=_launchModel;
@property(retain, nonatomic) UMPADViewController *launchVc; // @synthesize launchVc=_launchVc;
@property(retain, nonatomic) UIImageView *launchView; // @synthesize launchView=_launchView;
@property(nonatomic) struct CGRect messageFrame; // @synthesize messageFrame=_messageFrame;
@property(retain, nonatomic) UIImageView *messageImgView; // @synthesize messageImgView=_messageImgView;
@property(nonatomic) long long noDataDuration; // @synthesize noDataDuration=_noDataDuration;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *noDataTimer; // @synthesize noDataTimer=_noDataTimer;
- (void)openUrlWithUrl:(id)arg1;
@property(nonatomic) long long postDurantion; // @synthesize postDurantion=_postDurantion;
- (void)remove;
- (void)removeCache;
- (void)saveNewMessageDataWithresponseObject:(id)arg1;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *skipButtonTimer; // @synthesize skipButtonTimer=_skipButtonTimer;
@property(copy, nonatomic) NSString *skipDisplayName; // @synthesize skipDisplayName=_skipDisplayName;
@property(nonatomic) double startT; // @synthesize startT=_startT;
@property(copy, nonatomic) NSString *webViewClassString; // @synthesize webViewClassString=_webViewClassString;
- (void)setupAdImgViewAndSkipButton;
- (void)startNoDataDispath_tiemr;
- (void)startSkipButtonTimer;
- (void)tapAction:(id)arg1;
- (void)tapBottomAction:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
