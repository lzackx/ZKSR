//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BURewardAgainModel : NSObject
{
    long long _againType;
    NSString *_preSessions;
    NSString *_buttonText;
}

- (void).cxx_destruct;
@property(nonatomic) long long againType; // @synthesize againType=_againType;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *preSessions; // @synthesize preSessions=_preSessions;
- (void)setupDataWithDictionary:(id)arg1;

@end

