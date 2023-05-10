//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BU_SVGElement.h"

#import "BU_SVGStylable-Protocol.h"
#import "BU_SVGTransformable-Protocol.h"

@class BU_CSSStyleDeclaration, NSString;

@interface BU_SVGClipPathElement : BU_SVGElement <BU_SVGTransformable, BU_SVGStylable>
{
    int clipPathUnits;
    struct CGAffineTransform transform;
}

@property(readonly, nonatomic) int clipPathUnits; // @synthesize clipPathUnits;
- (void)layoutLayer:(id)arg1 toMaskLayer:(id)arg2;
- (id)newLayer;
- (void)postProcessAttributesAddingErrorsTo:(id)arg1;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform;

// Remaining properties
@property(retain, nonatomic) NSString *className;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) BU_CSSStyleDeclaration *style;
@property(readonly) Class superclass;

@end

