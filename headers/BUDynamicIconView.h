//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUDynamicAbstractView.h"

@class BUDynamicImageViewDecorator;

@interface BUDynamicIconView : BUDynamicAbstractView
{
    BUDynamicImageViewDecorator *_imageViewDecorator;
}

+ (struct CGSize)sizeForContent:(id)arg1 brickType:(id)arg2 style:(id)arg3 lineFeed:(_Bool)arg4 lineLimit:(_Bool)arg5 lineCount:(long long)arg6;
- (void).cxx_destruct;
- (void)adjust_buDynamic_frameIfNeed;
@property(retain, nonatomic) BUDynamicImageViewDecorator *imageViewDecorator; // @synthesize imageViewDecorator=_imageViewDecorator;
- (id)initWithDictionary:(id)arg1 parentView:(id)arg2 error:(id *)arg3;
- (void)render;

@end

