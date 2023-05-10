//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YBaseModel.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface KSYD_BookSummaryModel : YBaseModel <NSCoding>
{
    _Bool _isPresent;
    _Bool _isCancel;
    double _size;
    NSString *_site_path_reload;
    NSString *_site_path;
    NSString *_crawl_book_id;
    long long _catalog_update_at;
    NSString *_site_id;
    double _choose;
}

+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTProperty *)bookidentifire;
+ (const struct WCTProperty *)choose;
+ (const struct WCTProperty *)crawl_book_id;
+ (const struct WCTProperty *)isCancel;
+ (const struct WCTProperty *)isPresent;
+ (const struct WCTProperty *)lastChapter;
+ (id)modelPropertyWhitelist;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)site_id;
+ (const struct WCTProperty *)site_name;
+ (const struct WCTProperty *)site_path;
+ (const struct WCTProperty *)site_path_reload;
+ (const struct WCTProperty *)size;
+ (const struct WCTProperty *)source;
+ (const struct WCTProperty *)updated;
- (void).cxx_destruct;
@property(nonatomic) long long catalog_update_at; // @synthesize catalog_update_at=_catalog_update_at;
@property(nonatomic) double choose; // @synthesize choose=_choose;
@property(copy, nonatomic) NSString *crawl_book_id; // @synthesize crawl_book_id=_crawl_book_id;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(copy, nonatomic) NSString *site_id; // @synthesize site_id=_site_id;
@property(copy, nonatomic) NSString *site_path; // @synthesize site_path=_site_path;
@property(copy, nonatomic) NSString *site_path_reload; // @synthesize site_path_reload=_site_path_reload;
@property(nonatomic) double size; // @synthesize size=_size;

@end
