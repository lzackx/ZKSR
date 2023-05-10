//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSYD_SettingItem : NSObject
{
    NSString *_icon;
    NSString *_subTitle;
    NSString *_key;
    NSString *_title;
    Class _destinationVcClass;
    long long _TabBarMessageCount;
}

+ (id)itemWithIcon:(id)arg1 title:(id)arg2;
+ (id)itemWithTitle:(id)arg1 subTitle:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long TabBarMessageCount; // @synthesize TabBarMessageCount=_TabBarMessageCount;
@property(nonatomic) Class destinationVcClass; // @synthesize destinationVcClass=_destinationVcClass;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (id)initWithIcon:(id)arg1 title:(id)arg2 subTitle:(id)arg3;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

