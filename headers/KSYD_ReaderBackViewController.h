//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class KSYD_ReaderSettings, UIImage, UIImageView;

@interface KSYD_ReaderBackViewController : UIViewController
{
    UIImageView *_imageView;
    UIImage *_backgroundImage;
    KSYD_ReaderSettings *_settings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (id)captureView:(id)arg1;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) KSYD_ReaderSettings *settings; // @synthesize settings=_settings;
- (void)setupBackImage;
- (void)updateWithViewController:(id)arg1;
- (void)viewDidLoad;

@end

