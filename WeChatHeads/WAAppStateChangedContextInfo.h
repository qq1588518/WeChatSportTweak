//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WAAppStateChangedContextInfoHangupInfo, WAAppStateChangedContextInfoMusicInfo;

@interface WAAppStateChangedContextInfo : MMObject
{
    WAAppStateChangedContextInfoMusicInfo *_musicInfo;
    WAAppStateChangedContextInfoHangupInfo *_hangupInfo;
}

@property(retain, nonatomic) WAAppStateChangedContextInfoHangupInfo *hangupInfo; // @synthesize hangupInfo=_hangupInfo;
@property(retain, nonatomic) WAAppStateChangedContextInfoMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

