//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavForwardLogicDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "MMProductControllerExt.h"
#import "MMWebImageViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "ViewLocationDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCanvasComponentDelegate.h"
#import "WCCanvasDynamicDataLoaderDelegate.h"
#import "WCCanvasImageLoaderObserver.h"
#import "WCCommitViewResultDelegate.h"
#import "WCNetworkMediaPlayerDelegate.h"
#import "YYWebViewDelegate.h"
#import "tableViewDelegate.h"

@class CMessageWrap, FavForwardLogicController, ForwardMessageLogicController, MMLoadingView, MMProgressViewEx, MMTableView, MMTimer, MMUIWindow, MMWebImageView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURLRequest, UIButton, UIImage, UIImageView, UINavigationController, UIView, WCAdvertiseInfo, WCCanvasArrowDownIcon, WCCanvasComponentItem, WCCanvasDynamicDataLoader, WCCanvasReportMgr, WCDataItem;

@interface WCCanvasPageViewController : MMUIViewController <WCCanvasComponentDelegate, WCActionSheetDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate, UIViewControllerAnimatedTransitioning, UINavigationControllerDelegate, WCCanvasImageLoaderObserver, ViewLocationDelegate, FavForwardLogicDelegate, WCCanvasDynamicDataLoaderDelegate, MMWebImageViewDelegate, MMProductControllerExt, YYWebViewDelegate, WCNetworkMediaPlayerDelegate, tableViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    WCDataItem *m_dataItem;
    MMTableView *m_tableView;
    CMessageWrap *m_msgWrap;
    WCAdvertiseInfo *m_advertiseInfo;
    UINavigationController *_shareToTimelineNavController;
    MMLoadingView *_loadingView;
    ForwardMessageLogicController *m_forwardLogic;
    FavForwardLogicController *m_favForwardController;
    MMUIWindow *m_fullScreenWindow;
    _Bool m_bShowSelfView;
    _Bool m_bForbidFavMenu;
    _Bool _m_bAllowFirstSightVoice;
    _Bool _m_bClickedCloseBtn;
    _Bool _m_bHasTryDownloadAllPage;
    _Bool _m_bHasDrag;
    _Bool _isKeyboardShowing;
    _Bool _isKeyboardDidShow;
    int m_canvasPageScene;
    int _m_originCanvasScene;
    unsigned int _beginTimeDownloadFirstImage;
    UIView *m_originView;
    MMWebImageView *m_FirstViewToAnimate;
    UIImageView *m_fakeScreenView;
    UIView *m_topView;
    WCCanvasArrowDownIcon *m_arrowDownIcon;
    UIImageView *m_topMaskView;
    UIImage *m_arrowDownImage;
    UIView *m_originViewCopyToShowAnimation;
    id <WCCanvasPageViewControllerDelegate> _m_delegate;
    NSString *_m_thumbUrl;
    NSDictionary *_extraInfo;
    MMProgressViewEx *_progressLoadingView;
    NSMutableArray *_m_arrowDownIconHasShowList;
    NSMutableDictionary *_m_dicCellIdToHeight;
    NSMutableDictionary *_m_dicCellIdToAppearFactor;
    MMTimer *_timer;
    UIButton *_m_fullScreenExitButton;
    WCCanvasDynamicDataLoader *_dynamicLoader;
    NSMutableDictionary *_URL2BgImageViewMap;
    WCCanvasComponentItem *_m_oFirstVideoComponentItem;
    NSMutableDictionary *_m_dicH5UrlToPreloadWebview;
    WCCanvasReportMgr *_m_reportMgr;
    struct CGPoint _offsetBeforeDragging;
    struct CGPoint _fromOffsetBeforeScoll;
    struct CGPoint _toOffsetAfterScroll;
    struct CGPoint _contentOffsetWhenKeyboardWillShow;
    struct CGRect m_originRectInScreen;
}

