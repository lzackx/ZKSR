//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BUAdEventTracker : NSObject
{
}

+ (void)trackExtraValueWithTag:(id)arg1 label:(id)arg2 adModel:(id)arg3 extraDic:(id)arg4 adExtraDataDic:(id)arg5;
+ (void)trackWithTag:(id)arg1 label:(id)arg2 adModel:(id)arg3 extraDic:(id)arg4;
+ (void)trackWithTag:(id)arg1 label:(id)arg2 value:(id)arg3 logExtra:(id)arg4 extraDic:(id)arg5;
+ (void)trackWithTag:(id)arg1 label:(id)arg2 value:(id)arg3 logExtra:(id)arg4 extraDic:(id)arg5 auctionPrice:(id)arg6;

@end

