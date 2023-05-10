//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSTimer, UIColor, YYSelectionGrabber;

@interface YYTextSelectionView : UIView
{
    _Bool _caretBlinks;
    _Bool _caretVisible;
    _Bool _verticalForm;
    UIView *_hostView;
    UIColor *_color;
    NSArray *_selectionRects;
    UIView *_caretView;
    YYSelectionGrabber *_startGrabber;
    YYSelectionGrabber *_endGrabber;
    NSTimer *_caretTimer;
    NSMutableArray *_markViews;
    struct CGRect _caretRect;
}

- (void).cxx_destruct;
- (void)_doBlink;
- (struct CGRect)_standardCaretRect:(struct CGRect)arg1;
- (void)_startBlinks;
@property(nonatomic) struct CGRect caretRect; // @synthesize caretRect=_caretRect;
@property(retain, nonatomic) NSTimer *caretTimer; // @synthesize caretTimer=_caretTimer;
@property(retain, nonatomic) UIView *caretView; // @synthesize caretView=_caretView;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)dealloc;
@property(retain, nonatomic) YYSelectionGrabber *endGrabber; // @synthesize endGrabber=_endGrabber;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isCaretBlinks) _Bool caretBlinks; // @synthesize caretBlinks=_caretBlinks;
- (_Bool)isCaretContainsPoint:(struct CGPoint)arg1;
@property(nonatomic, getter=isCaretVisible) _Bool caretVisible; // @synthesize caretVisible=_caretVisible;
- (_Bool)isEndGrabberContainsPoint:(struct CGPoint)arg1;
- (_Bool)isGrabberContainsPoint:(struct CGPoint)arg1;
- (_Bool)isSelectionRectsContainsPoint:(struct CGPoint)arg1;
- (_Bool)isStartGrabberContainsPoint:(struct CGPoint)arg1;
@property(nonatomic, getter=isVerticalForm) _Bool verticalForm; // @synthesize verticalForm=_verticalForm;
@property(retain, nonatomic) NSMutableArray *markViews; // @synthesize markViews=_markViews;
@property(copy, nonatomic) NSArray *selectionRects; // @synthesize selectionRects=_selectionRects;
@property(retain, nonatomic) YYSelectionGrabber *startGrabber; // @synthesize startGrabber=_startGrabber;

@end

