//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface GDTEventSendModel : NSObject
{
    NSMutableDictionary *_baseDict;
    NSArray *_eventArray;
    long long _eventType;
}

- (void).cxx_destruct;
- (id)GDTfunctionp8mGQG;
@property(retain, nonatomic) NSMutableDictionary *baseDict; // @synthesize baseDict=_baseDict;
@property(retain, nonatomic) NSArray *eventArray; // @synthesize eventArray=_eventArray;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;

@end

