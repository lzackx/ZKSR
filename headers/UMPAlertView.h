//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

@interface UMPAlertView : UIAlertView
{
    CDUnknownBlockType _alertBlock;
}

+ (id)showWithTitle:(id)arg1 message:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType alertBlock; // @synthesize alertBlock=_alertBlock;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end

