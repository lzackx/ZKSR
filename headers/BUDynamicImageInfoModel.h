//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BUDynamicImageInfoModel : NSObject
{
    NSDictionary *_originDictionary;
    NSString *_url;
    long long _height;
    long long _width;
}

+ (id)defaultDynamicImageInfoModel;
- (void).cxx_destruct;
@property(nonatomic) long long height; // @synthesize height=_height;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isValid;
@property(copy, nonatomic) NSDictionary *originDictionary; // @synthesize originDictionary=_originDictionary;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long width; // @synthesize width=_width;

@end

