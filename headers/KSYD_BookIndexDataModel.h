//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSYD_BookIndexDataModel : NSObject
{
    NSString *_image;
    long long _data_id;
    NSString *_name;
    NSString *_name_1;
    long long _style;
    long long _more;
    NSString *_category;
    NSArray *_data;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(nonatomic) long long data_id; // @synthesize data_id=_data_id;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(nonatomic) long long more; // @synthesize more=_more;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *name_1; // @synthesize name_1=_name_1;
@property(nonatomic) long long style; // @synthesize style=_style;

@end
