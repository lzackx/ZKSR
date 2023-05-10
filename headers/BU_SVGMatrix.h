//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BU_SVGMatrix : NSObject
{
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
}

@property(nonatomic) float a; // @synthesize a;
@property(nonatomic) float b; // @synthesize b;
@property(nonatomic) float c; // @synthesize c;
@property(nonatomic) float d; // @synthesize d;
@property(nonatomic) float e; // @synthesize e;
@property(nonatomic) float f; // @synthesize f;
- (id)flipX;
- (id)flipY;
- (id)inverse;
- (id)multiply:(id)arg1;
- (id)rotate:(float)arg1;
- (id)rotateFromVector:(float)arg1 y:(float)arg2;
- (id)scale:(float)arg1;
- (id)scaleNonUniform:(float)arg1 scaleFactorY:(float)arg2;
- (id)skewX:(float)arg1;
- (id)skewY:(float)arg1;
- (id)translate:(float)arg1 y:(float)arg2;

@end
