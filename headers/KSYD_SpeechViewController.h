//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSYD_BaseViewController.h"

#import "KSYD_SpeechManagerDelegate-Protocol.h"

@class KSYD_ChapterContentModel, KSYD_OtherRewardVideoAdManager, KSYD_ReaderManager, KSYD_ReaderSettings, KSYD_SpeechManager, NSArray, NSLayoutConstraint, NSString, NSTimer, UIButton, UIImageView, UILabel, UIScrollView, UISlider, UIView;
@protocol YSpeechViewDelegate;

@interface KSYD_SpeechViewController : KSYD_BaseViewController <KSYD_SpeechManagerDelegate>
{
    id <YSpeechViewDelegate> _delegate;
    unsigned long long _page;
    unsigned long long _chapter;
    KSYD_ReaderManager *_readerManager;
    UIView *_backView;
    NSLayoutConstraint *_backViewBottom;
    UIButton *_exitBtn;
    UIButton *_playBtn;
    UISlider *_speechRateSlider;
    UIView *_tapView;
    KSYD_SpeechManager *_speechManager;
    KSYD_ChapterContentModel *_speechChapterM;
    unsigned long long _startSpeechCount;
    NSTimer *_changeRateTimer;
    UIButton *_timerBtn5;
    UIButton *_timerBtn15;
    UIButton *_timerBtn30;
    UIButton *_timerBtn60;
    NSArray *_timerBtnArray;
    NSTimer *_changeVoiceTimer;
    NSArray *_voiceBtnArray;
    NSArray *_voiceStringArray;
    UISlider *_speechPitch;
    NSTimer *_closeTimer;
    NSTimer *_changePitchTimer;
    KSYD_ReaderSettings *_readerSettings;
    UIView *_contentView;
    NSLayoutConstraint *_contentViewWidth;
    UIScrollView *_scrollView;
    UIView *_slideContentView;
    UILabel *_rateValue;
    NSLayoutConstraint *_rateLeftCons;
    UIButton *_lastSelBtn;
    UIButton *_voiceNative;
    UIButton *_voiceGirl;
    UIButton *_voiceBoy;
    UIButton *_voiceXiaoYao;
    UIButton *_voiceWuXia;
    UIButton *_voiceQingnian;
    UIButton *_voiceYaYa;
    UIButton *_voiceLuoli;
    UIButton *_voiceZhixing;
    UIView *_btnView;
    UIImageView *_bgV;
    KSYD_OtherRewardVideoAdManager *_otherAdManager;
}

