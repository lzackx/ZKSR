//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUDynamicAbstractView.h"

@class BUDynamicLabelDecorator;

@interface BUDynamicTextStarView : BUDynamicAbstractView
{
    BUDynamicLabelDecorator *_labelDecorator;
}

+ (id)updateContentForSizeWithOriginContent:(id)arg1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 parentView:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) BUDynamicLabelDecorator *labelDecorator; // @synthesize labelDecorator=_labelDecorator;
- (void)render;
- (void)updateWithDarkMode:(_Bool)arg1;

@end
