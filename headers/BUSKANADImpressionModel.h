//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSNumber, NSString;
@protocol BUAdSKAdImpressionProtocol;

@interface BUSKANADImpressionModel : NSObject <NSCoding>
{
    NSString *_version;
    NSString *_ad_network_id;
    NSNumber *_ad_campaign_id;
    NSNumber *_advertised_app_id;
    NSString *_ad_impression_id;
    NSNumber *_source_app_id;
    NSNumber *_timestamp;
    NSString *_signature;
    NSObject<BUAdSKAdImpressionProtocol> *_adImpression;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<BUAdSKAdImpressionProtocol> *adImpression; // @synthesize adImpression=_adImpression;
@property(retain, nonatomic) NSNumber *ad_campaign_id; // @synthesize ad_campaign_id=_ad_campaign_id;
@property(copy, nonatomic) NSString *ad_impression_id; // @synthesize ad_impression_id=_ad_impression_id;
@property(copy, nonatomic) NSString *ad_network_id; // @synthesize ad_network_id=_ad_network_id;
@property(retain, nonatomic) NSNumber *advertised_app_id; // @synthesize advertised_app_id=_advertised_app_id;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSNumber *source_app_id; // @synthesize source_app_id=_source_app_id;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;

@end

