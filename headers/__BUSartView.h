//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface __BUSartView : UIView
{
    NSArray *_starImageViewArray;
    double _starMargin;
    struct CGSize _starSize;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 imageName:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) NSArray *starImageViewArray; // @synthesize starImageViewArray=_starImageViewArray;
@property(nonatomic) double starMargin; // @synthesize starMargin=_starMargin;
@property(nonatomic) struct CGSize starSize; // @synthesize starSize=_starSize;

@end

