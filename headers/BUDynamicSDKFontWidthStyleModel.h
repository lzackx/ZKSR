//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BUDynamicSDKFontWidthStyleModel : NSObject
{
    NSString *_fontFamily;
    long long _fontSize;
    long long _fontWeight;
    long long _letterSpacing;
    long long _lineHeight;
    double _maxWidth;
}

- (void).cxx_destruct;
- (id)dictionaryValue;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) long long fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) long long letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(nonatomic) long long lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;

@end

