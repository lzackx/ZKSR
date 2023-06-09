//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSYD_SignData;

@interface KSYD_SignTool : NSObject
{
    _Bool _isShow;
    _Bool _isReadShow;
    KSYD_SignData *_dataModel;
}

+ (id)KSYD_GetFreeTimeStrIsComic:(_Bool)arg1;
+ (void)KSYD_MobEvent:(id)arg1 action:(id)arg2;
+ (id)KSYD_StartGetFreeLevelTimeIsComic:(_Bool)arg1;
+ (id)KSYD_StartGetFreeTimeStrIsComic:(_Bool)arg1;
+ (_Bool)KSYD_checkIsLogin;
+ (void)KSYD_clickDubleSignInModel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)KSYD_clickResignInModel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)KSYD_clickSignInModel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)KSYD_freeAdTime:(long long)arg1;
+ (id)KSYD_freeAdTime:(long long)arg1 isComic:(_Bool)arg2;
+ (void)KSYD_getSignData:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (id)KSYD_getSignList;
+ (long long)KSYD_getWeekDay;
+ (void)KSYD_showSignView;
+ (void)KSYD_showSignViewIsComic:(_Bool)arg1;
+ (_Bool)isSameWeekWithDate:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) KSYD_SignData *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) _Bool isReadShow; // @synthesize isReadShow=_isReadShow;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;

@end

