#line 1 "/Users/lzackx/Work/Reverse/ReverseApps/ZKSR/UniversalReaderDylib/Logos/UniversalReaderDylib+Reverse.xm"

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




#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class KSYD_SpeechViewController; @class KSYD_AppDelegate; 
static unsigned long long (*_logos_meta_orig$_ungrouped$KSYD_AppDelegate$backgroundPlayerID$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, unsigned long long); static unsigned long long _logos_meta_method$_ungrouped$KSYD_AppDelegate$backgroundPlayerID$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, unsigned long long); static id (*_logos_orig$_ungrouped$KSYD_AppDelegate$adM)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static id _logos_method$_ungrouped$KSYD_AppDelegate$adM(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static _Bool (*_logos_orig$_ungrouped$KSYD_AppDelegate$application$didFinishLaunchingWithOptions$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static _Bool _logos_method$_ungrouped$KSYD_AppDelegate$application$didFinishLaunchingWithOptions$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static _Bool (*_logos_orig$_ungrouped$KSYD_AppDelegate$application$openURL$options$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id, id); static _Bool _logos_method$_ungrouped$KSYD_AppDelegate$application$openURL$options$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id, id); static _Bool (*_logos_orig$_ungrouped$KSYD_AppDelegate$application$openURL$sourceApplication$annotation$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id, id, id); static _Bool _logos_method$_ungrouped$KSYD_AppDelegate$application$openURL$sourceApplication$annotation$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id, id, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$application$performActionForShortcutItem$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$application$performActionForShortcutItem$completionHandler$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id, id); static unsigned long long (*_logos_orig$_ungrouped$KSYD_AppDelegate$application$supportedInterfaceOrientationsForWindow$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static unsigned long long _logos_method$_ungrouped$KSYD_AppDelegate$application$supportedInterfaceOrientationsForWindow$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$applicationDidBecomeActive$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$applicationDidBecomeActive$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$applicationDidEnterBackground$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$applicationDidEnterBackground$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$applicationDidReceiveMemoryWarning$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$applicationDidReceiveMemoryWarning$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$applicationWillEnterForeground$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$applicationWillEnterForeground$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$applicationWillResignActive$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$applicationWillResignActive$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$applicationWillTerminate$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$applicationWillTerminate$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$application$didFailToRegisterForRemoteNotificationsWithError$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$application$didFailToRegisterForRemoteNotificationsWithError$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$application$didReceiveLocalNotification$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$application$didReceiveLocalNotification$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$application$didReceiveRemoteNotification$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$application$didReceiveRemoteNotification$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$application$didReceiveRemoteNotification$fetchCompletionHandler$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$application$didReceiveRemoteNotification$fetchCompletionHandler$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$application$didRegisterForRemoteNotificationsWithDeviceToken$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$application$didRegisterForRemoteNotificationsWithDeviceToken$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$KSYD_BecomeActive)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$KSYD_AppDelegate$KSYD_BecomeActive(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$checkInitSDK)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$KSYD_AppDelegate$checkInitSDK(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$dealwithCrashMessage$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$dealwithCrashMessage$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$KSYD_GetAppConfigInfo)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$KSYD_AppDelegate$KSYD_GetAppConfigInfo(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$KSYD_reloadUser)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$KSYD_AppDelegate$KSYD_reloadUser(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$addShaperLayerToWindow)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$KSYD_AppDelegate$addShaperLayerToWindow(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$checkUserNetworkStatus)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$KSYD_AppDelegate$checkUserNetworkStatus(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static id (*_logos_orig$_ungrouped$KSYD_AppDelegate$logDic$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static id _logos_method$_ungrouped$KSYD_AppDelegate$logDic$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$setupBugly)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$KSYD_AppDelegate$setupBugly(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static _Bool (*_logos_orig$_ungrouped$KSYD_AppDelegate$shouldAutorotate)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static _Bool _logos_method$_ungrouped$KSYD_AppDelegate$shouldAutorotate(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$initADSSDK)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$KSYD_AppDelegate$initADSSDK(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$initNativeADSDK)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$KSYD_AppDelegate$initNativeADSDK(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL); static id (*_logos_orig$_ungrouped$KSYD_AppDelegate$getADConfigModelWith$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static id _logos_method$_ungrouped$KSYD_AppDelegate$getADConfigModelWith$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id); static id (*_logos_orig$_ungrouped$KSYD_AppDelegate$launchAdSubViews_alreadyView$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, _Bool); static id _logos_method$_ungrouped$KSYD_AppDelegate$launchAdSubViews_alreadyView$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, _Bool); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$load_imageAd_networkDataStyle$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, long long); static void _logos_method$_ungrouped$KSYD_AppDelegate$load_imageAd_networkDataStyle$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, long long); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$KSYD_setupXHLaunchAdWithStyle$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, long long); static void _logos_method$_ungrouped$KSYD_AppDelegate$KSYD_setupXHLaunchAdWithStyle$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, long long); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$xhLaunchAd$clickAndOpenModel$clickPoint$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id, struct CGPoint); static void _logos_method$_ungrouped$KSYD_AppDelegate$xhLaunchAd$clickAndOpenModel$clickPoint$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id, struct CGPoint); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$xhLaunchAd$clickAndOpenURLString$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$xhLaunchAd$clickAndOpenURLString$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$xhLaunchAd$imageDownLoadFinish$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$xhLaunchAd$imageDownLoadFinish$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$KSYD_AppDelegate$xhLaunchAdShowFinish$clickAndOpenModel$)(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$KSYD_AppDelegate$xhLaunchAdShowFinish$clickAndOpenModel$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$KSYD_SpeechViewController$KSYD_showSpeechView)(_LOGOS_SELF_TYPE_NORMAL KSYD_SpeechViewController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$KSYD_SpeechViewController$KSYD_showSpeechView(_LOGOS_SELF_TYPE_NORMAL KSYD_SpeechViewController* _LOGOS_SELF_CONST, SEL); 

#line 28 "/Users/lzackx/Work/Reverse/ReverseApps/ZKSR/UniversalReaderDylib/Logos/UniversalReaderDylib+Reverse.xm"


static unsigned long long _logos_meta_method$_ungrouped$KSYD_AppDelegate$backgroundPlayerID$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) { NSLog(@"+[<KSYD_AppDelegate: %p> backgroundPlayerID:%llu]", self, arg1); unsigned long long r = _logos_meta_orig$_ungrouped$KSYD_AppDelegate$backgroundPlayerID$(self, _cmd, arg1); NSLog(@" = %llu", r); return r; }













