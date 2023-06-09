//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIColor;

@interface YYTextDebugOption : NSObject <NSCopying>
{
    UIColor *_baselineColor;
    UIColor *_CTFrameBorderColor;
    UIColor *_CTFrameFillColor;
    UIColor *_CTLineBorderColor;
    UIColor *_CTLineFillColor;
    UIColor *_CTLineNumberColor;
    UIColor *_CTRunBorderColor;
    UIColor *_CTRunFillColor;
    UIColor *_CTRunNumberColor;
    UIColor *_CGGlyphBorderColor;
    UIColor *_CGGlyphFillColor;
}

+ (void)addDebugTarget:(id)arg1;
+ (void)removeDebugTarget:(id)arg1;
+ (void)setSharedDebugOption:(id)arg1;
+ (id)sharedDebugOption;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *CGGlyphBorderColor; // @synthesize CGGlyphBorderColor=_CGGlyphBorderColor;
@property(retain, nonatomic) UIColor *CGGlyphFillColor; // @synthesize CGGlyphFillColor=_CGGlyphFillColor;
@property(retain, nonatomic) UIColor *CTFrameBorderColor; // @synthesize CTFrameBorderColor=_CTFrameBorderColor;
@property(retain, nonatomic) UIColor *CTFrameFillColor; // @synthesize CTFrameFillColor=_CTFrameFillColor;
@property(retain, nonatomic) UIColor *CTLineBorderColor; // @synthesize CTLineBorderColor=_CTLineBorderColor;
@property(retain, nonatomic) UIColor *CTLineFillColor; // @synthesize CTLineFillColor=_CTLineFillColor;
@property(retain, nonatomic) UIColor *CTLineNumberColor; // @synthesize CTLineNumberColor=_CTLineNumberColor;
@property(retain, nonatomic) UIColor *CTRunBorderColor; // @synthesize CTRunBorderColor=_CTRunBorderColor;
@property(retain, nonatomic) UIColor *CTRunFillColor; // @synthesize CTRunFillColor=_CTRunFillColor;
@property(retain, nonatomic) UIColor *CTRunNumberColor; // @synthesize CTRunNumberColor=_CTRunNumberColor;
@property(retain, nonatomic) UIColor *baselineColor; // @synthesize baselineColor=_baselineColor;
- (void)clear;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)needDrawDebug;

@end

