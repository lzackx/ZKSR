//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BUJSB3ExecuteUnitModel : NSObject
{
    NSString *_JSSDKVersion;
    NSString *_msgType;
    NSString *_callbackId;
    NSString *_func;
    NSDictionary *_params;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *JSSDKVersion; // @synthesize JSSDKVersion=_JSSDKVersion;
@property(copy, nonatomic) NSString *callbackId; // @synthesize callbackId=_callbackId;
@property(copy, nonatomic) NSString *func; // @synthesize func=_func;
- (id)init;
- (id)initWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *msgType; // @synthesize msgType=_msgType;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;

@end

