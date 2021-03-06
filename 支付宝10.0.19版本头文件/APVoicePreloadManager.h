//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface APVoicePreloadManager : NSObject
{
    NSMutableDictionary *_loadingMap;
}

+ (id)sharedAPVoicePreloadManager;
@property(retain, nonatomic) NSMutableDictionary *loadingMap; // @synthesize loadingMap=_loadingMap;
- (void).cxx_destruct;
- (_Bool)isLoadingForVoiceURL:(id)arg1;
- (void)preloadWithVoiceUrlList:(id)arg1 business:(id)arg2;
- (void)preloadWithVoiceMessageList:(id)arg1 business:(id)arg2;

@end

