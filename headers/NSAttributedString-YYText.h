//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

#import "AvoidCrashProtocol-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSParagraphStyle, NSShadow, NSString, UIColor, UIFont, YYTextBorder, YYTextDecoration, YYTextShadow;

@interface NSAttributedString (YYText) <AvoidCrashProtocol>
+ (void)avoidCrashExchangeMethod;
+ (id)yy_attachmentStringWithContent:(id)arg1 contentMode:(long long)arg2 attachmentSize:(struct CGSize)arg3 alignToFont:(id)arg4 alignment:(long long)arg5;
+ (id)yy_attachmentStringWithContent:(id)arg1 contentMode:(long long)arg2 width:(double)arg3 ascent:(double)arg4 descent:(double)arg5;
+ (id)yy_attachmentStringWithEmojiImage:(id)arg1 fontSize:(double)arg2;
+ (id)yy_unarchiveFromData:(id)arg1;
- (id)avoidCrashInitWithAttributedString:(id)arg1;
- (id)avoidCrashInitWithString:(id)arg1;
- (id)avoidCrashInitWithString:(id)arg1 attributes:(id)arg2;
@property(readonly, nonatomic) long long yy_alignment;
- (long long)yy_alignmentAtIndex:(unsigned long long)arg1;
- (id)yy_archiveToData;
- (id)yy_attribute:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSDictionary *yy_attributes;
- (id)yy_attributesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *yy_backgroundColor;
- (id)yy_backgroundColorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) long long yy_baseWritingDirection;
- (long long)yy_baseWritingDirectionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *yy_baselineOffset;
- (id)yy_baselineOffsetAtIndex:(unsigned long long)arg1;
- (_Bool)yy_canDrawWithUIKit;
@property(readonly, nonatomic) UIColor *yy_color;
- (id)yy_colorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double yy_defaultTabInterval;
- (double)yy_defaultTabIntervalAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *yy_expansion;
- (id)yy_expansionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double yy_firstLineHeadIndent;
- (double)yy_firstLineHeadIndentAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIFont *yy_font;
- (id)yy_fontAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double yy_headIndent;
- (double)yy_headIndentAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) float yy_hyphenationFactor;
- (float)yy_hyphenationFactorAtIndex:(unsigned long long)arg1;
- (_Bool)yy_isSharedAttributesInAllRange;
@property(readonly, nonatomic) NSNumber *yy_kern;
- (id)yy_kernAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *yy_language;
- (id)yy_languageAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *yy_ligature;
- (id)yy_ligatureAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) long long yy_lineBreakMode;
- (long long)yy_lineBreakModeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double yy_lineHeightMultiple;
- (double)yy_lineHeightMultipleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double yy_lineSpacing;
- (double)yy_lineSpacingAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double yy_maximumLineHeight;
- (double)yy_maximumLineHeightAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double yy_minimumLineHeight;
- (double)yy_minimumLineHeightAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *yy_obliqueness;
- (id)yy_obliquenessAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double yy_paragraphSpacing;
- (double)yy_paragraphSpacingAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double yy_paragraphSpacingBefore;
- (double)yy_paragraphSpacingBeforeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSParagraphStyle *yy_paragraphStyle;
- (id)yy_paragraphStyleAtIndex:(unsigned long long)arg1;
- (id)yy_plainTextForRange:(struct _NSRange)arg1;
- (struct _NSRange)yy_rangeOfAll;
@property(readonly, nonatomic) NSShadow *yy_shadow;
- (id)yy_shadowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *yy_strikethroughColor;
- (id)yy_strikethroughColorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) long long yy_strikethroughStyle;
- (long long)yy_strikethroughStyleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *yy_strokeColor;
- (id)yy_strokeColorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *yy_strokeWidth;
- (id)yy_strokeWidthAtIndex:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *yy_tabStops;
- (id)yy_tabStopsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double yy_tailIndent;
- (double)yy_tailIndentAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextBorder *yy_textBackgroundBorder;
- (id)yy_textBackgroundBorderAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextBorder *yy_textBorder;
- (id)yy_textBorderAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *yy_textEffect;
- (id)yy_textEffectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CGAffineTransform yy_textGlyphTransform;
- (struct CGAffineTransform)yy_textGlyphTransformAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextShadow *yy_textInnerShadow;
- (id)yy_textInnerShadowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextShadow *yy_textShadow;
- (id)yy_textShadowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextDecoration *yy_textStrikethrough;
- (id)yy_textStrikethroughAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextDecoration *yy_textUnderline;
- (id)yy_textUnderlineAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *yy_underlineColor;
- (id)yy_underlineColorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) long long yy_underlineStyle;
- (long long)yy_underlineStyleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool yy_verticalGlyphForm;
- (_Bool)yy_verticalGlyphFormAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *yy_writingDirection;
- (id)yy_writingDirectionAtIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

