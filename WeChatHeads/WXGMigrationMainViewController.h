//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CNetworkStatusExt.h"
#import "ILinkEventExt.h"
#import "UIAlertViewDelegate.h"
#import "WXGChatLogSessionViewControllerDelegate.h"

@class CTRichTextView, NSString, UIButton, UIImageView, UILabel, WXGChatLogSessionViewController;

@interface WXGMigrationMainViewController : MMUIViewController <ILinkEventExt, UIAlertViewDelegate, CNetworkStatusExt, WXGChatLogSessionViewControllerDelegate>
{
    UIImageView *m_iconView;
    UILabel *m_tipsLabel;
    UILabel *m_statusLabel;
    UIButton *m_actionButton;
    CTRichTextView *m_backupButton;
    UIButton *m_backupButtonTmp;
    _Bool m_bEnable;
    WXGChatLogSessionViewController *m_selectSessionViewController;
}

- (void).cxx_destruct;
- (void)onCancelSelectSession;
- (void)onSelectSession:(id)arg1 selectAllTime:(_Bool)arg2 selectTextOnly:(_Bool)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onShowBackupWebView;
- (void)onShowSelectSessionView;
- (void)onActionButtonPress;
- (void)makeMainView;
- (void)p_makeBackupTipText;
- (void)p_makeActionButton;
- (void)p_makeStatusTipLabel;
- (void)p_makeTipsLabel;
- (void)p_makeIconView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