static id _logos_method$_ungrouped$KSYD_AppDelegate$adM(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return nil;
}


static _Bool _logos_method$_ungrouped$KSYD_AppDelegate$application$didFinishLaunchingWithOptions$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
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
    
    NSLog(@"-[<KSYD_AppDelegate: %p> application:%@ didFinishLaunchingWithOptions:%@]", self, arg1, arg2); _Bool r = _logos_orig$_ungrouped$KSYD_AppDelegate$application$didFinishLaunchingWithOptions$(self, _cmd, arg1, arg2); NSLog(@" = %d", r); return r;
}
static _Bool _logos_method$_ungrouped$KSYD_AppDelegate$application$openURL$options$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) { NSLog(@"-[<KSYD_AppDelegate: %p> application:%@ openURL:%@ options:%@]", self, arg1, arg2, arg3); _Bool r = _logos_orig$_ungrouped$KSYD_AppDelegate$application$openURL$options$(self, _cmd, arg1, arg2, arg3); NSLog(@" = %d", r); return r; }
static _Bool _logos_method$_ungrouped$KSYD_AppDelegate$application$openURL$sourceApplication$annotation$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) { NSLog(@"-[<KSYD_AppDelegate: %p> application:%@ openURL:%@ sourceApplication:%@ annotation:%@]", self, arg1, arg2, arg3, arg4); _Bool r = _logos_orig$_ungrouped$KSYD_AppDelegate$application$openURL$sourceApplication$annotation$(self, _cmd, arg1, arg2, arg3, arg4); NSLog(@" = %d", r); return r; }
static void _logos_method$_ungrouped$KSYD_AppDelegate$application$performActionForShortcutItem$completionHandler$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) { NSLog(@"-[<KSYD_AppDelegate: %p> application:%@ performActionForShortcutItem:%@ completionHandler:%@]", self, arg1, arg2, arg3); _logos_orig$_ungrouped$KSYD_AppDelegate$application$performActionForShortcutItem$completionHandler$(self, _cmd, arg1, arg2, arg3); }
static unsigned long long _logos_method$_ungrouped$KSYD_AppDelegate$application$supportedInterfaceOrientationsForWindow$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) { NSLog(@"-[<KSYD_AppDelegate: %p> application:%@ supportedInterfaceOrientationsForWindow:%@]", self, arg1, arg2); unsigned long long r = _logos_orig$_ungrouped$KSYD_AppDelegate$application$supportedInterfaceOrientationsForWindow$(self, _cmd, arg1, arg2); NSLog(@" = %lld", r); return r; }
static void _logos_method$_ungrouped$KSYD_AppDelegate$applicationDidBecomeActive$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) { NSLog(@"-[<KSYD_AppDelegate: %p> applicationDidBecomeActive:%@]", self, arg1); _logos_orig$_ungrouped$KSYD_AppDelegate$applicationDidBecomeActive$(self, _cmd, arg1); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$applicationDidEnterBackground$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) { NSLog(@"-[<KSYD_AppDelegate: %p> applicationDidEnterBackground:%@]", self, arg1); _logos_orig$_ungrouped$KSYD_AppDelegate$applicationDidEnterBackground$(self, _cmd, arg1); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$applicationDidReceiveMemoryWarning$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) { NSLog(@"-[<KSYD_AppDelegate: %p> applicationDidReceiveMemoryWarning:%@]", self, arg1); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$applicationWillEnterForeground$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) { NSLog(@"-[<KSYD_AppDelegate: %p> applicationWillEnterForeground:%@]", self, arg1); _logos_orig$_ungrouped$KSYD_AppDelegate$applicationWillEnterForeground$(self, _cmd, arg1); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$applicationWillResignActive$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) { NSLog(@"-[<KSYD_AppDelegate: %p> applicationWillResignActive:%@]", self, arg1); _logos_orig$_ungrouped$KSYD_AppDelegate$applicationWillResignActive$(self, _cmd, arg1); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$applicationWillTerminate$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) { NSLog(@"-[<KSYD_AppDelegate: %p> applicationWillTerminate:%@]", self, arg1); }

