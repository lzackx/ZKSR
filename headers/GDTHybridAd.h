//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTHybridAdViewControllerDelegate-Protocol.h"

@class GDTHybridAdViewController, NSString, UIColor, UIFont, UIImage, UINavigationController, UIViewController;
@protocol GDTHybridAdDelegate;

@interface GDTHybridAd : NSObject <GDTHybridAdViewControllerDelegate>
{
    NSString *_titleContent;
    UIColor *_titleColor;
    UIFont *_titleFont;
    UIColor *_navigationBarColor;
    UIColor *_navigationBarBottomColor;
    UIColor *_separatorLineColor;
    UIImage *_closeImage;
    UIImage *_backImage;
    id <GDTHybridAdDelegate> _delegate;
    long long _adOptions;
    UIViewController *_rootViewController;
    UINavigationController *_navigationController;
    GDTHybridAdViewController *_hybridAdViewController;
}

- (void).cxx_destruct;
- (void)GDTfunctionm4QsF5:(id)arg1;
- (void)GDTfunctiono4czRa:(id)arg1;
- (void)GDTfunctiont7TMns:(id)arg1;
@property(nonatomic) long long adOptions; // @synthesize adOptions=_adOptions;
@property(retain, nonatomic) UIImage *backImage; // @synthesize backImage=_backImage;
@property(retain, nonatomic) UIImage *closeImage; // @synthesize closeImage=_closeImage;
@property(nonatomic) __weak id <GDTHybridAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GDTHybridAdViewController *hybridAdViewController; // @synthesize hybridAdViewController=_hybridAdViewController;
- (void)initLd1YhV3;
- (id)initWithType:(long long)arg1;
- (void)loadWithUrl:(id)arg1;
@property(retain, nonatomic) UIColor *navigationBarBottomColor; // @synthesize navigationBarBottomColor=_navigationBarBottomColor;
@property(retain, nonatomic) UIColor *navigationBarColor; // @synthesize navigationBarColor=_navigationBarColor;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) UIColor *separatorLineColor; // @synthesize separatorLineColor=_separatorLineColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *titleContent; // @synthesize titleContent=_titleContent;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (void)showWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

