//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@interface WCPayBalanceSaveMoneyViewController : WCPayBaseViewController
{
    _Bool m_bNeedBindCard;
    id <WCPayBalanceSaveMoneyViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)onSubscribeAppBtn:(id)arg1;
- (void)reloadTableView;
- (void)selectNeedBindCard:(id)arg1;
- (void)initNavigationBar;
- (void)internalPushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)OnHistoryOrderDetailBack;
- (void)setDelegate:(id)arg1;
- (id)init;

@end

