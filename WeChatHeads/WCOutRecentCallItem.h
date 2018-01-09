//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying.h"
#import "WCTTableCoding.h"

@class NSString;

@interface WCOutRecentCallItem : MMObject <WCTTableCoding, NSCopying>
{
    _Bool isAutoIncrement;
    unsigned int localID;
    unsigned int createTime;
    unsigned int startTime;
    unsigned int endTime;
    unsigned int statusCode;
    unsigned int _dialScene;
    unsigned int _countyrCodeType;
    unsigned int _callFlag;
    NSString *countryCode;
    NSString *phoneNum;
    long long lastInsertedRowID;
    NSString *nickName;
    NSString *phoneTag;
    NSString *_checkCountryCode;
    NSString *_inviteRespFullPhoneNum;
}

+ (const struct WCTProperty *)statusCode;
+ (const struct WCTProperty *)endTime;
+ (const struct WCTProperty *)startTime;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)phoneNum;
+ (const struct WCTProperty *)countryCode;
+ (const struct WCTProperty *)localID;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned int callFlag; // @synthesize callFlag=_callFlag;
@property(nonatomic) unsigned int countyrCodeType; // @synthesize countyrCodeType=_countyrCodeType;
@property(nonatomic) unsigned int dialScene; // @synthesize dialScene=_dialScene;
@property(retain, nonatomic) NSString *inviteRespFullPhoneNum; // @synthesize inviteRespFullPhoneNum=_inviteRespFullPhoneNum;
@property(retain, nonatomic) NSString *checkCountryCode; // @synthesize checkCountryCode=_checkCountryCode;
@property(retain, nonatomic) NSString *phoneTag; // @synthesize phoneTag;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) unsigned int statusCode; // @synthesize statusCode;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int startTime; // @synthesize startTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fullPhoneNumInLog;
@property(readonly, nonatomic) NSString *fullPhoneNum;
@property(readonly, nonatomic) NSString *statusWording;
- (void)dealloc;
- (void)CopyValueToCopy:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

