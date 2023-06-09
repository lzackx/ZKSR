//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YBaseModel.h"

@class NSDictionary, NSMutableArray, NSNumber, NSString;

@interface KSYD_CommentModel : YBaseModel
{
    _Bool _floor_host;
    _Bool _isHotComment;
    _Bool _isReplyComment;
    _Bool _isShowBookName;
    _Bool _isUserReply;
    _Bool _isFav;
    NSString *_comment_id;
    NSNumber *_fav;
    NSMutableArray *_fav_arr;
    NSNumber *_fav_num;
    NSNumber *_user_id;
    NSString *_book_id;
    NSNumber *_comment_fav_status;
    NSString *_avatar;
    NSString *_content;
    NSString *_comment_content;
    NSString *_nick;
    NSString *_comment_nick;
    NSString *_reply_count;
    NSMutableArray *_reply_arr;
    NSString *_comment_reply_id;
    NSString *_pid;
    NSString *_book_name;
    NSDictionary *_reply_to_comment;
    NSString *_created_at;
    NSNumber *_fav_status;
    long long _isChoice;
    double _rowHeight;
}

+ (id)modelCustomPropertyMapper;
+ (id)modelPropertyWhitelist;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *book_id; // @synthesize book_id=_book_id;
@property(retain, nonatomic) NSString *book_name; // @synthesize book_name=_book_name;
@property(retain, nonatomic) NSString *comment_content; // @synthesize comment_content=_comment_content;
@property(retain, nonatomic) NSNumber *comment_fav_status; // @synthesize comment_fav_status=_comment_fav_status;
@property(retain, nonatomic) NSString *comment_id; // @synthesize comment_id=_comment_id;
@property(retain, nonatomic) NSString *comment_nick; // @synthesize comment_nick=_comment_nick;
@property(retain, nonatomic) NSString *comment_reply_id; // @synthesize comment_reply_id=_comment_reply_id;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *created_at; // @synthesize created_at=_created_at;
@property(retain, nonatomic) NSNumber *fav; // @synthesize fav=_fav;
@property(retain, nonatomic) NSMutableArray *fav_arr; // @synthesize fav_arr=_fav_arr;
@property(retain, nonatomic) NSNumber *fav_num; // @synthesize fav_num=_fav_num;
@property(nonatomic) NSNumber *fav_status; // @synthesize fav_status=_fav_status;
@property(nonatomic) _Bool floor_host; // @synthesize floor_host=_floor_host;
@property(nonatomic) long long isChoice; // @synthesize isChoice=_isChoice;
@property(nonatomic) _Bool isFav; // @synthesize isFav=_isFav;
@property(nonatomic) _Bool isHotComment; // @synthesize isHotComment=_isHotComment;
@property(nonatomic) _Bool isReplyComment; // @synthesize isReplyComment=_isReplyComment;
@property(nonatomic) _Bool isShowBookName; // @synthesize isShowBookName=_isShowBookName;
@property(nonatomic) _Bool isUserReply; // @synthesize isUserReply=_isUserReply;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSMutableArray *reply_arr; // @synthesize reply_arr=_reply_arr;
@property(retain, nonatomic) NSString *reply_count; // @synthesize reply_count=_reply_count;
@property(retain, nonatomic) NSDictionary *reply_to_comment; // @synthesize reply_to_comment=_reply_to_comment;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;

// Remaining properties
@property(nonatomic) double score;

@end

