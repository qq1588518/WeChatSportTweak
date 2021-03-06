//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "APGSearchResultProtocol.h"

@class APExceptionView, APGSearchDetailViewController, APGSearchErrorView, APGSearchManager, APGSearchResultViewController, APGTabConfig, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, WKTableCellModel, WKTableViewController;

@interface APGSearchResultContentViewController : UIViewController <APGSearchResultProtocol>
{
    _Bool _dataIsLoaded;
    _Bool _hasSearchMore;
    _Bool _collectionViewCount;
    _Bool _hasLocalSearchResult;
    _Bool _hasAddedNotify;
    APGSearchResultViewController *_searchResultViewController;
    APGTabConfig *_config;
    APExceptionView *_exceptionView;
    CDUnknownBlockType _dataRespBlock;
    WKTableViewController *_defaultResultViewController;
    NSMutableArray *_searchResultsCache;
    NSMutableArray *_localEngineResults;
    NSMutableDictionary *_nextPageScenes;
    NSString *_currentNextPageScene;
    NSString *_currentSearchText;
    NSOperationQueue *_searchQueue;
    APGSearchManager *_searchManager;
    long long _localSearchStartIndex;
    APGSearchErrorView *_errorView;
    APGSearchDetailViewController *_detailViewController;
    WKTableCellModel *_relatedSearchResult;
    WKTableCellModel *_recentSearchResult;
}

@property(retain, nonatomic) WKTableCellModel *recentSearchResult; // @synthesize recentSearchResult=_recentSearchResult;
@property(nonatomic) _Bool hasAddedNotify; // @synthesize hasAddedNotify=_hasAddedNotify;
@property(retain, nonatomic) WKTableCellModel *relatedSearchResult; // @synthesize relatedSearchResult=_relatedSearchResult;
@property(nonatomic) _Bool hasLocalSearchResult; // @synthesize hasLocalSearchResult=_hasLocalSearchResult;
@property(retain, nonatomic) APGSearchDetailViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) APGSearchErrorView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) long long localSearchStartIndex; // @synthesize localSearchStartIndex=_localSearchStartIndex;
@property(retain, nonatomic) APGSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(retain, nonatomic) NSOperationQueue *searchQueue; // @synthesize searchQueue=_searchQueue;
@property(retain) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property(retain, nonatomic) NSString *currentNextPageScene; // @synthesize currentNextPageScene=_currentNextPageScene;
@property(retain, nonatomic) NSMutableDictionary *nextPageScenes; // @synthesize nextPageScenes=_nextPageScenes;
@property(retain, nonatomic) NSMutableArray *localEngineResults; // @synthesize localEngineResults=_localEngineResults;
@property(retain, nonatomic) NSMutableArray *searchResultsCache; // @synthesize searchResultsCache=_searchResultsCache;
@property(retain, nonatomic) WKTableViewController *defaultResultViewController; // @synthesize defaultResultViewController=_defaultResultViewController;
@property(nonatomic) _Bool collectionViewCount; // @synthesize collectionViewCount=_collectionViewCount;
@property(copy, nonatomic) CDUnknownBlockType dataRespBlock; // @synthesize dataRespBlock=_dataRespBlock;
@property(nonatomic) _Bool hasSearchMore; // @synthesize hasSearchMore=_hasSearchMore;
@property(nonatomic) _Bool dataIsLoaded; // @synthesize dataIsLoaded=_dataIsLoaded;
@property(retain, nonatomic) APExceptionView *exceptionView; // @synthesize exceptionView=_exceptionView;
@property(retain, nonatomic) APGTabConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak APGSearchResultViewController *searchResultViewController; // @synthesize searchResultViewController=_searchResultViewController;
- (void).cxx_destruct;
- (id)searchMenuInfo;
- (void)refreshCurrectCategoryView:(id)arg1;
- (void)showNetErrorView:(long long)arg1;
- (void)processClickForRecentData:(id)arg1;
- (void)insertRecentData:(id)arg1 groupKey:(id)arg2 index:(long long)arg3;
- (_Bool)didSelectNormalMoreCell:(id)arg1 dataModel:(id)arg2 groupKey:(id)arg3 groupName:(id)arg4 closeSuggest:(id)arg5;
- (_Bool)didSelectMoreSearchResult:(id)arg1 dataModel:(id)arg2 groupKey:(id)arg3 groupName:(id)arg4 closeSuggest:(id)arg5;
- (void)searchResultItemClickMonitor:(id)arg1 index:(long long)arg2 groupKey:(id)arg3;
- (_Bool)viewController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didSelectSearchScrollResultCell:(id)arg1;
- (void)pagedEventFired:(id)arg1;
- (void)onRemoteSearchGroup:(id)arg1 text:(id)arg2 remoteResult:(id)arg3 hasMore:(_Bool)arg4 bucketId:(id)arg5 error:(id)arg6;
- (id)handleRelatedSearchData:(id)arg1;
- (void)onSearchText:(id)arg1 result:(id)arg2 resultSource:(unsigned long long *)arg3 bucketId:(id)arg4 error:(id)arg5;
- (void)showLocalSearchResult:(id)arg1 startTime:(double)arg2;
- (void)searchRemote:(id)arg1 withLogParams:(id)arg2 searchSource:(id)arg3;
- (_Bool)isLocalUniqueGroupKey:(id)arg1;
- (void)searchLocal:(id)arg1 groupKeys:(id)arg2;
- (void)searchLocal:(id)arg1;
- (void)searchHot:(id)arg1 withLogParams:(id)arg2;
- (void)searchHotWithExtParams:(id)arg1;
- (void)searchText:(id)arg1 withLogParams:(id)arg2;
- (void)logSearchText:(id)arg1 logParams:(id)arg2 searchType:(id)arg3;
- (void)removeDataModel;
- (void)clearCacheData;
- (void)clearData;
- (void)showErrorView;
- (void)showDefaultResultView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

