
#import <UIKit/UIKit.h>

#import <Zoo/Zoo.h>
#import <Zoo/ZooCacheManager.h>
#import <Zoo/ZooHomeWindow.h>

#import <ZooGeneral/ZooManager+General.h>
#import <ZooGeneral/ZooCacheManager+General.h>

#import <ZooLogger/ZooManager+Logger.h>
#import <ZooLogger/ZooCacheManager+Logger.h>

#import <ZooPerformance/ZooManager+Performance.h>
#import <ZooPerformance/ZooCacheManager+Performance.h>

#import <ZooGPS/ZooManager+GPS.h>
#import <ZooGPS/ZooCacheManager+GPS.h>

#import <ZooUI/ZooManager+UI.h>
#import <ZooUI/ZooCacheManager+UI.h>

#import <ZooMemoryLeakFinder/ZooManager+MemoryLeakFinder.h>
#import <ZooMemoryLeakFinder/ZooCacheManager+MemoryLeakFinder.h>



%hook KSYD_AppDelegate

+ (unsigned long long)backgroundPlayerID:(unsigned long long)arg1 { %log; unsigned long long r = %orig; NSLog(@" = %llu", r); return r; }

// MARK: - Getter / Setter
//@property(retain, nonatomic) KSYD_AdvertModel *adM; // @synthesize adM=_adM;
//@property(nonatomic) long long allowRotate; // @synthesize allowRotate=_allowRotate;
//@property(nonatomic) _Bool isAppOpen; // @synthesize isAppOpen=_isAppOpen;
//@property(retain, nonatomic) KSYD_NetworkManager *loginManager; // @synthesize loginManager=_loginManager;
//@property(retain, nonatomic) AFHTTPSessionManager *manager; // @synthesize manager=_manager;
//@property(retain, nonatomic) KSYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
//@property(nonatomic) long long netStatus; // @synthesize netStatus=_netStatus;
//@property(retain, nonatomic) KSYD_TabBarController *tabbar; // @synthesize tabbar=_tabbar;
//@property(retain, nonatomic) NSString *test; // @synthesize test=_test;
//@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;

- (id)adM {
    return nil;
}

// MARK: - Life Cycle
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {
    NSLog(@"==== Zialization ====");
    
    ZooCacheManager *zooCache = [ZooCacheManager sharedInstance];
    [zooCache saveCrashSwitch: YES];
    
    ZooManager *zoo = [ZooManager shareInstance];
    
    [zoo addGeneralPlugins];
    [zoo setupGeneralPlugins];
    
    [zoo addLoggerPlugins];
    [zoo setupLoggerPlugins];
    
    [zooCache saveStartClass: @"KSYD_AppDelegate"];
    [zoo addPerformancePlugins];
    [zoo setupPerformancePlugins];
    
    [zoo addGPSPlugins];
    [zoo setupGPSPlugins];
    
    [zoo addUIPlugins];
    
    [zoo addMemoryLeakFinderPlugins];
    [zoo setupMemoryLeakFinderPlugins];
    
    [zoo installWithStartingPosition:CGPointMake(0, 84)];
    [zoo showZoo];
    
    %log; _Bool r = %orig; NSLog(@" = %d", r); return r;
}
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(id)arg3 { %log; %orig; }
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 { %log; unsigned long long r = %orig; NSLog(@" = %lld", r); return r; }
- (void)applicationDidBecomeActive:(id)arg1 { %log; %orig; }
- (void)applicationDidEnterBackground:(id)arg1 { %log; %orig; }
- (void)applicationDidReceiveMemoryWarning:(id)arg1 { %log; }
- (void)applicationWillEnterForeground:(id)arg1 { %log; %orig; }
- (void)applicationWillResignActive:(id)arg1 { %log; %orig; }
- (void)applicationWillTerminate:(id)arg1 { %log; }

- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 { %log; }
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 { %log; }
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 { %log; }
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(id)arg3 { %log; }
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 { %log; }
//- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
//- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

// MARK: - Private
- (void)KSYD_BecomeActive { %log; }
- (void)checkInitSDK { %log; }
- (void)dealwithCrashMessage:(id)arg1 { %log; NSLog(@" = %@", arg1); }
- (void)KSYD_GetAppConfigInfo { %log; /*%orig;*/ }
- (void)KSYD_reloadUser { %log; %orig; }
- (void)addShaperLayerToWindow { %log; %orig; }
- (void)checkUserNetworkStatus { %log; %orig; }
- (id)logDic:(id)arg1 { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (void)setupBugly { %log; }
- (_Bool)shouldAutorotate { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }

// MARK: - Ad
- (void)initADSSDK { %log; }
- (void)initNativeADSDK { %log; }
- (id)getADConfigModelWith:(id)arg1 { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (id)launchAdSubViews_alreadyView:(_Bool)arg1{ %log; id r = nil; NSLog(@" = %@", r); return r; }
- (void)load_imageAd_networkDataStyle:(long long)arg1 { %log; }
- (void)KSYD_setupXHLaunchAdWithStyle:(long long)arg1 { %log; }
- (void)xhLaunchAd:(id)arg1 clickAndOpenModel:(id)arg2 clickPoint:(struct CGPoint)arg3 { %log; }
- (void)xhLaunchAd:(id)arg1 clickAndOpenURLString:(id)arg2 { %log; }
- (void)xhLaunchAd:(id)arg1 imageDownLoadFinish:(id)arg2 { %log; }
- (void)xhLaunchAdShowFinish:(id)arg1 clickAndOpenModel:(id)arg2 { %log; }

%end



%hook KSYD_SpeechViewController

- (void)KSYD_showSpeechView {
    %log;
    %orig;
    UIViewController *readerVC = (UIViewController *)[[((UIViewController *)self).view superview] nextResponder]; // KSYD_ReaderViewController
    UIViewController *menuVC = [readerVC valueForKey:@"menuView"]; // KSYD_MenuViewController
    menuVC.view.hidden = YES;
}

%end
