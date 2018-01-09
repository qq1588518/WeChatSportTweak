//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IPreEnterWechatLogicExt.h"
#import "SessionSelectControllerDelegate.h"
#import "ShareMessageConfirmLogicHelperDelegate.h"
#import "UIAlertViewDelegate.h"

@class AppCommunicateData, CContact, CMessageWrap, ForwardMessageLogicController, MMUINavigationController, NSMutableDictionary, NSString, UIAlertView, WAContactGetter, WXMediaInternalMessage;

@interface SendAppMsgHandler : MMObject <SessionSelectControllerDelegate, ShareMessageConfirmLogicHelperDelegate, UIAlertViewDelegate, IPreEnterWechatLogicExt>
{
    NSString *m_nsAppid;
    NSString *m_nsBundleId;
    AppCommunicateData *m_appData;
    CMessageWrap *m_messageWrap;
    CContact *m_oContact;
    UIAlertView *m_alertView;
    _Bool m_bIsHiddenTarBar;
    int m_Scene;
    NSString *m_nsRedirectUrl;
    ForwardMessageLogicController *m_forwardMsgLogic;
    unsigned int m_uiSessionSelectConfirmType;
    _Bool m_bIsFromSysCopy;
    _Bool _appBrandWithShareTicket;
    unsigned int _appbrandVersion;
    id <SendAppMsgHandleDelegate> m_delegate;
    MMUINavigationController *_m_navigationController;
    WXMediaInternalMessage *_mediaMessage;
    WAContactGetter *_contactGetter;
    NSString *_appbrandDisplayName;
    NSString *_appbrandIconUrl;
    NSMutableDictionary *_shareKeyInfo;
    NSString *_appbrandAppId;
}

@property(nonatomic) _Bool appBrandWithShareTicket; // @synthesize appBrandWithShareTicket=_appBrandWithShareTicket;
@property(retain, nonatomic) NSString *appbrandAppId; // @synthesize appbrandAppId=_appbrandAppId;
@property(retain, nonatomic) NSMutableDictionary *shareKeyInfo; // @synthesize shareKeyInfo=_shareKeyInfo;
@property(retain, nonatomic) NSString *appbrandIconUrl; // @synthesize appbrandIconUrl=_appbrandIconUrl;
@property(retain, nonatomic) NSString *appbrandDisplayName; // @synthesize appbrandDisplayName=_appbrandDisplayName;
@property(nonatomic) unsigned int appbrandVersion; // @synthesize appbrandVersion=_appbrandVersion;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
@property(retain, nonatomic) WXMediaInternalMessage *mediaMessage; // @synthesize mediaMessage=_mediaMessage;
@property(retain, nonatomic) MMUINavigationController *m_navigationController; // @synthesize m_navigationController=_m_navigationController;
@property(nonatomic) _Bool m_bIsFromSysCopy; // @synthesize m_bIsFromSysCopy;
@property(nonatomic) int m_Scene; // @synthesize m_Scene;
@property(nonatomic) __weak id <SendAppMsgHandleDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnForwardMessageStayAtWeChat:(id)arg1;
- (void)OnForwardMessageBackToApp:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardAppBrandMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (void)OnForwardMessageSelectSession:(id)arg1;
- (id)getCurrentViewController;
- (void)removeAuthViewController;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)handleShareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)doAppAuth;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertView;
- (void)asyncNotifySendAppMsgOk;
- (void)clearAllHandleAndReturn3rdApp:(_Bool)arg1;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (void)cancelSendAppMsg;
- (void)sendAppMsg:(id)arg1;
- (void)sendAppMsg:(id)arg1 bundleId:(id)arg2 withData:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

