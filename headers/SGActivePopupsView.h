//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView;

@interface SGActivePopupsView : UIView
{
    UIImage *_imageName;
    double _popupsTimeInterval;
    CDUnknownBlockType _selectedImageBlock;
    UIImageView *_imageView;
    UIButton *_cancelBtn;
}

- (void).cxx_destruct;
- (void)SG_show;
- (void)addAnimationWithImageView;
- (void)awakeFromNib;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
- (void)cancelBtn_action;
- (void)didselectImage;
- (void)dismiss;
@property(retain, nonatomic) UIImage *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialization;
- (void)layoutSubviews;
@property(nonatomic) double popupsTimeInterval; // @synthesize popupsTimeInterval=_popupsTimeInterval;
@property(copy, nonatomic) CDUnknownBlockType selectedImageBlock; // @synthesize selectedImageBlock=_selectedImageBlock;
- (void)setupSubviews;

@end