static void _logos_method$_ungrouped$KSYD_AppDelegate$application$didFailToRegisterForRemoteNotificationsWithError$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) { NSLog(@"-[<KSYD_AppDelegate: %p> application:%@ didFailToRegisterForRemoteNotificationsWithError:%@]", self, arg1, arg2); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$application$didReceiveLocalNotification$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) { NSLog(@"-[<KSYD_AppDelegate: %p> application:%@ didReceiveLocalNotification:%@]", self, arg1, arg2); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$application$didReceiveRemoteNotification$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) { NSLog(@"-[<KSYD_AppDelegate: %p> application:%@ didReceiveRemoteNotification:%@]", self, arg1, arg2); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$application$didReceiveRemoteNotification$fetchCompletionHandler$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) { NSLog(@"-[<KSYD_AppDelegate: %p> application:%@ didReceiveRemoteNotification:%@ fetchCompletionHandler:%@]", self, arg1, arg2, arg3); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$application$didRegisterForRemoteNotificationsWithDeviceToken$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) { NSLog(@"-[<KSYD_AppDelegate: %p> application:%@ didRegisterForRemoteNotificationsWithDeviceToken:%@]", self, arg1, arg2); }




static void _logos_method$_ungrouped$KSYD_AppDelegate$KSYD_BecomeActive(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { NSLog(@"-[<KSYD_AppDelegate: %p> KSYD_BecomeActive]", self); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$checkInitSDK(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { NSLog(@"-[<KSYD_AppDelegate: %p> checkInitSDK]", self); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$dealwithCrashMessage$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) { NSLog(@"-[<KSYD_AppDelegate: %p> dealwithCrashMessage:%@]", self, arg1); NSLog(@" = %@", arg1); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$KSYD_GetAppConfigInfo(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { NSLog(@"-[<KSYD_AppDelegate: %p> KSYD_GetAppConfigInfo]", self);  }
static void _logos_method$_ungrouped$KSYD_AppDelegate$KSYD_reloadUser(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { NSLog(@"-[<KSYD_AppDelegate: %p> KSYD_reloadUser]", self); _logos_orig$_ungrouped$KSYD_AppDelegate$KSYD_reloadUser(self, _cmd); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$addShaperLayerToWindow(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { NSLog(@"-[<KSYD_AppDelegate: %p> addShaperLayerToWindow]", self); _logos_orig$_ungrouped$KSYD_AppDelegate$addShaperLayerToWindow(self, _cmd); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$checkUserNetworkStatus(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { NSLog(@"-[<KSYD_AppDelegate: %p> checkUserNetworkStatus]", self); _logos_orig$_ungrouped$KSYD_AppDelegate$checkUserNetworkStatus(self, _cmd); }
static id _logos_method$_ungrouped$KSYD_AppDelegate$logDic$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) { NSLog(@"-[<KSYD_AppDelegate: %p> logDic:%@]", self, arg1); id r = nil; NSLog(@" = %@", r); return r; }
static void _logos_method$_ungrouped$KSYD_AppDelegate$setupBugly(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { NSLog(@"-[<KSYD_AppDelegate: %p> setupBugly]", self); }
static _Bool _logos_method$_ungrouped$KSYD_AppDelegate$shouldAutorotate(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { NSLog(@"-[<KSYD_AppDelegate: %p> shouldAutorotate]", self); _Bool r = _logos_orig$_ungrouped$KSYD_AppDelegate$shouldAutorotate(self, _cmd); NSLog(@" = %d", r); return r; }


static void _logos_method$_ungrouped$KSYD_AppDelegate$initADSSDK(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { NSLog(@"-[<KSYD_AppDelegate: %p> initADSSDK]", self); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$initNativeADSDK(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { NSLog(@"-[<KSYD_AppDelegate: %p> initNativeADSDK]", self); }
static id _logos_method$_ungrouped$KSYD_AppDelegate$getADConfigModelWith$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) { NSLog(@"-[<KSYD_AppDelegate: %p> getADConfigModelWith:%@]", self, arg1); id r = nil; NSLog(@" = %@", r); return r; }
static id _logos_method$_ungrouped$KSYD_AppDelegate$launchAdSubViews_alreadyView$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, _Bool arg1){ NSLog(@"-[<KSYD_AppDelegate: %p> launchAdSubViews_alreadyView:%d]", self, arg1); id r = nil; NSLog(@" = %@", r); return r; }
static void _logos_method$_ungrouped$KSYD_AppDelegate$load_imageAd_networkDataStyle$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) { NSLog(@"-[<KSYD_AppDelegate: %p> load_imageAd_networkDataStyle:%lld]", self, arg1); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$KSYD_setupXHLaunchAdWithStyle$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) { NSLog(@"-[<KSYD_AppDelegate: %p> KSYD_setupXHLaunchAdWithStyle:%lld]", self, arg1); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$xhLaunchAd$clickAndOpenModel$clickPoint$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, struct CGPoint arg3) { NSLog(@"-[<KSYD_AppDelegate: %p> xhLaunchAd:%@ clickAndOpenModel:%@ clickPoint:--]", self, arg1, arg2); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$xhLaunchAd$clickAndOpenURLString$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) { NSLog(@"-[<KSYD_AppDelegate: %p> xhLaunchAd:%@ clickAndOpenURLString:%@]", self, arg1, arg2); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$xhLaunchAd$imageDownLoadFinish$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) { NSLog(@"-[<KSYD_AppDelegate: %p> xhLaunchAd:%@ imageDownLoadFinish:%@]", self, arg1, arg2); }
static void _logos_method$_ungrouped$KSYD_AppDelegate$xhLaunchAdShowFinish$clickAndOpenModel$(_LOGOS_SELF_TYPE_NORMAL KSYD_AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) { NSLog(@"-[<KSYD_AppDelegate: %p> xhLaunchAdShowFinish:%@ clickAndOpenModel:%@]", self, arg1, arg2); }







static void _logos_method$_ungrouped$KSYD_SpeechViewController$KSYD_showSpeechView(_LOGOS_SELF_TYPE_NORMAL KSYD_SpeechViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSLog(@"-[<KSYD_SpeechViewController: %p> KSYD_showSpeechView]", self);
    _logos_orig$_ungrouped$KSYD_SpeechViewController$KSYD_showSpeechView(self, _cmd);
    UIViewController *readerVC = (UIViewController *)[[((UIViewController *)self).view superview] nextResponder]; 
    UIViewController *menuVC = [readerVC valueForKey:@"menuView"]; 
    menuVC.view.hidden = YES;
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$KSYD_AppDelegate = objc_getClass("KSYD_AppDelegate"); Class _logos_metaclass$_ungrouped$KSYD_AppDelegate = object_getClass(_logos_class$_ungrouped$KSYD_AppDelegate); { MSHookMessageEx(_logos_metaclass$_ungrouped$KSYD_AppDelegate, @selector(backgroundPlayerID:), (IMP)&_logos_meta_method$_ungrouped$KSYD_AppDelegate$backgroundPlayerID$, (IMP*)&_logos_meta_orig$_ungrouped$KSYD_AppDelegate$backgroundPlayerID$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(adM), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$adM, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$adM);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(application:didFinishLaunchingWithOptions:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$application$didFinishLaunchingWithOptions$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$application$didFinishLaunchingWithOptions$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(application:openURL:options:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$application$openURL$options$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$application$openURL$options$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(application:openURL:sourceApplication:annotation:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$application$openURL$sourceApplication$annotation$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$application$openURL$sourceApplication$annotation$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(application:performActionForShortcutItem:completionHandler:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$application$performActionForShortcutItem$completionHandler$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$application$performActionForShortcutItem$completionHandler$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(application:supportedInterfaceOrientationsForWindow:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$application$supportedInterfaceOrientationsForWindow$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$application$supportedInterfaceOrientationsForWindow$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(applicationDidBecomeActive:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$applicationDidBecomeActive$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$applicationDidBecomeActive$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(applicationDidEnterBackground:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$applicationDidEnterBackground$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$applicationDidEnterBackground$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(applicationDidReceiveMemoryWarning:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$applicationDidReceiveMemoryWarning$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$applicationDidReceiveMemoryWarning$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(applicationWillEnterForeground:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$applicationWillEnterForeground$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$applicationWillEnterForeground$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(applicationWillResignActive:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$applicationWillResignActive$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$applicationWillResignActive$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(applicationWillTerminate:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$applicationWillTerminate$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$applicationWillTerminate$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(application:didFailToRegisterForRemoteNotificationsWithError:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$application$didFailToRegisterForRemoteNotificationsWithError$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$application$didFailToRegisterForRemoteNotificationsWithError$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(application:didReceiveLocalNotification:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$application$didReceiveLocalNotification$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$application$didReceiveLocalNotification$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(application:didReceiveRemoteNotification:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$application$didReceiveRemoteNotification$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$application$didReceiveRemoteNotification$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(application:didReceiveRemoteNotification:fetchCompletionHandler:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$application$didReceiveRemoteNotification$fetchCompletionHandler$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$application$didReceiveRemoteNotification$fetchCompletionHandler$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(application:didRegisterForRemoteNotificationsWithDeviceToken:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$application$didRegisterForRemoteNotificationsWithDeviceToken$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$application$didRegisterForRemoteNotificationsWithDeviceToken$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(KSYD_BecomeActive), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$KSYD_BecomeActive, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$KSYD_BecomeActive);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(checkInitSDK), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$checkInitSDK, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$checkInitSDK);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(dealwithCrashMessage:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$dealwithCrashMessage$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$dealwithCrashMessage$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(KSYD_GetAppConfigInfo), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$KSYD_GetAppConfigInfo, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$KSYD_GetAppConfigInfo);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(KSYD_reloadUser), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$KSYD_reloadUser, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$KSYD_reloadUser);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(addShaperLayerToWindow), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$addShaperLayerToWindow, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$addShaperLayerToWindow);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(checkUserNetworkStatus), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$checkUserNetworkStatus, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$checkUserNetworkStatus);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(logDic:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$logDic$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$logDic$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(setupBugly), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$setupBugly, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$setupBugly);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(shouldAutorotate), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$shouldAutorotate, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$shouldAutorotate);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(initADSSDK), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$initADSSDK, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$initADSSDK);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(initNativeADSDK), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$initNativeADSDK, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$initNativeADSDK);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(getADConfigModelWith:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$getADConfigModelWith$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$getADConfigModelWith$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(launchAdSubViews_alreadyView:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$launchAdSubViews_alreadyView$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$launchAdSubViews_alreadyView$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(load_imageAd_networkDataStyle:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$load_imageAd_networkDataStyle$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$load_imageAd_networkDataStyle$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(KSYD_setupXHLaunchAdWithStyle:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$KSYD_setupXHLaunchAdWithStyle$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$KSYD_setupXHLaunchAdWithStyle$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(xhLaunchAd:clickAndOpenModel:clickPoint:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$xhLaunchAd$clickAndOpenModel$clickPoint$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$xhLaunchAd$clickAndOpenModel$clickPoint$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(xhLaunchAd:clickAndOpenURLString:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$xhLaunchAd$clickAndOpenURLString$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$xhLaunchAd$clickAndOpenURLString$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(xhLaunchAd:imageDownLoadFinish:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$xhLaunchAd$imageDownLoadFinish$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$xhLaunchAd$imageDownLoadFinish$);}{ MSHookMessageEx(_logos_class$_ungrouped$KSYD_AppDelegate, @selector(xhLaunchAdShowFinish:clickAndOpenModel:), (IMP)&_logos_method$_ungrouped$KSYD_AppDelegate$xhLaunchAdShowFinish$clickAndOpenModel$, (IMP*)&_logos_orig$_ungrouped$KSYD_AppDelegate$xhLaunchAdShowFinish$clickAndOpenModel$);}Class _logos_class$_ungrouped$KSYD_SpeechViewController = objc_getClass("KSYD_SpeechViewController"); { MSHookMessageEx(_logos_class$_ungrouped$KSYD_SpeechViewController, @selector(KSYD_showSpeechView), (IMP)&_logos_method$_ungrouped$KSYD_SpeechViewController$KSYD_showSpeechView, (IMP*)&_logos_orig$_ungrouped$KSYD_SpeechViewController$KSYD_showSpeechView);}} }
#line 138 "/Users/lzackx/Work/Reverse/ReverseApps/ZKSR/UniversalReaderDylib/Logos/UniversalReaderDylib+Reverse.xm"