@property(retain, nonatomic) WCCanvasReportMgr *m_reportMgr; // @synthesize m_reportMgr=_m_reportMgr;
@property(retain, nonatomic) NSMutableDictionary *m_dicH5UrlToPreloadWebview; // @synthesize m_dicH5UrlToPreloadWebview=_m_dicH5UrlToPreloadWebview;
@property(nonatomic) _Bool isKeyboardDidShow; // @synthesize isKeyboardDidShow=_isKeyboardDidShow;
@property(nonatomic) _Bool isKeyboardShowing; // @synthesize isKeyboardShowing=_isKeyboardShowing;
@property(nonatomic) struct CGPoint contentOffsetWhenKeyboardWillShow; // @synthesize contentOffsetWhenKeyboardWillShow=_contentOffsetWhenKeyboardWillShow;
@property(retain, nonatomic) WCCanvasComponentItem *m_oFirstVideoComponentItem; // @synthesize m_oFirstVideoComponentItem=_m_oFirstVideoComponentItem;
@property(nonatomic) _Bool m_bHasDrag; // @synthesize m_bHasDrag=_m_bHasDrag;
@property(retain, nonatomic) NSMutableDictionary *URL2BgImageViewMap; // @synthesize URL2BgImageViewMap=_URL2BgImageViewMap;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dynamicLoader; // @synthesize dynamicLoader=_dynamicLoader;
@property(retain, nonatomic) UIButton *m_fullScreenExitButton; // @synthesize m_fullScreenExitButton=_m_fullScreenExitButton;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned int beginTimeDownloadFirstImage; // @synthesize beginTimeDownloadFirstImage=_beginTimeDownloadFirstImage;
@property(nonatomic) _Bool m_bHasTryDownloadAllPage; // @synthesize m_bHasTryDownloadAllPage=_m_bHasTryDownloadAllPage;
@property(nonatomic) _Bool m_bClickedCloseBtn; // @synthesize m_bClickedCloseBtn=_m_bClickedCloseBtn;
@property(retain, nonatomic) NSMutableDictionary *m_dicCellIdToAppearFactor; // @synthesize m_dicCellIdToAppearFactor=_m_dicCellIdToAppearFactor;
@property(retain, nonatomic) NSMutableDictionary *m_dicCellIdToHeight; // @synthesize m_dicCellIdToHeight=_m_dicCellIdToHeight;
@property(retain, nonatomic) NSMutableArray *m_arrowDownIconHasShowList; // @synthesize m_arrowDownIconHasShowList=_m_arrowDownIconHasShowList;
@property(retain, nonatomic) MMProgressViewEx *progressLoadingView; // @synthesize progressLoadingView=_progressLoadingView;
@property(nonatomic) struct CGPoint toOffsetAfterScroll; // @synthesize toOffsetAfterScroll=_toOffsetAfterScroll;
@property(nonatomic) struct CGPoint fromOffsetBeforeScoll; // @synthesize fromOffsetBeforeScoll=_fromOffsetBeforeScoll;
@property(nonatomic) struct CGPoint offsetBeforeDragging; // @synthesize offsetBeforeDragging=_offsetBeforeDragging;
@property(nonatomic) int m_originCanvasScene; // @synthesize m_originCanvasScene=_m_originCanvasScene;
@property(nonatomic) _Bool m_bAllowFirstSightVoice; // @synthesize m_bAllowFirstSightVoice=_m_bAllowFirstSightVoice;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *m_thumbUrl; // @synthesize m_thumbUrl=_m_thumbUrl;
@property(nonatomic) __weak id <WCCanvasPageViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) UIView *m_originViewCopyToShowAnimation; // @synthesize m_originViewCopyToShowAnimation;
@property(retain, nonatomic) UIImage *m_arrowDownImage; // @synthesize m_arrowDownImage;
@property(nonatomic) int m_canvasPageScene; // @synthesize m_canvasPageScene;
@property(retain, nonatomic) WCAdvertiseInfo *m_advertiseInfo; // @synthesize m_advertiseInfo;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) UIImageView *m_topMaskView; // @synthesize m_topMaskView;
@property(nonatomic) _Bool m_bForbidFavMenu; // @synthesize m_bForbidFavMenu;
@property(retain, nonatomic) WCCanvasArrowDownIcon *m_arrowDownIcon; // @synthesize m_arrowDownIcon;
@property(retain, nonatomic) UIView *m_topView; // @synthesize m_topView;
@property(retain, nonatomic) UIImageView *m_fakeScreenView; // @synthesize m_fakeScreenView;
@property(retain, nonatomic) MMWebImageView *m_FirstViewToAnimate; // @synthesize m_FirstViewToAnimate;
@property(retain, nonatomic) UIView *m_originView; // @synthesize m_originView;
@property(nonatomic) struct CGRect m_originRectInScreen; // @synthesize m_originRectInScreen;
@property(nonatomic) _Bool m_bShowSelfView; // @synthesize m_bShowSelfView;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
- (void).cxx_destruct;
- (void)onMediaPlayer:(id)arg1 playerStateChange:(int)arg2;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (_Bool)needHiddenMoreMenu;
- (void)onClosePlayer;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onTrySetStatusBarHiddenForCanvasAd;
- (void)onLoadImageOK:(id)arg1;
- (id)getFavForawrdViewController;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (void)exposureCurrentScreen;
- (void)animateShowAfterFirstImageDownloaded;
- (void)stopLoadingAndShowErrorTip;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)updateGroup:(id)arg1 usingDynamicInfo:(id)arg2;
- (void)updateComponent:(id)arg1 usingDynamicInfo:(id)arg2;
- (void)updatePage:(id)arg1 usingDynamicInfo:(id)arg2;
- (void)onCanvasDynamicDataReturn:(id)arg1;
- (void)onExitBtnClicked;
- (unsigned int)getDownloadSceneFromPageScene;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)hideWithoutAnimate;
- (void)animateHide;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateHideWithOrientation:(long long)arg1;
- (void)animateShowStep2WithFinalFrame:(struct CGRect)arg1;
- (void)animateShowWithOriginRectInScreen:(struct CGRect)arg1;
- (void)WillEnterForeground:(id)arg1;
- (void)DidEnterBackground:(id)arg1;
- (void)notifyComponetWithAppearedFactorInMainScreen;
- (void)notifyFullyAppearOrDisappearComponetInMainScreen;
- (void)notifyFullyAppearComponetInMainScreen;
- (void)notifyComponentHasAppearInMainScreenFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2;
- (int)getOriginCanvasScene;
- (void)tryToCancelLoadFirstImage;
- (id)getCanvasComponentItemAtIndexPath:(id)arg1;
- (id)getBackGroundColorAtSection:(long long)arg1;
- (id)getCellIdentifierAtIndexPath:(id)arg1;
- (unsigned int)getAdType;
- (id)getUxInfo;
- (id)getSnsId;
- (_Bool)isCurrentVCFromCanvasAd;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)isBettwenSectionForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)isFirstCellInSection:(id)arg1;
- (_Bool)isLastCellInSection:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hideDownArrowIcon;
- (_Bool)shouldEnableInteractivePop;
- (_Bool)shouldPopWithCustomAnimation;
- (_Bool)shouldShowWithCustomAnimation;
- (void)tryShowArrowDownIconWithCurrentOffsetAndLastComponent;
- (_Bool)shouldShowArrowDownIconWithCurrentOffset;
- (_Bool)secionHasShowDownArrow:(long long)arg1;
- (_Bool)canShowDownArrow:(long long)arg1;
- (void)tryShowDownArrowAnimate:(long long)arg1;
- (void)showDownArrowAnimateWithSection:(long long)arg1;
- (void)showDownArrowAfterPushed;
- (void)tryShowDownArrowAnimate;
- (_Bool)isCurSectionBlackMoreThanWhite:(long long)arg1;
- (id)getBackGroundColorWhenLoading:(long long)arg1;
- (void)canvasComponent:(id)arg1 willShowViewController:(id)arg2;
- (void)canvasComponent:(id)arg1 willAddViewController:(id)arg2;
- (void)canvasComponent:(id)arg1 willExistAndJumpUrl:(id)arg2;
- (void)setLoading:(_Bool)arg1;
- (void)canvasComponent:(id)arg1 willJumpToCanvas:(id)arg2;
- (void)jumpStreamVideoForSightComponent:(id)arg1;
- (void)getCanvasScene:(int *)arg1;
- (id)getAdUxInfo;
- (id)getReportMgr;
- (void)captureScreen;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (id)getThumbUrl;
- (void)loadingAfterDownFirstImageFail;
- (void)loadingAfterForwardMessageOK;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onMoreBtnClicked;
- (void)shareCanvasPageToTimeline;
- (id)genStatExtString;
- (id)genUploadTask;
- (void)sendCanvasPageToFriend;
- (void)favCavasPage;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onBtnCloseCanvasPage;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct CGRect)rectForSection:(id)arg1 section:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)updateArrowDownImageWithSection:(long long)arg1;
- (void)addBlurView:(id)arg1 page:(id)arg2;
- (void)tryInitSectionBgView;
- (void)initFirstCellView;
- (void)initTopBar;
- (void)initPushingNavigationItem;
- (void)initNavigationItem;
- (void)initTableView;
- (_Bool)useTransparentNavibar;
- (void)dealloc;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)getCacheWebviewWithUrl:(id)arg1;
- (void)tryClearAllCacheWebview;
- (void)tryPreloadWebview;
- (void)tryClearEnterViewIndex;
- (void)notifyVisibleComponentsDidAppear;
- (void)notifyVisibleComponentsWillDisappear;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)hasTableViewAlreadyReachBottom;
- (void)updateAdCanvasPages;
- (void)commomInit;
- (id)initWithMsgWrap:(id)arg1 advertiseInfo:(id)arg2 originView:(id)arg3;
- (id)initWithDataItem:(id)arg1 advertiseInfo:(id)arg2 originView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

