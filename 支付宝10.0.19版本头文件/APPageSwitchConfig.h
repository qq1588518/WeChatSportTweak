//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface APPageSwitchConfig : NSObject
{
    NSArray *_switchConfig;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *switchConfig; // @synthesize switchConfig=_switchConfig;
- (void).cxx_destruct;
- (void)loadConfigData;
- (void)recvConfigServiceUpdateNotification:(id)arg1;
- (id)switchPageConfig:(id)arg1;
- (_Bool)canSwitchPage;
- (id)init;
- (void)dealloc;

@end

