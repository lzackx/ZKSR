//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface KSYD_ThemeViewCell : UICollectionViewCell
{
    UIImageView *_themeImage;
    UIImageView *_selectImage;
    CDUnknownBlockType _themeSelect;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) __weak UIImageView *selectImage; // @synthesize selectImage=_selectImage;
@property(nonatomic) __weak UIImageView *themeImage; // @synthesize themeImage=_themeImage;
@property(copy, nonatomic) CDUnknownBlockType themeSelect; // @synthesize themeSelect=_themeSelect;

@end