- (void).cxx_destruct;
- (id)ButtonWithTitle:(id)arg1 andX:(double)arg2;
- (void)KSYD_showSpeechAction;
- (void)KSYD_showSpeechView;
- (void)KSYD_updateSpeakChapter:(unsigned long long)arg1 page:(unsigned long long)arg2;
- (void)addStepSlide;
- (void)addVoiceButton;
@property(nonatomic) __weak UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak NSLayoutConstraint *backViewBottom; // @synthesize backViewBottom=_backViewBottom;
@property(nonatomic) __weak UIImageView *bgV; // @synthesize bgV=_bgV;
@property(nonatomic) __weak UIView *btnView; // @synthesize btnView=_btnView;
- (void)changeColor;
@property(retain, nonatomic) NSTimer *changePitchTimer; // @synthesize changePitchTimer=_changePitchTimer;
@property(retain, nonatomic) NSTimer *changeRateTimer; // @synthesize changeRateTimer=_changeRateTimer;
@property(retain, nonatomic) NSTimer *changeVoiceTimer; // @synthesize changeVoiceTimer=_changeVoiceTimer;
@property(nonatomic) unsigned long long chapter; // @synthesize chapter=_chapter;
@property(retain, nonatomic) NSTimer *closeTimer; // @synthesize closeTimer=_closeTimer;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak NSLayoutConstraint *contentViewWidth; // @synthesize contentViewWidth=_contentViewWidth;
- (void)dealloc;
@property(nonatomic) __weak id <YSpeechViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
@property(nonatomic) __weak UIButton *exitBtn; // @synthesize exitBtn=_exitBtn;
- (void)exitReader;
- (void)exitSpeechString;
- (id)getSelctColor;
- (void)handleInterrupOtherApp:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)handleRouteChange:(id)arg1;
- (void)hideSpeechView;
@property(nonatomic) __weak UIButton *lastSelBtn; // @synthesize lastSelBtn=_lastSelBtn;
@property(retain, nonatomic) KSYD_OtherRewardVideoAdManager *otherAdManager; // @synthesize otherAdManager=_otherAdManager;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) __weak UIButton *playBtn; // @synthesize playBtn=_playBtn;
- (void)playBtnAction:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *rateLeftCons; // @synthesize rateLeftCons=_rateLeftCons;
@property(nonatomic) __weak UILabel *rateValue; // @synthesize rateValue=_rateValue;
@property(retain, nonatomic) KSYD_ReaderManager *readerManager; // @synthesize readerManager=_readerManager;
@property(retain, nonatomic) KSYD_ReaderSettings *readerSettings; // @synthesize readerSettings=_readerSettings;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)setPlayBtnState:(long long)arg1;
@property(nonatomic) __weak UIView *slideContentView; // @synthesize slideContentView=_slideContentView;
@property(retain, nonatomic) KSYD_ChapterContentModel *speechChapterM; // @synthesize speechChapterM=_speechChapterM;
@property(retain, nonatomic) KSYD_SpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(nonatomic) __weak UISlider *speechPitch; // @synthesize speechPitch=_speechPitch;
@property(retain, nonatomic) UISlider *speechRateSlider; // @synthesize speechRateSlider=_speechRateSlider;
@property(nonatomic) unsigned long long startSpeechCount; // @synthesize startSpeechCount=_startSpeechCount;
@property(nonatomic) __weak UIView *tapView; // @synthesize tapView=_tapView;
@property(nonatomic) __weak UIButton *timerBtn15; // @synthesize timerBtn15=_timerBtn15;
@property(nonatomic) __weak UIButton *timerBtn30; // @synthesize timerBtn30=_timerBtn30;
@property(nonatomic) __weak UIButton *timerBtn5; // @synthesize timerBtn5=_timerBtn5;
@property(nonatomic) __weak UIButton *timerBtn60; // @synthesize timerBtn60=_timerBtn60;
@property(retain, nonatomic) NSArray *timerBtnArray; // @synthesize timerBtnArray=_timerBtnArray;
@property(retain, nonatomic) UIButton *voiceBoy; // @synthesize voiceBoy=_voiceBoy;
@property(retain, nonatomic) NSArray *voiceBtnArray; // @synthesize voiceBtnArray=_voiceBtnArray;
@property(retain, nonatomic) UIButton *voiceGirl; // @synthesize voiceGirl=_voiceGirl;
@property(retain, nonatomic) UIButton *voiceLuoli; // @synthesize voiceLuoli=_voiceLuoli;
@property(retain, nonatomic) UIButton *voiceNative; // @synthesize voiceNative=_voiceNative;
@property(retain, nonatomic) UIButton *voiceQingnian; // @synthesize voiceQingnian=_voiceQingnian;
@property(retain, nonatomic) NSArray *voiceStringArray; // @synthesize voiceStringArray=_voiceStringArray;
@property(retain, nonatomic) UIButton *voiceWuXia; // @synthesize voiceWuXia=_voiceWuXia;
@property(retain, nonatomic) UIButton *voiceXiaoYao; // @synthesize voiceXiaoYao=_voiceXiaoYao;
@property(retain, nonatomic) UIButton *voiceYaYa; // @synthesize voiceYaYa=_voiceYaYa;
@property(retain, nonatomic) UIButton *voiceZhixing; // @synthesize voiceZhixing=_voiceZhixing;
- (void)showNativeSpeech;
- (void)speechContinue;
- (void)speechManagerUpdateState:(long long)arg1;
- (void)speechManagerWillChangePage:(unsigned long long)arg1 andSpeakSentence:(long long)arg2 andSententceWords:(id)arg3;
- (void)speechManagerWillChangeSection:(unsigned long long)arg1 string:(id)arg2;
- (void)speechManagerWillSpeakRange:(struct _NSRange)arg1;
- (void)speechPause;
- (void)speechPitchValueChanged:(id)arg1;
- (void)speechPlayOrPause;
- (void)speechRate:(_Bool)arg1;
- (void)speechRateSliderValueChanged:(id)arg1;
- (void)startSpeechCurrentPageContent;
- (void)timerBtnAction:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)voiceBtnClick:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
