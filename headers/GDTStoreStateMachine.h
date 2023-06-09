//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKStateMachine.h>

@class GDTAppStoreAdNetWorkModel, GDTStoreProductController, NSString, UIViewController;
@protocol GDTStoreProductFacadeDelegate, SKStoreProductViewControllerDelegate;

@interface GDTStoreStateMachine : GKStateMachine
{
    _Bool _forcePopInLandscape;
    GDTStoreProductController *_currentProductController;
    UIViewController *_viewController;
    id <SKStoreProductViewControllerDelegate> _delegate;
    id <GDTStoreProductFacadeDelegate> _storeProductDelegate;
    NSString *_itunesId;
    NSString *_campaignId;
    NSString *_providerId;
    GDTAppStoreAdNetWorkModel *_adNetwork;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GDTAppStoreAdNetWorkModel *adNetwork; // @synthesize adNetwork=_adNetwork;
@property(copy, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) GDTStoreProductController *currentProductController; // @synthesize currentProductController=_currentProductController;
@property(nonatomic) __weak id <SKStoreProductViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool forcePopInLandscape; // @synthesize forcePopInLandscape=_forcePopInLandscape;
@property(copy, nonatomic) NSString *itunesId; // @synthesize itunesId=_itunesId;
@property(copy, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(nonatomic) __weak id <GDTStoreProductFacadeDelegate> storeProductDelegate; // @synthesize storeProductDelegate=_storeProductDelegate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;

@end

