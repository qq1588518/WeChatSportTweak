//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, UIViewController;

@protocol SPICardContainer <NSObject>
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forEvent:(NSNumber *)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvent:(NSNumber *)arg3;
- (_Bool)isEventSupported:(NSNumber *)arg1;
- (NSArray *)getSupportedEvents;
- (id <SPIPluggableCard>)getCardWithTag:(long long)arg1;
- (void)reloadCard:(id <SPIPluggableCard>)arg1;
- (void)relayout;
- (NSDictionary *)getContext;
- (UIViewController *)getViewController;
@end

