//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MYADStateModel, NSString;

@interface MYData : NSObject
{
    MYADStateModel *_ad;
    long long _asking_book_number;
    long long _comment_number;
    long long _service_appeal_number;
    NSString *_logout_status;
    long long _invitation_code;
    long long _invitation_count;
    long long _master_user_id;
    long long _today_read;
    NSString *_user_avatar;
    NSString *_user_login;
    NSString *_user_nickname;
    long long _totalNumber;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MYADStateModel *ad; // @synthesize ad=_ad;
@property(nonatomic) long long asking_book_number; // @synthesize asking_book_number=_asking_book_number;
@property(nonatomic) long long comment_number; // @synthesize comment_number=_comment_number;
@property(nonatomic) long long invitation_code; // @synthesize invitation_code=_invitation_code;
@property(nonatomic) long long invitation_count; // @synthesize invitation_count=_invitation_count;
@property(copy, nonatomic) NSString *logout_status; // @synthesize logout_status=_logout_status;
@property(nonatomic) long long master_user_id; // @synthesize master_user_id=_master_user_id;
@property(nonatomic) long long service_appeal_number; // @synthesize service_appeal_number=_service_appeal_number;
@property(nonatomic) long long today_read; // @synthesize today_read=_today_read;
@property(nonatomic) long long totalNumber; // @synthesize totalNumber=_totalNumber;
@property(copy, nonatomic) NSString *user_avatar; // @synthesize user_avatar=_user_avatar;
@property(copy, nonatomic) NSString *user_login; // @synthesize user_login=_user_login;
@property(copy, nonatomic) NSString *user_nickname; // @synthesize user_nickname=_user_nickname;

@end

