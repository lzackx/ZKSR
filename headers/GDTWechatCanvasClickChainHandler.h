//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTBaseClickChainHandler.h"

@class GDTClickParam;
@protocol GDTClickFacadeDelegate;

@interface GDTWechatCanvasClickChainHandler : GDTBaseClickChainHandler
{
    id <GDTClickFacadeDelegate> _delegate;
    GDTClickParam *_clickParam;
}

- (void).cxx_destruct;
- (void)GDTfunctione7mccN:(id)arg1 success:(_Bool)arg2;
- (void)GDTfunctionz2zKf2:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
@property(retain, nonatomic) GDTClickParam *clickParam; // @synthesize clickParam=_clickParam;
@property(nonatomic) __weak id <GDTClickFacadeDelegate> delegate; // @synthesize delegate=_delegate;

@end

