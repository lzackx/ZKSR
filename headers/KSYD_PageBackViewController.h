//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSYD_BaseViewController.h"

@class UIImageView;

@interface KSYD_PageBackViewController : KSYD_BaseViewController
{
    UIImageView *_backImageView;
}

+ (id)createTextFieldWithFrame:(struct CGRect)arg1 andPlaceholder:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
- (id)captureView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)updateBackViewWith:(id)arg1;
- (void)viewDidLoad;

@end

