//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WAJSEventHandlerContextDelegate.h"

@class NSArray, NSCondition, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSThread, WAAppTaskExtInfo, WAJSContext, WAJSContextPluginScheduler, WAJSCoreServiceOpenData, WAWebViewController, WxaExternalInfo;

@interface WAJSCoreService : NSObject <WAJSEventHandlerContextDelegate>
{
    unsigned int _debugModeType;
    _Bool _isDebugAndVConsoleOpen;
    WxaExternalInfo *_wxaExternalInfo;
    unsigned long long _appVersion;
    unsigned int _appServiceMaxDataSize;
    WAAppTaskExtInfo *_taskExtInfo;
    NSString *_enterPath;
    unsigned int _enterScene;
    NSArray *_templates;
    unsigned int _nativeBufferSizeLimit;
    unsigned int _nativeBufferQueueLimit;
    unsigned long long _taskRunningState;
    _Bool _jsThreadSuspended;
    _Bool _jsThreadDying;
    NSCondition *_condition;
    NSString *lastError;
    _Bool _threadInjected;
    _Bool _hasInjectErr;
    _Bool _useCompatibleModeConvertData;
    id <WAJSCoreServiceDelegate> _delegate;
    WAWebViewController *_currentWebView;
    NSString *_serviceJSUrl;
    WAJSContextPluginScheduler *_pluginScheduler;
    unsigned long long _runningState;
    WAJSCoreServiceOpenData *_launchData;
    NSThread *_thread;
    WAJSContext *_context;
    NSString *_appID;
    NSMutableDictionary *_timerObjs;
    NSMutableSet *_eventHandlers;
    NSMutableArray *_prevEvents;
    NSMutableDictionary *_extraInfo;
}

@property _Bool useCompatibleModeConvertData; // @synthesize useCompatibleModeConvertData=_useCompatibleModeConvertData;
@property(retain) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain) NSMutableArray *prevEvents; // @synthesize prevEvents=_prevEvents;
@property(retain) NSMutableSet *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property(retain) NSMutableDictionary *timerObjs; // @synthesize timerObjs=_timerObjs;
@property(copy) NSString *appID; // @synthesize appID=_appID;
@property _Bool hasInjectErr; // @synthesize hasInjectErr=_hasInjectErr;
@property _Bool threadInjected; // @synthesize threadInjected=_threadInjected;
@property(retain) WAJSContext *context; // @synthesize context=_context;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) WAJSCoreServiceOpenData *launchData; // @synthesize launchData=_launchData;
@property(nonatomic) unsigned long long runningState; // @synthesize runningState=_runningState;
@property(retain, nonatomic) WAJSContextPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(copy, nonatomic) NSString *serviceJSUrl; // @synthesize serviceJSUrl=_serviceJSUrl;
@property(nonatomic) __weak WAWebViewController *currentWebView; // @synthesize currentWebView=_currentWebView;
@property(nonatomic) __weak id <WAJSCoreServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned int)nativeBufferTotalSize;
- (id)popNativeBuffer:(id)arg1;
- (id)addNativeBuffer:(id)arg1;
- (void)injectWeiXinNativeBuffer;
- (id)parseNative2SdkNativeBufferParam:(id)arg1 getError:(id *)arg2;
- (id)parseInvokeHandlerNativeBufferParam:(id)arg1 getError:(id *)arg2;
- (void)executeDelayToForegroundJSAPI;
- (void)resumeWorkingThreadToDie:(_Bool)arg1;
- (void)threadDidReceiveSuspend;
- (void)suspendWorkingThread;
- (void)checkWorkingThreadStatusWhenRunningStateChanged;
- (void)onRunningStateDidChanged:(unsigned long long)arg1;
- (void)onRunningStateWillChanged:(unsigned long long)arg1;
- (void)onWeAppEnterForeground:(id)arg1 isFromSystemAwake:(_Bool)arg2;
- (void)onWeAppEnterBackground:(long long)arg1;
- (void)asyncPrintConsoleLogToCurrentWebView:(id)arg1;
- (void)printConsoleLog:(id)arg1;
- (id)GetWebViewPluginByName:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (void)setWxaExternalInfo:(id)arg1;
- (id)getWxaExternalInfo;
- (void)setIsDebugAndVConsoleOpen:(_Bool)arg1;
- (_Bool)isDebugAndVConsoleOpen;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (id)getAppId;
- (id)getEventHandler:(id)arg1;
- (void)removeHandler:(id)arg1;
- (void)reportApiCallResult:(id)arg1;
- (void)workThread_invokeCallbackHandler:(id)arg1;
- (void)endWithResult:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (void)onTimer:(id)arg1;
- (unsigned int)addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(_Bool)arg3;
- (void)notifyJSInjectedOnMainThread:(id)arg1;
- (void)stopPlayingAudio;
- (_Bool)isPlayingAudio;
- (void)injectJSBaseForAppBrandThread:(id)arg1 wrapScript:(id)arg2;
- (void)reportJSError:(id)arg1;
- (id)getCurrentWebView;
- (id)wxAppInfoJSONWithTemplate:(id)arg1 contactAttribute:(id)arg2;
- (id)getAppLaunchConfig;
- (void)setRefererInfo:(id)arg1 toDicParam:(id)arg2;
- (void)injectJavaScript;
- (void)releaseJSContext;
- (void)initJSContext:(id)arg1;
- (void)setEnterPath:(id)arg1 withScene:(unsigned int)arg2 taskExtInfo:(id)arg3;
- (void)triggerStrictBanMode:(id)arg1;
- (void)checkUserAuthWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;
- (_Bool)checkJSAPIRunInMainThread:(id)arg1;
- (_Bool)checkJSAPIRunMode:(id)arg1;
- (id)getPermissionWithJSAPI:(id)arg1;
- (void)onAppBeforPushNavigation:(id)arg1;
- (_Bool)isJSInjected;
- (void)performEventOnThread:(id)arg1;
- (void)sendInnerAppBrandEvent:(long long)arg1 param:(id)arg2 webviewID:(unsigned long long)arg3;
- (void)sendAppBrandEvent:(long long)arg1 param:(id)arg2 webviewID:(unsigned long long)arg3;
- (void)workthread_sendJSEventToService:(id)arg1;
- (void)sendJSEventToService:(id)arg1 param:(id)arg2 webViewId:(unsigned int)arg3;
- (void)sendWebviewEventToService:(id)arg1 webViewId:(unsigned int)arg2;
- (void)sendErrorEvent:(id)arg1;
- (void)workThread_runOperationBlock:(CDUnknownBlockType)arg1;
- (void)asyncRunOperationBlockOnWorkThread:(CDUnknownBlockType)arg1;
- (void)stopAppBrandAndThread;
- (void)stopAppBrand;
- (void)startAppBrand:(id)arg1 extraInfo:(id)arg2;
- (void)startServiceThread;
- (void)runThread:(id)arg1;
- (void)loadAppConfig;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

