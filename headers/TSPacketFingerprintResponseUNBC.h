//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "rn_3DGOSeXf2LkQbPVNUNBC.h"

@class NSString;

@interface TSPacketFingerprintResponseUNBC : rn_3DGOSeXf2LkQbPVNUNBC
{
    float _confidence;
    float _timeout;
    NSString *_ticketID;
    NSString *_TAID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *TAID; // @synthesize TAID=_TAID;
@property(readonly, nonatomic) NSString *TAIDTicket;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)setTAIDTicket:(id)arg1;
@property(retain, nonatomic) NSString *ticketID; // @synthesize ticketID=_ticketID;
@property(nonatomic) float timeout; // @synthesize timeout=_timeout;

@end

