//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMKSMusicTask : NSObject
{
    _Bool _isLocalFile;
    _Bool _isQQMusic;
    NSString *_url;
    NSString *_musicId;
    double _startTime;
}

@property(nonatomic) _Bool isQQMusic; // @synthesize isQQMusic=_isQQMusic;
@property(nonatomic) _Bool isLocalFile; // @synthesize isLocalFile=_isLocalFile;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

