//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APMAppMetadata : NSObject
{
    int _lastBundleIndex;
    double _lastBundleStartTimestamp;
    double _lastBundleEndTimestamp;
}

- (void)incrementLastBundleIndex;
- (id)initWithLastBundleIndex:(int)arg1 lastBundleStartTimestamp:(double)arg2 lastBundleEndTimestamp:(double)arg3;
@property(nonatomic) double lastBundleEndTimestamp; // @synthesize lastBundleEndTimestamp=_lastBundleEndTimestamp;
@property(readonly, nonatomic) int lastBundleIndex; // @synthesize lastBundleIndex=_lastBundleIndex;
@property(nonatomic) double lastBundleStartTimestamp; // @synthesize lastBundleStartTimestamp=_lastBundleStartTimestamp;

@end

