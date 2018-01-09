//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IAppDataExt.h"
#import "IPreEnterWechatLogicExt.h"
#import "MMKernelExt.h"
#import "MMWebViewDelegate.h"

@class NSString, NSURL, UINavigationController;

@interface NewAuthHandler : MMObject <IAppDataExt, MMWebViewDelegate, MMKernelExt, IPreEnterWechatLogicExt>
{
    NSString *m_nsAppid;
    NSURL *m_url;
    NSString *m_nsBundleId;
    UINavigationController *m_oAuthViewController;
    _Bool m_isDoing;
    NSString *_m_nsScope;
    NSString *_m_nsState;
}

@property(retain, nonatomic) NSString *m_nsState; // @synthesize m_nsState=_m_nsState;
@property(retain, nonatomic) NSString *m_nsScope; // @synthesize m_nsScope=_m_nsScope;
- (void).cxx_destruct;
- (void)onScopeViewControllerFail:(id)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (void)onScopeViewControllerCancel:(id)arg1;
- (void)onPostQuit;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)OnGotListAppSettingItem:(id)arg1 errType:(int)arg2;
- (void)onLeaveWebviewAndBackTo3rdApp;
- (id)webViewFailToLoad:(id)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewDidStartLoad:(id)arg1;
- (void)OnOAuthCancel;
- (void)onPreEnterWechatDone;
- (void)removeOAuthView;
- (void)onRetry:(id)arg1;
- (void)openNativeOauth;
- (void)createOAuthView;
- (_Bool)isABTestUseNativeOauth;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (id)parseURLParams;
- (void)cancelWechatConnect;
- (void)startWechatConnect:(id)arg1 authInfo:(id)arg2 bundleId:(id)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

