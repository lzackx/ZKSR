//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSYD_ComicGetModel.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface KSYD_ComicGetCatalogModel : KSYD_ComicGetModel <NSCoding>
{
    NSString *_list_path;
    NSArray *_data;
    long long _updated_at;
}

+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTProperty *)code;
+ (const struct WCTProperty *)data;
+ (const struct WCTProperty *)list_path;
+ (id)modelContainerPropertyGenericClass;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)updated_at;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *list_path; // @synthesize list_path=_list_path;
@property(nonatomic) long long updated_at; // @synthesize updated_at=_updated_at;

@end

