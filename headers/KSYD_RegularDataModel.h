//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSYD_RegularDataModel : NSObject
{
    _Bool _url_state;
    NSString *_site_id;
    NSArray *_regular;
    NSString *_regular_time;
}

+ (id)modelContainerPropertyGenericClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *regular; // @synthesize regular=_regular;
@property(copy, nonatomic) NSString *regular_time; // @synthesize regular_time=_regular_time;
@property(copy, nonatomic) NSString *site_id; // @synthesize site_id=_site_id;
@property(nonatomic) _Bool url_state; // @synthesize url_state=_url_state;

@end

