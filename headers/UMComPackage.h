//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UMComPackage : NSObject
{
}

+ (id)buildErrors:(id)arg1;
+ (id)buildEvents:(id)arg1;
+ (id)buildHeaders;
+ (id)buildSessionStarts:(id)arg1;
+ (id)buildSessions:(id)arg1;
+ (id)generateNewPreVersionDate;
+ (id)packageMetadataWithExtHeadersData:(id)arg1;
+ (id)packageWithErrors:(id)arg1 withEvents:(id)arg2 withSessions:(id)arg3 withThreePartiesData:(id)arg4 withProfileData:(id)arg5 withGameData:(id)arg6 withABExperimentData:(id)arg7 withExtHeadersData:(id)arg8 withSessionStarts:(id)arg9;
+ (id)preVersionDateString;
+ (id)preVersionDateStringInImprint;
+ (id)preVersionDateStringInLocal;
+ (id)preVersionString;
+ (id)preVersionStringInImprint;
+ (id)preVersionStringInLocal;
+ (void)setPreVersionDateStringInLocal:(id)arg1;
+ (void)setPreVersionStringInLocal:(id)arg1;

@end

