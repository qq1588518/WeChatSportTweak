//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "CountryCodePickerDelegate.h"
#import "UITextFieldDelegate.h"

@class CountryCodeWrap, NSString, PhoneNumberFormatLogic, UIButton, WCAccountTextFieldItem, WCBaseKeyboardToolBar;

@interface WCAccountFillPhoneViewController : WCAccountBaseViewController <CountryCodePickerDelegate, UITextFieldDelegate>
{
    WCAccountTextFieldItem *m_textFieldContryCodeSelectItem;
    WCAccountTextFieldItem *m_textFieldContryCodeItem;
    WCAccountTextFieldItem *m_textFieldPhoneNumberItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    CountryCodeWrap *m_curCountryCode;
    WCAccountTextFieldItem *m_textFieldPwdItem;
    PhoneNumberFormatLogic *m_phoneNumFormatter;
    UIButton *m_btnNext;
    NSString *m_nsHeaderTip;
    _Bool m_bAgreementMobileCanBeFound;
    id <WCAccountFillPhoneViewControllerDelegate> m_delegate;
}

@property(nonatomic) _Bool m_bAgreementMobileCanBeFound; // @synthesize m_bAgreementMobileCanBeFound;
- (void).cxx_destruct;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)findCountryCode;
- (void)checkNextBtnEnable;
- (void)showCountryCodePickerView;
- (void)hideKeyBoard;
- (void)initTableView;
- (void)setViewY;
- (void)showCountryCode;
- (void)vcResignFirstResponder;
- (void)vcBecomeFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)setLeftBarBtnTitleForNakedWxProtect:(id)arg1;
- (void)setLeftBarBtnTitle:(id)arg1;
- (void)showMobileCanBeFound;
- (void)onMobileCanBeFoundAgreementClick:(id)arg1;
- (void)fillCountryCode:(id)arg1 phoneNum:(id)arg2;
- (void)showNextFooter:(id)arg1;
- (void)showLoginFooter;
- (void)showBindFooter;
- (id)createBottomBtn:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)onByPhonePwdLoginByVerifyCode;
- (void)initNavigationBar;
- (void)onNext;
- (void)setHeaderTip:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

