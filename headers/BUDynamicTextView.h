//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUDynamicAbstractView.h"

@class BUHorizontalScrollTextView, BUVerticalScrollTextView, UILabel;

@interface BUDynamicTextView : BUDynamicAbstractView
{
    UILabel *_label;
    BUHorizontalScrollTextView *_horizontalScrollTextView;
    BUVerticalScrollTextView *_verticalScrollTextView;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) BUHorizontalScrollTextView *horizontalScrollTextView; // @synthesize horizontalScrollTextView=_horizontalScrollTextView;
- (id)initWithDictionary:(id)arg1 parentView:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)pbu_add_horizontal;
- (void)pbu_add_label;
- (void)pbu_add_vertical;
- (void)pbu_clear;
- (void)render;
@property(retain, nonatomic) BUVerticalScrollTextView *verticalScrollTextView; // @synthesize verticalScrollTextView=_verticalScrollTextView;
- (struct CGRect)subComponentFrameWithNeedUserPadding:(_Bool)arg1;
- (void)updateWithDarkMode:(_Bool)arg1;

@end

