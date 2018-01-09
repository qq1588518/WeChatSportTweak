//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCTDatabase, WCTTable;

@interface MMWebCacheDataManager : NSObject
{
    WCTDatabase *_db;
    WCTTable *_tableWebCacheResInfo;
    WCTTable *_tableWebCacheResConfigInfo;
    WCTTable *_tableWebCachePushInfo;
    NSString *_dbPath;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)getStatOfDiskUsageForAllPackageIdWithAppId:(id)arg1;
- (id)getStatOfDiskUsageForAllAppId;
- (long long)getUsageForAppId:(id)arg1 packageId:(id)arg2;
- (long long)getUsageForAppId:(id)arg1;
- (id)getAllDistinctPackageIdForAppId:(id)arg1;
- (id)getAllDistinctAppId;
- (id)getRecConfigInfoWithConfigId:(id)arg1;
- (_Bool)deleteResConfigInfo:(id)arg1;
- (_Bool)insertOrUpdateResConfigInfo:(id)arg1;
- (_Bool)setDownloadFinishForPushInfo:(id)arg1;
- (id)getPushInfoListWhere:(const struct WCTExpr *)arg1;
- (_Bool)insertOrUpdatePushInfo:(id)arg1;
- (id)getResInfo:(id)arg1 protocol:(id)arg2 version:(id)arg3 resSubtype:(unsigned int)arg4 domain:(id)arg5;
- (id)getResInfo:(id)arg1 protocol:(id)arg2 version:(id)arg3 resSubtype:(unsigned int)arg4;
- (_Bool)updateResProperty:(const struct WCTProperty *)arg1 withValue:(id)arg2 where:(const struct WCTExpr *)arg3;
- (_Bool)deleteResInfo:(id)arg1 version:(id)arg2 localSubPath:(id)arg3;
- (_Bool)deleteResInfo:(id)arg1 version:(id)arg2 resSubType:(unsigned int)arg3;
- (_Bool)deleteResInfo:(id)arg1 resSubType:(unsigned int)arg2;
- (_Bool)deleteResInfoWithPath:(id)arg1;
- (_Bool)deleteResInfoWithAppId:(id)arg1 domain:(id)arg2 packageId:(id)arg3;
- (_Bool)deleteResInfoWithAppId:(id)arg1;
- (id)getAllLocalSubPathOfExpiredRes;
- (id)getResInfo:(id)arg1 protocol:(id)arg2 version:(id)arg3 resPath:(id)arg4;
- (id)getTmpResInfo:(id)arg1 protocol:(id)arg2 version:(id)arg3 localSubPath:(id)arg4;
- (id)getResInfo:(id)arg1 protocol:(id)arg2 resSubType:(unsigned int)arg3 domain:(id)arg4;
- (id)getResInfo:(id)arg1 protocol:(id)arg2 resSubType:(unsigned int)arg3;
- (id)getResInfo:(id)arg1 protocol:(id)arg2;
- (id)getWebCacheAsynResInfo:(id)arg1 protocol:(id)arg2 domain:(id)arg3 packageId:(id)arg4 version:(id)arg5;
- (id)getWebCacheSyncResInfo:(id)arg1 protocol:(id)arg2 domain:(id)arg3 version:(id)arg4;
- (_Bool)updateCreateTimeForResInfo:(id)arg1;
- (_Bool)updateAccessTimeForResInfo:(id)arg1;
- (_Bool)updateResInfo:(id)arg1;
- (_Bool)insertNewResInfo:(id)arg1;
- (void)closeDB;
- (void)openDB;
- (void)openWebCacheTable;
- (id)getDBTableNameFor:(id)arg1 version:(id)arg2;
- (void)deleteOldVersionWebCacheData;
- (void)deleteAllWebCacheFile;
- (void)dropOldVersionWebCacheTable;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1 event:(CDUnknownBlockType)arg2;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (id)initWithDBPath:(id)arg1;

@end

