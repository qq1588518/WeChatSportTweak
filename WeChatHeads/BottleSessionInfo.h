//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMBaseSessionInfo.h"

#import "WCTTableCoding.h"

@class BottleSessionLocalIDInfo, CBottle, CBottleContact;

@interface BottleSessionInfo : MMBaseSessionInfo <WCTTableCoding>
{
    BottleSessionLocalIDInfo *arrLocalID;
}

+ (id)sessionInfoWithBottle:(id)arg1 isRealBottle:(_Bool)arg2 localIdList:(id)arg3;
+ (const struct WCTProperty *)arrLocalID;
+ (const struct WCTProperty *)sessionFlag;
+ (const struct WCTProperty *)draftMsgTime;
+ (const struct WCTProperty *)draftMsg;
+ (const struct WCTProperty *)lastMsgUpdateTime;
+ (const struct WCTProperty *)unreadCount;
+ (const struct WCTProperty *)sessionId;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) BottleSessionLocalIDInfo *arrLocalID; // @synthesize arrLocalID;
- (void).cxx_destruct;
- (id)genLastMessage;
@property(retain, nonatomic) CBottleContact *bottleContact;
- (id)genBottleContact;
@property(retain, nonatomic) CBottle *bottle;
- (id)genBottle;
@property(nonatomic) _Bool isRealBottle;
@property(nonatomic) unsigned int uiBottleLocalID;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

