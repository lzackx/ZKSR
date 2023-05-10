//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HFColorPickerViewDelegate-Protocol.h"

@class HFColorPickerView, NSString, UIColor;

@interface KSYD_ColorViewController : UIViewController <HFColorPickerViewDelegate>
{
    HFColorPickerView *_colorPickerView;
    UIColor *_navColor;
}

- (void).cxx_destruct;
- (void)KSYD_setUpLFNav;
- (void)colorPicker:(id)arg1 selectedColor:(id)arg2;
@property(nonatomic) __weak HFColorPickerView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
- (void)colorSave;
- (void)didReceiveMemoryWarning;
- (id)hexCodeFromColor:(id)arg1;
@property(retain, nonatomic) UIColor *navColor; // @synthesize navColor=_navColor;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

