//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol EVAuthSessionDelegate <NSObject>
- (void)stepCompletedWithData:(NSData *)arg1 messageType:(int)arg2;

@optional
- (void)onMonitorLog:(long long)arg1 message:(NSString *)arg2;
- (void)stepCompletedWithDiagnosticData:(NSData *)arg1 messageType:(int)arg2;
- (void)lightingNormal:(float)arg1;
- (void)lightingTooLow:(float)arg1;
- (void)eyeStatusChanged:(long long)arg1 centerDistance:(double)arg2;
@end

