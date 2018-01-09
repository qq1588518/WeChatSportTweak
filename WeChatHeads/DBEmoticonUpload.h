//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface DBEmoticonUpload : NSObject <WCTTableCoding>
{
    unsigned int _type;
    unsigned int _createTime;
    unsigned int _sendTime;
    unsigned int _offset;
    unsigned int _length;
    unsigned int _status;
    unsigned int _catalogId;
    unsigned int _ConIntRes1;
    unsigned int _ConIntRes2;
    unsigned int _ConIntRes3;
    NSString *_userName;
    NSString *_msgLocalId;
    NSString *_md5;
    NSString *_message;
    NSString *_catalog;
    NSString *_draft;
    NSString *_ConStrRes1;
    NSString *_ConStrRes2;
    NSString *_ConStrRes3;
}

+ (const struct WCTProperty *)ConStrRes3;
+ (const struct WCTProperty *)ConStrRes2;
+ (const struct WCTProperty *)ConStrRes1;
+ (const struct WCTProperty *)ConIntRes3;
+ (const struct WCTProperty *)ConIntRes2;
+ (const struct WCTProperty *)ConIntRes1;
+ (const struct WCTProperty *)draft;
+ (const struct WCTProperty *)catalogId;
+ (const struct WCTProperty *)catalog;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)length;
+ (const struct WCTProperty *)offset;
+ (const struct WCTProperty *)sendTime;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)message;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)md5;
+ (const struct WCTProperty *)msgLocalId;
+ (const struct WCTProperty *)userName;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3=_ConStrRes3;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2=_ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1=_ConStrRes1;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3=_ConIntRes3;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2=_ConIntRes2;
@property(nonatomic) unsigned int ConIntRes1; // @synthesize ConIntRes1=_ConIntRes1;
@property(retain, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(nonatomic) unsigned int catalogId; // @synthesize catalogId=_catalogId;
@property(retain, nonatomic) NSString *catalog; // @synthesize catalog=_catalog;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int length; // @synthesize length=_length;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned int sendTime; // @synthesize sendTime=_sendTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

