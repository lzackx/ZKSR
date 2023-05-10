//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BU_SVGGradientElement.h"

@class BU_SVGLength;

@interface BU_SVGLinearGradientElement : BU_SVGGradientElement
{
    _Bool _hasSynthesizedProperties;
    BU_SVGLength *_x1;
    BU_SVGLength *_y1;
    BU_SVGLength *_x2;
    BU_SVGLength *_y2;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasSynthesizedProperties; // @synthesize hasSynthesizedProperties=_hasSynthesizedProperties;
- (id)newGradientLayerForObjectRect:(struct CGRect)arg1 viewportRect:(CDStruct_0f55ad9b)arg2 transform:(struct CGAffineTransform)arg3;
@property(retain, nonatomic) BU_SVGLength *x1; // @synthesize x1=_x1;
@property(retain, nonatomic) BU_SVGLength *x2; // @synthesize x2=_x2;
@property(retain, nonatomic) BU_SVGLength *y1; // @synthesize y1=_y1;
@property(retain, nonatomic) BU_SVGLength *y2; // @synthesize y2=_y2;
- (void)synthesizeProperties;

@end

