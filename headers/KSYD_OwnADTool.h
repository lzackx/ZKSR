//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSessionDataTask;

@interface KSYD_OwnADTool : NSObject
{
    _Bool _isGetData;
    NSURLSessionDataTask *_task;
}

+ (void)mobClick:(long long)arg1 adID:(long long)arg2 style:(id)arg3 url:(id)arg4 isClick:(_Bool)arg5;
+ (void)mobClick:(long long)arg1 locationSrring:(id)arg2 adID:(long long)arg3 style:(id)arg4 url:(id)arg5 isClick:(_Bool)arg6;
+ (void)mobClickStr:(id)arg1 adID:(long long)arg2 style:(id)arg3 url:(id)arg4 isClick:(_Bool)arg5;
+ (id)shareManager;
- (void).cxx_destruct;
- (id)getADIndex:(id)arg1 typeModel:(id)arg2 location:(long long)arg3;
- (void)getAdModelData:(id)arg1 location:(long long)arg2 success:(CDUnknownBlockType)arg3;
- (void)getData;
- (id)getSaveString;
- (void)getwanyiwanAdModelDataLocation:(long long)arg1 success:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool isGetData; // @synthesize isGetData=_isGetData;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;

@end

