//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TKFirstResponseAlertViewController.h"

@class UITextField;
@protocol TKTextFieldAlertViewDelegate;

@interface TKTextFieldAlertViewController : TKFirstResponseAlertViewController
{
    UITextField *_textField;
    double _keyboardBoundHeight;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 placeholder:(id)arg2;
@property(nonatomic) double keyboardBoundHeight; // @synthesize keyboardBoundHeight=_keyboardBoundHeight;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)showWithAnimationType:(long long)arg1;
- (void)textFiledDidChange:(id)arg1;

// Remaining properties
@property(nonatomic) id <TKTextFieldAlertViewDelegate> delegate; // @dynamic delegate;

@end
