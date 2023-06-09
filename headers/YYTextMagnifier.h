//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

@interface YYTextMagnifier : UIView
{
    _Bool _hostVerticalForm;
    _Bool _captureDisabled;
    _Bool _captureFadeAnimation;
    long long _type;
    UIImage *_snapshot;
    UIView *_hostView;
    struct CGSize _fitSize;
    struct CGSize _snapshotSize;
    struct CGPoint _hostCaptureCenter;
    struct CGPoint _hostPopoverCenter;
}

+ (id)magnifierWithType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool captureDisabled; // @synthesize captureDisabled=_captureDisabled;
@property(nonatomic) _Bool captureFadeAnimation; // @synthesize captureFadeAnimation=_captureFadeAnimation;
@property(readonly, nonatomic) struct CGSize fitSize; // @synthesize fitSize=_fitSize;
@property(nonatomic) struct CGPoint hostCaptureCenter; // @synthesize hostCaptureCenter=_hostCaptureCenter;
@property(nonatomic) struct CGPoint hostPopoverCenter; // @synthesize hostPopoverCenter=_hostPopoverCenter;
@property(nonatomic) _Bool hostVerticalForm; // @synthesize hostVerticalForm=_hostVerticalForm;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, nonatomic) struct CGSize snapshotSize; // @synthesize snapshotSize=_snapshotSize;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end

