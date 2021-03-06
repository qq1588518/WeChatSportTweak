//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class LSLiveUserInfo, NSDate, NSDictionary, NSMutableArray, NSString;

@interface LSBizOptionInfo : NSObject <NSCopying>
{
    _Bool _isLocal;
    _Bool _isReplay;
    _Bool _isSync;
    LSLiveUserInfo *_userInfo;
    long long _optionType;
    NSString *_optionId;
    NSString *_liveId;
    NSDate *_date;
    double _offset;
    NSString *_content;
    NSDictionary *_extend;
    unsigned long long _currentWatcherCount;
    NSMutableArray *_watcherList;
}

+ (id)updateWithCommentSyncPayload:(id)arg1;
+ (id)countDownOption:(int)arg1;
+ (id)countDownRemindOption:(int)arg1;
+ (id)closeLiveOptionInfo;
@property(nonatomic) _Bool isSync; // @synthesize isSync=_isSync;
@property(retain, nonatomic) NSMutableArray *watcherList; // @synthesize watcherList=_watcherList;
@property(nonatomic) unsigned long long currentWatcherCount; // @synthesize currentWatcherCount=_currentWatcherCount;
@property(nonatomic) _Bool isReplay; // @synthesize isReplay=_isReplay;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(retain, nonatomic) NSDictionary *extend; // @synthesize extend=_extend;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSString *optionId; // @synthesize optionId=_optionId;
@property(nonatomic) long long optionType; // @synthesize optionType=_optionType;
@property(retain, nonatomic) LSLiveUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithResumeLiveInfo:(id)arg1;
- (void)updateWithLiveStopBySecuritySyncPayload:(id)arg1;
- (void)updateWithLiveStopSyncPayload:(id)arg1;
- (void)updateWithRewardSyncPayload:(id)arg1;
- (void)updateWithPraiseSyncPayload:(id)arg1;
- (void)updateWithWatcherChangeSyncPayload:(id)arg1;
@property(readonly, nonatomic) long long participateType;
@property(readonly, nonatomic) NSString *closeReasonMemo;
@property(readonly, nonatomic) long long closeLiveType;

// Remaining properties
@property(readonly, nonatomic) long long sendCloseType;

@end

