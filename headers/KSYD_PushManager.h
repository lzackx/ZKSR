//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSYD_PushManager : NSObject
{
}

+ (void)AddMultiBooksTags:(id)arg1 With:(long long)arg2;
+ (void)AddSingleTag:(id)arg1 withSec:(long long)arg2;
+ (void)DeleteMultiBooksTags:(id)arg1 With:(long long)arg2;
+ (void)DeleteSingleTag:(id)arg1 withSec:(long long)arg2;
+ (void)NativeBooksPushSyn;
+ (void)NativeComicBooksPushSyn;
+ (void)cleanTags;
+ (void)cleanTags:(CDUnknownBlockType)arg1;
+ (id)getRootNavController;
+ (void)pushResetAllTag;
+ (void)setJpushAlias;
+ (void)showAlertWithTitle:(id)arg1 andMessage:(id)arg2 andBookID:(id)arg3 andUrl:(id)arg4 andType:(id)arg5 andForeGround:(_Bool)arg6 form:(long long)arg7;
+ (id)tagsWithArr:(id)arg1;

@end

