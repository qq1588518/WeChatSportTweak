//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "IWAJSContextBeaconProtocol.h"

@class NSString;

@interface WAJSEventHandler_startBeaconDiscovery : WAJSEventHandler_BaseEvent <IWAJSContextBeaconProtocol>
{
}

- (void)dealloc;
- (void)didStartRangeBeacons:(id)arg1 errCode:(int)arg2 appid:(id)arg3;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

