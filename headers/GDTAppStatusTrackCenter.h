//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GDTAppStatusTrackCenterDelegate;

@interface GDTAppStatusTrackCenter : NSObject
{
    _Bool _willStartMonitorSKOverlay;
    id <GDTAppStatusTrackCenterDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)GDTfunctionc7d95x:(id)arg1;
- (void)GDTfunctiond2oS87:(id)arg1;
- (void)GDTfunctiond3vb8s:(id)arg1;
- (void)GDTfunctionf3hlgn;
- (void)GDTfunctionf7r6nZ;
- (void)GDTfunctionp0dlaC:(id)arg1;
@property(nonatomic) __weak id <GDTAppStatusTrackCenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool willStartMonitorSKOverlay; // @synthesize willStartMonitorSKOverlay=_willStartMonitorSKOverlay;

@end

