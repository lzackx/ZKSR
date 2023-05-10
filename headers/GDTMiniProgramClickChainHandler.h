//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTBaseClickChainHandler.h"

@class NSDate;
@protocol GDTClickFacadeDelegate;

@interface GDTMiniProgramClickChainHandler : GDTBaseClickChainHandler
{
    id <GDTClickFacadeDelegate> _delegate;
    NSDate *_timeStampWhenClicking;
    double _handleBegin;
}

- (void).cxx_destruct;
- (void)GDTfunctiona7xbB5:(id)arg1 miniParam:(id)arg2 success:(_Bool)arg3;
- (void)GDTfunctionn0BZlv:(id)arg1 eventKey:(long long *)arg2 isRegistered:(_Bool)arg3;
- (void)GDTfunctionz2zKf2:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
@property(nonatomic) __weak id <GDTClickFacadeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double handleBegin; // @synthesize handleBegin=_handleBegin;
@property(retain, nonatomic) NSDate *timeStampWhenClicking; // @synthesize timeStampWhenClicking=_timeStampWhenClicking;

@end
