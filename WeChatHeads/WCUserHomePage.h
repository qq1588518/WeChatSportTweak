//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WCUserHomePage : NSObject <WCTTableCoding>
{
    int _totalCount;
    NSString *_username;
}

+ (const struct WCTProperty *)totalCount;
+ (const struct WCTProperty *)username;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

