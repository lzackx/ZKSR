//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

#import "AvoidCrashProtocol-Protocol.h"

@class NSArray, NSNumber, NSParagraphStyle, NSShadow, NSString, UIColor, UIFont, YYTextBorder, YYTextDecoration, YYTextShadow;

@interface NSMutableAttributedString (YYText) <AvoidCrashProtocol>
+ (void)avoidCrashExchangeMethod;
+ (id)yy_allDiscontinuousAttributeKeys;
- (id)avoidCrashInitWithString:(id)arg1;
- (id)avoidCrashInitWithString:(id)arg1 attributes:(id)arg2;
@property(nonatomic) long long yy_alignment;
- (void)setYy_attributes:(id)arg1;
@property(retain, nonatomic) UIColor *yy_backgroundColor;
@property(nonatomic) long long yy_baseWritingDirection;
@property(retain, nonatomic) NSNumber *yy_baselineOffset;
@property(retain, nonatomic) UIColor *yy_color;
@property(nonatomic) double yy_defaultTabInterval;
@property(retain, nonatomic) NSNumber *yy_expansion;
@property(nonatomic) double yy_firstLineHeadIndent;
@property(retain, nonatomic) UIFont *yy_font;
@property(nonatomic) double yy_headIndent;
@property(nonatomic) float yy_hyphenationFactor;
@property(retain, nonatomic) NSNumber *yy_kern;
@property(retain, nonatomic) NSString *yy_language;
@property(retain, nonatomic) NSNumber *yy_ligature;
@property(nonatomic) long long yy_lineBreakMode;
@property(nonatomic) double yy_lineHeightMultiple;
@property(nonatomic) double yy_lineSpacing;
@property(nonatomic) double yy_maximumLineHeight;
@property(nonatomic) double yy_minimumLineHeight;
@property(retain, nonatomic) NSNumber *yy_obliqueness;
@property(nonatomic) double yy_paragraphSpacing;
@property(nonatomic) double yy_paragraphSpacingBefore;
@property(retain, nonatomic) NSParagraphStyle *yy_paragraphStyle;
@property(retain, nonatomic) NSShadow *yy_shadow;
@property(retain, nonatomic) UIColor *yy_strikethroughColor;
@property(nonatomic) long long yy_strikethroughStyle;
@property(retain, nonatomic) UIColor *yy_strokeColor;
@property(retain, nonatomic) NSNumber *yy_strokeWidth;
@property(copy, nonatomic) NSArray *yy_tabStops;
@property(nonatomic) double yy_tailIndent;
@property(retain, nonatomic) YYTextBorder *yy_textBackgroundBorder;
@property(retain, nonatomic) YYTextBorder *yy_textBorder;
@property(retain, nonatomic) NSString *yy_textEffect;
@property(nonatomic) struct CGAffineTransform yy_textGlyphTransform;
@property(retain, nonatomic) YYTextShadow *yy_textInnerShadow;
@property(retain, nonatomic) YYTextShadow *yy_textShadow;
@property(retain, nonatomic) YYTextDecoration *yy_textStrikethrough;
@property(retain, nonatomic) YYTextDecoration *yy_textUnderline;
@property(retain, nonatomic) UIColor *yy_underlineColor;
@property(nonatomic) long long yy_underlineStyle;
@property(nonatomic) _Bool yy_verticalGlyphForm;
@property(retain, nonatomic) NSArray *yy_writingDirection;
- (void)yy_appendString:(id)arg1;
- (void)yy_insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)yy_removeAttributesInRange:(struct _NSRange)arg1;
- (void)yy_removeDiscontinuousAttributesInRange:(struct _NSRange)arg1;
- (void)yy_setAlignment:(long long)arg1 range:(struct _NSRange)arg2;
- (void)yy_setAttachment:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setAttribute:(id)arg1 value:(id)arg2;
- (void)yy_setAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)yy_setAttributes:(id)arg1;
- (void)yy_setBackgroundColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setBaseWritingDirection:(long long)arg1 range:(struct _NSRange)arg2;
- (void)yy_setBaselineClass:(struct __CFString *)arg1 range:(struct _NSRange)arg2;
- (void)yy_setBaselineInfo:(struct __CFDictionary *)arg1 range:(struct _NSRange)arg2;
- (void)yy_setBaselineOffset:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setBaselineReferenceInfo:(struct __CFDictionary *)arg1 range:(struct _NSRange)arg2;
- (void)yy_setCharacterShape:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setClearColorToJoinedEmoji;
- (void)yy_setColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setDefaultTabInterval:(double)arg1 range:(struct _NSRange)arg2;
- (void)yy_setExpansion:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setFirstLineHeadIndent:(double)arg1 range:(struct _NSRange)arg2;
- (void)yy_setFont:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setGlyphInfo:(struct __CTGlyphInfo *)arg1 range:(struct _NSRange)arg2;
- (void)yy_setHeadIndent:(double)arg1 range:(struct _NSRange)arg2;
- (void)yy_setHyphenationFactor:(float)arg1 range:(struct _NSRange)arg2;
- (void)yy_setKern:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setLanguage:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setLigature:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setLineBreakMode:(long long)arg1 range:(struct _NSRange)arg2;
- (void)yy_setLineHeightMultiple:(double)arg1 range:(struct _NSRange)arg2;
- (void)yy_setLineSpacing:(double)arg1 range:(struct _NSRange)arg2;
- (void)yy_setLink:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setMaximumLineHeight:(double)arg1 range:(struct _NSRange)arg2;
- (void)yy_setMinimumLineHeight:(double)arg1 range:(struct _NSRange)arg2;
- (void)yy_setObliqueness:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setParagraphSpacing:(double)arg1 range:(struct _NSRange)arg2;
- (void)yy_setParagraphSpacingBefore:(double)arg1 range:(struct _NSRange)arg2;
- (void)yy_setParagraphStyle:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setRubyAnnotation:(struct __CTRubyAnnotation *)arg1 range:(struct _NSRange)arg2;
- (void)yy_setRunDelegate:(struct __CTRunDelegate *)arg1 range:(struct _NSRange)arg2;
- (void)yy_setShadow:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setStrikethroughColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setStrikethroughStyle:(long long)arg1 range:(struct _NSRange)arg2;
- (void)yy_setStrokeColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setStrokeWidth:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setSuperscript:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTabStops:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTailIndent:(double)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextAttachment:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextBackedString:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextBackgroundBorder:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextBinding:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextBlockBorder:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextBorder:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextEffect:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextGlyphTransform:(struct CGAffineTransform)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextHighlight:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextHighlightRange:(struct _NSRange)arg1 color:(id)arg2 backgroundColor:(id)arg3 tapAction:(CDUnknownBlockType)arg4;
- (void)yy_setTextHighlightRange:(struct _NSRange)arg1 color:(id)arg2 backgroundColor:(id)arg3 userInfo:(id)arg4;
- (void)yy_setTextHighlightRange:(struct _NSRange)arg1 color:(id)arg2 backgroundColor:(id)arg3 userInfo:(id)arg4 tapAction:(CDUnknownBlockType)arg5 longPressAction:(CDUnknownBlockType)arg6;
- (void)yy_setTextInnerShadow:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextRubyAnnotation:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextShadow:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextStrikethrough:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setTextUnderline:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setUnderlineColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)yy_setUnderlineStyle:(long long)arg1 range:(struct _NSRange)arg2;
- (void)yy_setVerticalGlyphForm:(_Bool)arg1 range:(struct _NSRange)arg2;
- (void)yy_setWritingDirection:(id)arg1 range:(struct _NSRange)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

