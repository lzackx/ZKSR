//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol BUAd;

@protocol BUViewTracker <NSObject>
@property(retain, nonatomic) id <BUAd> admodel;
- (_Bool)checkIfViewInScreen;
@property(retain, nonatomic) NSDictionary *extra;
- (_Bool)invalid;
@property(nonatomic) _Bool isWitness;
@property(nonatomic) long long lastPresentation;
@property(nonatomic) long long repeatType;
@property(copy) CDUnknownBlockType showEvent;
@property(nonatomic) double showTimestamp;
@end

