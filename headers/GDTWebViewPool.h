//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GDTWebViewPool : NSObject
{
    long long _maxPoolSize;
    NSMutableArray *_webViewArray;
}

+ (id)sharedWebViewPool;
- (void).cxx_destruct;
- (void)GDTfunctionc7WEVY;
- (void)GDTfunctioni9ICgq;
- (void)GDTfunctionl7vncX:(id)arg1;
- (id)GDTfunctionm5RhFw;
- (id)GDTfunctionp8lS1O;
- (void)GDTfunctionv28ema:(id)arg1;
- (id)GDTfunctiony5OxOu;
- (void)dealloc;
- (id)init;
@property(nonatomic) long long maxPoolSize; // @synthesize maxPoolSize=_maxPoolSize;
@property(retain, nonatomic) NSMutableArray *webViewArray; // @synthesize webViewArray=_webViewArray;

@end

