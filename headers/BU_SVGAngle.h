//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BU_SVGAngle : NSObject
{
    int unitType;
    float value;
    float valueInSpecifiedUnits;
    NSString *valueAsString;
}

- (void).cxx_destruct;
- (void)convertToSpecifiedUnits:(int)arg1;
- (void)newValueSpecifiedUnits:(int)arg1 valueInSpecifiedUnits:(float)arg2;
@property(nonatomic) float value; // @synthesize value;
@property(retain, nonatomic) NSString *valueAsString; // @synthesize valueAsString;
@property(nonatomic) float valueInSpecifiedUnits; // @synthesize valueInSpecifiedUnits;
@property(readonly, nonatomic) int unitType; // @synthesize unitType;

@end

