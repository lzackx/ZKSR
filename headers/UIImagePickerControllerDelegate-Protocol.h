//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIImage, UIImagePickerController;

@protocol UIImagePickerControllerDelegate <NSObject>

@optional
- (void)imagePickerController:(UIImagePickerController *)arg1 didFinishPickingImage:(UIImage *)arg2 editingInfo:(NSDictionary *)arg3;
- (void)imagePickerController:(UIImagePickerController *)arg1 didFinishPickingMediaWithInfo:(NSDictionary *)arg2;
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)arg1;
@end

