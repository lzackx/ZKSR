//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMPBaseModel.h"

@class NSNumber, NSString, UMPMsgInfoModel, UMPPolicyModel;

@interface UMPADModel : UMPBaseModel
{
    NSString *_msg_id;
    NSNumber *_msg_type;
    UMPMsgInfoModel *_msg_info;
    UMPPolicyModel *_policy;
    NSString *_check_num;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *check_num; // @synthesize check_num=_check_num;
- (id)initWithDict:(id)arg1;
@property(copy, nonatomic) NSString *msg_id; // @synthesize msg_id=_msg_id;
@property(retain, nonatomic) UMPMsgInfoModel *msg_info; // @synthesize msg_info=_msg_info;
@property(retain, nonatomic) NSNumber *msg_type; // @synthesize msg_type=_msg_type;
@property(retain, nonatomic) UMPPolicyModel *policy; // @synthesize policy=_policy;

@end

