//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GIFTPRODToString.h"

@class NSString;

@interface GIFTPRODGiftMessageQueryRequst : GIFTPRODToString
{
    int _pageSize;
    int _sortLevel;
    int _currentPage;
    long long _gmtClientShow;
    NSString *_type;
    NSString *_year;
}

@property(retain, nonatomic) NSString *year; // @synthesize year=_year;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) int sortLevel; // @synthesize sortLevel=_sortLevel;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long gmtClientShow; // @synthesize gmtClientShow=_gmtClientShow;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
- (void).cxx_destruct;

@end

