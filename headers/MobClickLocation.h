//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MobClickLocation : NSObject
{
    double _latitude;
    double _longitude;
    double _gps_time;
}

+ (void)setLatitude:(double)arg1 longitude:(double)arg2;
+ (id)sharedInstance;
@property(nonatomic) double gps_time; // @synthesize gps_time=_gps_time;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;

@end

