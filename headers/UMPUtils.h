//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UMPUtils : NSObject
{
}

+ (id)dictionaryWithQueryString:(id)arg1;
+ (id)getDictionaryFromDictionary:(id)arg1 key:(id)arg2;
+ (long long)getIntergerFromDictionary:(id)arg1 key:(id)arg2;
+ (void)getNotificationState:(CDUnknownBlockType)arg1;
+ (id)getNumberFromDictionary:(id)arg1 key:(id)arg2;
+ (id)getStringFromDictionary:(id)arg1 key:(id)arg2;
+ (_Bool)isPureFloat:(id)arg1;
+ (_Bool)isPureInt:(id)arg1;
+ (id)queryStringWithDictionary:(id)arg1;
+ (id)subString:(id)arg1 encode:(unsigned long long)arg2 bytesLength:(unsigned long long)arg3;

@end

