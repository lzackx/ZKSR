//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface APMInAppPurchaseItem : NSObject
{
    _Bool _freeTrial;
    _Bool _introductoryOffer;
    NSString *_subscriptionExpirationDateIA5String;
    NSString *_productID;
    NSString *_originalTransactionID;
    NSString *_transactionID;
    NSNumber *_webOrderLineItemID;
    NSString *_originalPurchaseDateIA5String;
    NSString *_purchaseDateIA5String;
    NSString *_cancellationDateIA5String;
    NSNumber *_purchaseType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cancellationDateIA5String; // @synthesize cancellationDateIA5String=_cancellationDateIA5String;
@property(nonatomic, getter=isFreeTrial) _Bool freeTrial; // @synthesize freeTrial=_freeTrial;
@property(nonatomic, getter=isIntroductoryOffer) _Bool introductoryOffer; // @synthesize introductoryOffer=_introductoryOffer;
@property(copy, nonatomic) NSString *originalPurchaseDateIA5String; // @synthesize originalPurchaseDateIA5String=_originalPurchaseDateIA5String;
@property(copy, nonatomic) NSString *originalTransactionID; // @synthesize originalTransactionID=_originalTransactionID;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(copy, nonatomic) NSString *purchaseDateIA5String; // @synthesize purchaseDateIA5String=_purchaseDateIA5String;
@property(copy, nonatomic) NSNumber *purchaseType; // @synthesize purchaseType=_purchaseType;
@property(copy, nonatomic) NSString *subscriptionExpirationDateIA5String; // @synthesize subscriptionExpirationDateIA5String=_subscriptionExpirationDateIA5String;
@property(copy, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(copy, nonatomic) NSNumber *webOrderLineItemID; // @synthesize webOrderLineItemID=_webOrderLineItemID;

@end

