//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface KSYD_FuctionLeadView : UIView
{
    CDUnknownBlockType _isHideBtnBlock;
    NSString *_imageName;
}

+ (_Bool)shouldShowGuider:(id)arg1;
+ (id)showFuctionView:(id)arg1;
- (void).cxx_destruct;
- (void)createUI;
- (void)hide;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)initWithImageName:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType isHideBtnBlock; // @synthesize isHideBtnBlock=_isHideBtnBlock;
- (void)show;
- (void)touchImageView:(id)arg1;

@end

