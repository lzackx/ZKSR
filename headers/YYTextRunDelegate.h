//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary;

@interface YYTextRunDelegate : NSObject <NSCopying, NSCoding>
{
    NSDictionary *_userInfo;
    double _ascent;
    double _descent;
    double _width;
}

- (void).cxx_destruct;
- (const struct __CTRunDelegate *)CTRunDelegate;
@property(nonatomic) double ascent; // @synthesize ascent=_ascent;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double descent; // @synthesize descent=_descent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double width; // @synthesize width=_width;

@end

