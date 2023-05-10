//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GDTExtensionButton;

@interface GDTWebViewBottomCard : UIView
{
    GDTExtensionButton *_backBtn;
    GDTExtensionButton *_forwardBtn;
    CDUnknownBlockType _goBackBlock;
    CDUnknownBlockType _goForwardBlock;
}

- (void).cxx_destruct;
- (void)GDTfunctionc8psmw:(_Bool)arg1;
- (void)GDTfunctionj0tVm1;
- (void)GDTfunctiont8IUi3;
- (void)GDTfunctionu9TQ5G:(_Bool)arg1;
@property(retain, nonatomic) GDTExtensionButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) GDTExtensionButton *forwardBtn; // @synthesize forwardBtn=_forwardBtn;
@property(copy, nonatomic) CDUnknownBlockType goBackBlock; // @synthesize goBackBlock=_goBackBlock;
@property(copy, nonatomic) CDUnknownBlockType goForwardBlock; // @synthesize goForwardBlock=_goForwardBlock;
- (id)initWithFrame:(struct CGRect)arg1 goBack:(CDUnknownBlockType)arg2 goFroward:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;

@end

