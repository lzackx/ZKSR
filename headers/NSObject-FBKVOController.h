//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBKVOController;

@interface NSObject (FBKVOController)
+ (id)attributeMapCache_noLock;
+ (void)avoidCrashExchangeMethodIfDealWithNoneSel:(_Bool)arg1;
+ (void)bu_async_main_gaosiViewWithURLString:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)bu_convertToStringWithOrignalObj:(id)arg1;
+ (id)bucn_safePerformWithInstance:(id)arg1 selectorString:(id)arg2 isVoidReturnType:(_Bool)arg3 error:(id *)arg4;
+ (id)bucn_safePerformWithInstance:(id)arg1 selectorString:(id)arg2 object:(id)arg3 isVoidReturnType:(_Bool)arg4 error:(id *)arg5;
+ (id)bucn_safePerformWithInstance:(id)arg1 selectorString:(id)arg2 object:(id)arg3 object2:(id)arg4 isVoidReturnType:(_Bool)arg5 error:(id *)arg6;
+ (id)ghPropertyWithProperty:(struct objc_property *)arg1;
+ (id)hmdbu_allAttributeMapDictionary;
+ (Class)hmdbu_anstorClass;
+ (id)hmdbu_attributeMapDictionary;
+ (id)hmdbu_className;
+ (id)hmdbu_managedProperties;
+ (id)hmdbu_objectWithDictionary:(id)arg1;
+ (id)hmdbu_objectWithDictionary:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)hmdbu_objectsWithDictionaries:(id)arg1;
+ (id)hmdbu_objectsWithDictionaries:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)hmdbu_primaryKey;
+ (id)hmdbu_properties;
+ (void)printRequestDebugVerboseLog:(id)arg1;
+ (void)setupNoneSelClassStringPrefixsArr:(id)arg1;
+ (void)setupNoneSelClassStringsArr:(id)arg1;
+ (void)swapSelector:(SEL)arg1 toSelector:(SEL)arg2;
+ (void)swizzleClassMethod:(SEL)arg1 withMethod:(SEL)arg2;
- (void)GDTfunctionh0XOEC:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)GDTfunctionk5yXpq;
@property(retain, nonatomic) FBKVOController *KVOController;
@property(retain, nonatomic) FBKVOController *KVOControllerNonRetaining;
- (void)avoidCrashForwardInvocation:(id)arg1;
- (id)avoidCrashMethodSignatureForSelector:(SEL)arg1;
- (void)avoidCrashSetValue:(id)arg1 forKey:(id)arg2;
- (void)avoidCrashSetValue:(id)arg1 forKeyPath:(id)arg2;
- (void)avoidCrashSetValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)avoidCrashSetValuesForKeysWithDictionary:(id)arg1;
- (void)bu_addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)bu_aryAfterFormatWithOriginAry:(id)arg1;
- (id)bu_dictAfterFormatWithOriginDict:(id)arg1;
- (id)bu_observerProxyWithKey:(const void *)arg1;
- (id)bu_observeredDeallocLinstener;
- (void)bu_removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)bu_removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (id)bu_stringWithPropertyArray:(id)arg1;
- (_Bool)checkHookConflictAndInvokeSelector:(SEL)arg1 withArguments:(id)arg2;
- (_Bool)checkHookConflictAndInvokeSelector:(SEL)arg1 withArguments:(id)arg2 retureValue:(void *)arg3;
- (id)gdt_observers;
- (void)gh_setValue:(id)arg1 forProperty:(id)arg2;
- (id)gh_valueForProperty:(id)arg1;
- (void)hmdbu_async_trace_performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(_Bool)arg4 modes:(id)arg5;
- (void)hmdbu_async_trace_performSelectorInBackground:(SEL)arg1 withObject:(id)arg2;
- (void)hmdbu_async_trace_performWithWrapperObject:(id)arg1;
- (id)hmdbu_customDescription;
- (id)hmdbu_dataDictionary;
- (void)hmdbu_setAttributes:(id)arg1;
- (void)hmdbu_setAttributes:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)hmdbu_validate;
- (id)invocationWithSelector:(SEL)arg1;
- (id)invocationWithSelector:(SEL)arg1 argList:(char *)arg2 start:(void *)arg3;
- (id)invocationWithSelector:(SEL)arg1 argument:(void *)arg2;
- (id)invocationWithSelector:(SEL)arg1 arguments:(void *)arg2;
- (void)invokeWithSelector:(SEL)arg1;
- (void)invokeWithSelector:(SEL)arg1 argument:(void *)arg2;
- (void)invokeWithSelector:(SEL)arg1 arguments:(void *)arg2;
- (void)invokeWithSelector:(SEL)arg1 returnValue:(void *)arg2;
- (void)invokeWithSelector:(SEL)arg1 returnValue:(void *)arg2 argument:(void *)arg3;
- (void)invokeWithSelector:(SEL)arg1 returnValue:(void *)arg2 arguments:(void *)arg3;
- (void)setBu_observerProxy:(id)arg1 key:(const void *)arg2;
- (void)setBu_observeredDeallocLinstener:(id)arg1;
- (void)swizzleInstanceMethod:(SEL)arg1 withMethod:(SEL)arg2;
@end
