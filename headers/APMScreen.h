//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APMScreen : NSObject
{
    _Bool _isManuallySet;
    _Bool _isManuallyTracked;
    NSString *_name;
    NSString *_className;
    long long _instanceID;
    double _eventTimestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double eventTimestamp; // @synthesize eventTimestamp=_eventTimestamp;
- (id)initWithName:(id)arg1 className:(id)arg2 instanceID:(long long)arg3;
@property(readonly, nonatomic) long long instanceID; // @synthesize instanceID=_instanceID;
@property(nonatomic) _Bool isManuallySet; // @synthesize isManuallySet=_isManuallySet;
@property(nonatomic) _Bool isManuallyTracked; // @synthesize isManuallyTracked=_isManuallyTracked;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;

@end

