//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYTextMagnifier.h"

@class UIImageView;

@interface _YYTextMagnifierCaret : YYTextMagnifier
{
    UIImageView *_contentView;
    UIImageView *_coverView;
}

+ (id)coverImage;
- (void).cxx_destruct;
- (struct CGSize)fitSize;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSnapshot:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)snapshot;
- (struct CGSize)snapshotSize;
- (long long)type;

@end

