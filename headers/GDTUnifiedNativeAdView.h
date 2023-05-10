//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTUnifiedNativeAdViewImpDelegate-Protocol.h"

@class GDTLogoView, GDTMediaView, GDTUnifiedNativeAdDataObject, NSString, UIViewController;
@protocol GDTUnifiedNativeAdViewDelegate, GDTUnifiedNativeAdViewImpProtocol;

@interface GDTUnifiedNativeAdView : UIView <GDTUnifiedNativeAdViewImpDelegate>
{
    id <GDTUnifiedNativeAdViewDelegate> _delegate;
    UIViewController *_viewController;
    id <GDTUnifiedNativeAdViewImpProtocol> _mediator;
    GDTUnifiedNativeAdDataObject *_dataObject;
    GDTMediaView *_mediaView;
    GDTLogoView *_logoView;
    NSString *_randomId;
}

- (void).cxx_destruct;
- (void)GDTfunctionc0hBjb:(id)arg1;
- (void)GDTfunctiond0R7hB:(id)arg1;
- (_Bool)GDTfunctionh2gGzw:(id)arg1;
- (void)GDTfunctionk4AcGY:(id)arg1;
- (void)GDTfunctiono0cqmk:(id)arg1;
- (void)GDTfunctionq4twy0:(id)arg1;
- (void)GDTfunctionq7NncR:(id)arg1 originDataObject:(id)arg2 vastAdEventType:(long long)arg3;
- (void)GDTfunctionq7NncR:(id)arg1 playerStatusChanged:(unsigned long long)arg2 userInfo:(id)arg3;
@property(retain, nonatomic) GDTUnifiedNativeAdDataObject *dataObject; // @synthesize dataObject=_dataObject;
@property(nonatomic) __weak id <GDTUnifiedNativeAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) GDTLogoView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) GDTMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) id <GDTUnifiedNativeAdViewImpProtocol> mediator; // @synthesize mediator=_mediator;
@property(copy, nonatomic) NSString *randomId; // @synthesize randomId=_randomId;
- (void)registerClickableCallToActionView:(id)arg1;
- (void)registerDataObject:(id)arg1 clickableViews:(id)arg2;
- (void)registerDataObject:(id)arg1 clickableViews:(id)arg2 customClickableViews:(id)arg3;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)unregisterDataObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
