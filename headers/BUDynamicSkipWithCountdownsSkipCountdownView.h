//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUDynamicAbstractView.h"

@class BUDynamicLabelDecorator;

@interface BUDynamicSkipWithCountdownsSkipCountdownView : BUDynamicAbstractView
{
    _Bool _haveChangeSuperViewFrame;
    BUDynamicLabelDecorator *_labelDecorator;
}

+ (id)updateContentForSizeWithOriginContent:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool haveChangeSuperViewFrame; // @synthesize haveChangeSuperViewFrame=_haveChangeSuperViewFrame;
- (id)initWithDictionary:(id)arg1 parentView:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) BUDynamicLabelDecorator *labelDecorator; // @synthesize labelDecorator=_labelDecorator;
- (_Bool)pbu_changeSuperViewFrame;
- (void)render;
- (void)updateWithDarkMode:(_Bool)arg1;
- (void)videoStateUpdateWithPlayDuration:(long long)arg1 stopped:(_Bool)arg2;

@end
