//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMBaseSessionInfo.h"

#import "WCTTableCoding.h"

@interface WASessionInfo : MMBaseSessionInfo <WCTTableCoding>
{
}

+ (id)baseSessionInfoWithUsrName:(id)arg1 contact:(id)arg2 lastMessage:(id)arg3;
+ (const struct WCTProperty *)outUnreadMsgTime;
+ (const struct WCTProperty *)sessionUnTopTime;
+ (const struct WCTProperty *)pbLastMessage;
+ (const struct WCTProperty *)sessionTopTime;
+ (const struct WCTProperty *)outUnreadCount;
+ (const struct WCTProperty *)sessionFlag;
+ (const struct WCTProperty *)draftMsgTime;
+ (const struct WCTProperty *)draftMsg;
+ (const struct WCTProperty *)lastMsgUpdateTime;
+ (const struct WCTProperty *)unreadCount;
+ (const struct WCTProperty *)sessionId;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void)clearOutUnreadCount;
- (void)updateOutUnreadCount;
- (void)updateSessionInfo;
- (id)genContact;
- (void)setContact:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

