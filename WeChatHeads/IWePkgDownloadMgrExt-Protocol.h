//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WePkgDownloadMgr, WePkgFileDownloadInfo;

@protocol IWePkgDownloadMgrExt <NSObject>

@optional
- (void)downloadMgr:(WePkgDownloadMgr *)arg1 didFailForDownloadInfo:(WePkgFileDownloadInfo *)arg2 errCode:(int)arg3 NoAutoRetry:(_Bool)arg4;
- (void)downloadMgr:(WePkgDownloadMgr *)arg1 didSuccessForDownloadInfo:(WePkgFileDownloadInfo *)arg2;
@end

