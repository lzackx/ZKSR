//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MYADStateModel, MYData, NSDate, NSString;

@interface KSYD_TaskCenterADTool : NSObject
{
    _Bool _getState;
    _Bool _canShowAD;
    _Bool _lastShowAd;
    NSString *_userLogin;
    MYADStateModel *_adModel;
    MYData *_dataModel;
    NSString *_isHideAuthor;
    NSDate *_lastDate;
}

+ (_Bool)KSYD_checkCanHideComic;
+ (_Bool)KSYD_checkCanHideComicBookShelf;
+ (void)KSYD_checkStatusBar:(id)arg1;
+ (_Bool)KSYD_checkUserInterfaceIsDark:(id)arg1;
+ (_Bool)KSYD_comicCheckAuthor;
+ (id)KSYD_getValueForKey:(id)arg1;
+ (void)KSYD_saveValue:(id)arg1 forKey:(id)arg2;
+ (_Bool)checkShowNewTime;
+ (_Bool)checkUserStatus;
+ (id)sharedManager;
- (void).cxx_destruct;
- (_Bool)NewUserProtectionMode;
@property(retain, nonatomic) MYADStateModel *adModel; // @synthesize adModel=_adModel;
@property(nonatomic) _Bool canShowAD; // @synthesize canShowAD=_canShowAD;
- (void)canShowAD:(CDUnknownBlockType)arg1;
- (void)canShowADWithouCard:(CDUnknownBlockType)arg1;
- (_Bool)checkShowAD:(_Bool)arg1;
@property(retain, nonatomic) MYData *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) _Bool getState; // @synthesize getState=_getState;
@property(copy, nonatomic) NSString *isHideAuthor; // @synthesize isHideAuthor=_isHideAuthor;
@property(retain, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
@property(nonatomic) _Bool lastShowAd; // @synthesize lastShowAd=_lastShowAd;
@property(copy, nonatomic) NSString *userLogin; // @synthesize userLogin=_userLogin;

@end
