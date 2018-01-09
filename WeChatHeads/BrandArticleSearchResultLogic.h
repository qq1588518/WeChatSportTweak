//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BrandArticleSearchPageBaseLogic.h"

#import "BrandArticleSearchEventWrapDelegate.h"
#import "BrandArticleSearchPageBaseLogicImplement.h"

@class BrandArticleSearchEventWrap, NSString, UIView<YYWebViewInterface>;

@interface BrandArticleSearchResultLogic : BrandArticleSearchPageBaseLogic <BrandArticleSearchPageBaseLogicImplement, BrandArticleSearchEventWrapDelegate>
{
    UIView<YYWebViewInterface> *m_resultView;
    NSString *_lastInputText;
    struct timeval _lastInputTime;
    BrandArticleSearchEventWrap *_eventWrap;
    UIView<YYWebViewInterface> *_resultView;
}

@property(retain, nonatomic) UIView<YYWebViewInterface> *resultView; // @synthesize resultView=_resultView;
- (void).cxx_destruct;
- (_Bool)isSupportSuggestion;
- (void)sendJSEventForQueryChanged:(id)arg1;
- (void)notifyPageOfSearchClick:(id)arg1;
- (void)notifyPageOfQueryChanged:(id)arg1;
- (void)onWebViewFinishLoad;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (id)currentImplement;
- (_Bool)notifyPreCheckQuery:(id)arg1;
- (id)urlForDetailPage:(id)arg1;
- (id)urlForResultPage;
- (id)htmlPathForResult;
- (void)configSearchMgrDelegate;
- (void)willBeginDetailSearchWithParams:(id)arg1;
- (void)clearResultPage;
- (void)trySearch:(id)arg1;
- (void)notifyChanged:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)loadPage;
- (void)dealloc;
- (id)initWithSearchLogic:(id)arg1 resultView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

