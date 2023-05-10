//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class KSYD_ReaderManager, KSYD_ReaderSettings, UILabel;
@protocol KSYD_ReaderEndTipsViewControllerDelegate;

@interface KSYD_ReaderEndTipsViewController : UIViewController
{
    id <KSYD_ReaderEndTipsViewControllerDelegate> _delegate;
    KSYD_ReaderSettings *_settings;
    KSYD_ReaderManager *_readerManager;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)BtnClicked:(id)arg1;
- (void)addBtn:(id)arg1;
- (void)buildPageEndTipsView;
@property(nonatomic) __weak id <KSYD_ReaderEndTipsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KSYD_ReaderManager *readerManager; // @synthesize readerManager=_readerManager;
@property(retain, nonatomic) KSYD_ReaderSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end
