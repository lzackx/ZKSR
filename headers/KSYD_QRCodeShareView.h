//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface KSYD_QRCodeShareView : UIView
{
    UIView *_tipsView;
}

- (void).cxx_destruct;
- (void)buildUI;
- (void)clickCopyUrl;
- (void)clickQRCode;
- (void)dismiss;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)saveImageToPhotos:(id)arg1;
@property(nonatomic) __weak UIView *tipsView; // @synthesize tipsView=_tipsView;

@end

