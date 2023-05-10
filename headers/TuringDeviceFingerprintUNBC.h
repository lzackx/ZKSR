//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuringAnalysisPredictionUNBC.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface TuringDeviceFingerprintUNBC : TuringAnalysisPredictionUNBC <NSCopying, NSSecureCoding>
{
    float _confidence;
    NSString *_ticket;
    NSString *_deviceID;
    long long _condition;
    NSString *_TAID;
    NSString *_TAIDTicket;
    NSDate *_outdateDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *TAID; // @synthesize TAID=_TAID;
@property(retain, nonatomic) NSString *TAIDTicket; // @synthesize TAIDTicket=_TAIDTicket;
@property(nonatomic) long long condition; // @synthesize condition=_condition;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithTicket:(id)arg1 confidence:(float)arg2;
- (id)initWithTicket:(id)arg1 deviceID:(id)arg2 confidence:(float)arg3;
@property(retain, nonatomic) NSDate *outdateDate; // @synthesize outdateDate=_outdateDate;
@property(nonatomic, getter=posibility, setter=setPosibility:) float confidence; // @synthesize confidence=_confidence;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;

@end
