//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FRCounter, FRTimer;

@interface Forerunner : NSObject
{
    FRCounter *_counter;
    FRTimer *_timer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FRTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) FRCounter *counter; // @synthesize counter=_counter;
- (void).cxx_destruct;
- (void)onWillDeactive:(id)arg1;
- (void)onPageDidChange:(id)arg1;
- (void)setup;
- (void)timerEnd:(id)arg1 attributes:(id)arg2;
- (void)timerStart:(id)arg1 attributes:(id)arg2;
- (void)count:(id)arg1 attributes:(id)arg2;
- (id)init;

@end

