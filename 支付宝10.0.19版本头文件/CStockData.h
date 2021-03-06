//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "ProtocolStringSerialing.h"

@class NSDate, NSString;

@interface CStockData : NSObject <NSCoding, ProtocolStringSerialing>
{
    int _stockDataType;
    id _stockData;
    NSDate *_stockDataSavedTime;
}

@property(retain, nonatomic) NSDate *stockDataSavedTime; // @synthesize stockDataSavedTime=_stockDataSavedTime;
@property(retain, nonatomic) id stockData; // @synthesize stockData=_stockData;
@property(nonatomic) int stockDataType; // @synthesize stockDataType=_stockDataType;
- (void)dealloc;
- (float)ageOfStockData;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)decodeFromSerialString:(id)arg1 fromOffset:(int *)arg2;
- (_Bool)encodeToSerialString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

