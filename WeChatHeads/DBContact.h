//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString;

@interface DBContact : NSObject <WCTTableCoding>
{
    unsigned int _version;
    unsigned int _uin;
    unsigned int _sex;
    unsigned int _type;
    unsigned int _LastChatTime;
    NSString *_userName;
    NSString *_nickName;
    NSString *_email;
    NSString *_mobile;
    NSString *_fullPinYin;
    NSData *_extent;
    NSString *_image;
    NSString *_draft;
}

+ (const struct WCTProperty *)draft;
+ (const struct WCTProperty *)LastChatTime;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)image;
+ (const struct WCTProperty *)extent;
+ (const struct WCTProperty *)fullPinYin;
+ (const struct WCTProperty *)sex;
+ (const struct WCTProperty *)mobile;
+ (const struct WCTProperty *)email;
+ (const struct WCTProperty *)uin;
+ (const struct WCTProperty *)nickName;
+ (const struct WCTProperty *)userName;
+ (const struct WCTProperty *)version;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned int LastChatTime; // @synthesize LastChatTime=_LastChatTime;
@property(retain, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSData *extent; // @synthesize extent=_extent;
@property(retain, nonatomic) NSString *fullPinYin; // @synthesize fullPinYin=_fullPinYin;
@property(nonatomic) unsigned int sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) unsigned int uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
