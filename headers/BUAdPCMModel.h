//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class BUAdAppleModel, BUAdBytedanceModel, NSNumber, NSString;

@interface BUAdPCMModel : NSObject <NSCoding, NSSecureCoding>
{
    NSNumber *_pcm_choice;
    BUAdBytedanceModel *_bytedanceModel;
    BUAdAppleModel *_appleModel;
    NSNumber *_cover_click_area;
    NSString *_log_extra;
    NSString *_ad_id;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ad_id; // @synthesize ad_id=_ad_id;
@property(retain, nonatomic) BUAdAppleModel *appleModel; // @synthesize appleModel=_appleModel;
@property(retain, nonatomic) BUAdBytedanceModel *bytedanceModel; // @synthesize bytedanceModel=_bytedanceModel;
@property(retain, nonatomic) NSNumber *cover_click_area; // @synthesize cover_click_area=_cover_click_area;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *log_extra; // @synthesize log_extra=_log_extra;
@property(retain, nonatomic) NSNumber *pcm_choice; // @synthesize pcm_choice=_pcm_choice;
- (void)setupDataWithDictionary:(id)arg1;

@end

