//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextViewDelegate-Protocol.h"

@class AFHTTPSessionManager, KSYD_NetworkManager, KSYD_TextField, KSYD_TextView, NSString, NSURLSessionTask, UIButton, UILabel, UIWindow;

@interface KSYD_NewFeedbackViewController : UIViewController <UITextViewDelegate>
{
    KSYD_TextView *_proposeTextView;
    KSYD_TextField *_contactWayTextField;
    AFHTTPSessionManager *_manager;
    UIWindow *_sheetWindow;
    KSYD_NetworkManager *_netManager;
    NSURLSessionTask *_AuthAppealTask;
    UILabel *_tipsLabel;
    UIButton *_sendBt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionTask *AuthAppealTask; // @synthesize AuthAppealTask=_AuthAppealTask;
- (void)KSYD_clearText;
- (void)back;
@property(nonatomic) __weak KSYD_TextField *contactWayTextField; // @synthesize contactWayTextField=_contactWayTextField;
- (void)dealloc;
@property(retain, nonatomic) AFHTTPSessionManager *manager; // @synthesize manager=_manager;
- (void)messageList;
@property(retain, nonatomic) KSYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
@property(nonatomic) __weak KSYD_TextView *proposeTextView; // @synthesize proposeTextView=_proposeTextView;
@property(retain, nonatomic) UIButton *sendBt; // @synthesize sendBt=_sendBt;
- (void)sendToZhide;
@property(retain, nonatomic) UIWindow *sheetWindow; // @synthesize sheetWindow=_sheetWindow;
@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)setUpLFNav;
- (void)textViewDidEndEditing:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

