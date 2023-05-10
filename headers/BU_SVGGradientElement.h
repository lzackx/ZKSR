//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BU_SVGElement.h"

#import "BU_SVGTransformable-Protocol.h"

@class NSArray, NSString;

@interface BU_SVGGradientElement : BU_SVGElement <BU_SVGTransformable>
{
    int _gradientUnits;
    NSArray *_stops;
    NSArray *_locations;
    NSArray *_colors;
    unsigned long long _spreadMethod;
    struct CGAffineTransform transform;
}

- (void).cxx_destruct;
- (void)addStop:(id)arg1;
@property(readonly) NSArray *colors; // @synthesize colors=_colors;
- (id)getAttributeInheritedIfNil:(id)arg1;
@property(readonly) int gradientUnits; // @synthesize gradientUnits=_gradientUnits;
- (void)layoutLayer:(id)arg1;
@property(readonly) NSArray *locations; // @synthesize locations=_locations;
- (id)newGradientLayerForObjectRect:(struct CGRect)arg1 viewportRect:(CDStruct_0f55ad9b)arg2 transform:(struct CGAffineTransform)arg3;
- (void)postProcessAttributesAddingErrorsTo:(id)arg1;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform;
@property(readonly) unsigned long long spreadMethod; // @synthesize spreadMethod=_spreadMethod;
@property(readonly) NSArray *stops; // @synthesize stops=_stops;
- (void)synthesizeProperties;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

