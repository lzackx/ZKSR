//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSYD_BookStoreBookListsData : NSObject
{
    NSString *_name;
    NSString *_author;
    NSString *_remark;
    NSArray *_images;
    long long _fav_count;
    NSString *_list_id;
    NSString *_title;
    NSString *_image;
    NSString *_path;
    long long _sex;
    long long _book_count;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(nonatomic) long long book_count; // @synthesize book_count=_book_count;
@property(nonatomic) long long fav_count; // @synthesize fav_count=_fav_count;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(copy, nonatomic) NSString *list_id; // @synthesize list_id=_list_id;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) long long sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

