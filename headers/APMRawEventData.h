//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMEvent;

@interface APMRawEventData : NSObject
{
    APMEvent *_rawEvent;
    long long _rowID;
    long long _metadataFingerprint;
}

- (void).cxx_destruct;
- (id)initWithRawEvent:(id)arg1 rowID:(long long)arg2 metadataFingerprint:(long long)arg3;
@property(readonly, nonatomic) long long metadataFingerprint; // @synthesize metadataFingerprint=_metadataFingerprint;
@property(readonly, nonatomic) APMEvent *rawEvent; // @synthesize rawEvent=_rawEvent;
@property(readonly, nonatomic) long long rowID; // @synthesize rowID=_rowID;

@end

