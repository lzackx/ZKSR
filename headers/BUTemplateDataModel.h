//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BUTemplateDataModel : NSObject
{
    NSString *_templateDataId;
    NSString *_url;
    NSString *_version;
    NSString *_data;
    NSString *_md5;
    double _createDateTimeInterval;
    double _modifyDateTimeInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double createDateTimeInterval; // @synthesize createDateTimeInterval=_createDateTimeInterval;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
- (id)dictionaryValue;
- (_Bool)haveDataCache;
- (_Bool)haveURLCache;
- (id)init;
- (id)initWithDicitonary:(id)arg1;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) double modifyDateTimeInterval; // @synthesize modifyDateTimeInterval=_modifyDateTimeInterval;
@property(copy, nonatomic) NSString *templateDataId; // @synthesize templateDataId=_templateDataId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void)updateCreateDateTime;
- (void)updateModifyDateTime;

@end

