//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class APMPBEvent, NSDictionary, NSMutableDictionary, NSString;

@interface APMEvent : NSObject <NSCopying>
{
    NSMutableDictionary *_parameters;
    NSString *_origin;
    NSString *_name;
    double _timestamp;
    double _previousTimestamp;
}

+ (id)eventFromEditEvent:(id)arg1;
- (void).cxx_destruct;
- (_Bool)addScreenParameters:(id)arg1;
- (void)applyParameters:(id)arg1;
- (id)copyWithParameters:(id)arg1;
- (id)copyWithPreviousTimestamp:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)editEvent;
- (id)initWithEventProto:(id)arg1;
- (id)initWithOrigin:(id)arg1 isPublic:(_Bool)arg2 name:(id)arg3 timestamp:(double)arg4 previousTimestamp:(double)arg5 parameters:(id)arg6;
@property(nonatomic, getter=isConversion) _Bool conversion;
@property(nonatomic, getter=isDebug) _Bool debug;
@property(nonatomic, getter=isRealtime) _Bool realtime;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) double previousTimestamp; // @synthesize previousTimestamp=_previousTimestamp;
@property(readonly, nonatomic) APMPBEvent *protoEvent;
- (_Bool)shouldValidateParams;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

@end

