//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMPBaseModel.h"

@class NSNumber, NSString;

@interface UMPPolicyModel : UMPBaseModel
{
    NSNumber *_show_type;
    NSNumber *_show_times;
    NSString *_start_time;
    NSString *_expire_time;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *expire_time; // @synthesize expire_time=_expire_time;
- (id)initWithDict:(id)arg1;
@property(retain, nonatomic) NSNumber *show_times; // @synthesize show_times=_show_times;
@property(retain, nonatomic) NSNumber *show_type; // @synthesize show_type=_show_type;
@property(copy, nonatomic) NSString *start_time; // @synthesize start_time=_start_time;

@end

