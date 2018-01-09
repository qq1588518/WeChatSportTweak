//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseControlMgr.h"

#import "MMKernelExt.h"

@class NSString, UIViewController;

@interface WCAccountManualLoginControlMgr : WCBaseControlMgr <MMKernelExt>
{
    struct map<unsigned long long, NSString *, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, NSString *>>> m_mapStatus;
    UIViewController *m_firstViewController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reportLogoutSwitchToOtherAccount;
- (void)reportLogoutSwitchToOtherMethodToLogin;
- (void)reportLogoutDefaultPhoneOrNot:(_Bool)arg1;
- (void)reportPwdSwitchToVerifyOrReverse:(_Bool)arg1;
- (void)reportPhoneSwitchToOthersOrReverse:(_Bool)arg1;
- (void)reportADID;
- (_Bool)isRestTime:(id)arg1;
- (unsigned long long)getReportTime;
- (void)reportClickStream:(id)arg1;
- (unsigned int)startNewPhoneLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCreateVoicePrintLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startInviteLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startRegisterLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSecurityCenterLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startFacebookLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startPhoneLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startQRCodeLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startLoginLogic:(id)arg1 Data:(id)arg2;
- (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 btnTitle:(id)arg9 target:(id)arg10 sel:(SEL)arg11 status:(unsigned int)arg12;
- (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 status:(unsigned int)arg9;
- (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 status:(unsigned int)arg6;
- (void)dismissAlertView:(id)arg1 buttonIndex:(id)arg2;
- (void)reportExitAlert:(id)arg1;
- (void)reportEnterAlert:(id)arg1;
- (void)reportClickAction:(unsigned int)arg1;
- (void)reportClickAction:(unsigned int)arg1 styleID:(id)arg2;
- (id)getStatusName:(unsigned int)arg1;
- (void)closeFirstView;
- (void)openFirstView:(id)arg1 withNavBarHidden:(_Bool)arg2;
- (void)openFirstView:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

