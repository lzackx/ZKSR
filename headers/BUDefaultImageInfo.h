//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BUDefaultImageInfo : NSObject
{
    long long _w;
    long long _h;
    long long _size;
    NSString *_colorSpace;
    NSString *_textureFormat;
    NSString *_filterName;
    NSString *_extDesc;
    NSString *_extType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(copy, nonatomic) NSString *extDesc; // @synthesize extDesc=_extDesc;
@property(copy, nonatomic) NSString *extType; // @synthesize extType=_extType;
@property(copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(nonatomic) long long h; // @synthesize h=_h;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *textureFormat; // @synthesize textureFormat=_textureFormat;
@property(nonatomic) long long w; // @synthesize w=_w;

@end

