//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface FTSTopHitItem : NSObject <PBCoding>
{
    NSString *searchText;
    NSMutableArray *arrTopHitValue;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *arrTopHitValue; // @synthesize arrTopHitValue;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText;
- (void).cxx_destruct;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

