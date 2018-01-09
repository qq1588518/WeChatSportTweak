//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"
#import "WAMainListNearByLocationLogicDelegate.h"

@class NSString, WAMainListNearByLocationLogic, WANearByInfo;

@interface WAMainListNearByLogic : MMObject <PBMessageObserverDelegate, WAMainListNearByLocationLogicDelegate>
{
    _Bool _isFirstTimeFetch;
    _Bool _isNearByDataLoaded;
    _Bool _allowNearBy;
    WANearByInfo *_nearByInfo;
    id <WAMainListNearByLogicDelegate> _delegate;
    unsigned long long _status;
    WAMainListNearByLocationLogic *_locationLogic;
}

@property(retain, nonatomic) WAMainListNearByLocationLogic *locationLogic; // @synthesize locationLogic=_locationLogic;
@property(nonatomic) _Bool allowNearBy; // @synthesize allowNearBy=_allowNearBy;
@property(nonatomic) _Bool isNearByDataLoaded; // @synthesize isNearByDataLoaded=_isNearByDataLoaded;
@property(nonatomic) _Bool isFirstTimeFetch; // @synthesize isFirstTimeFetch=_isFirstTimeFetch;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <WAMainListNearByLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WANearByInfo *nearByInfo; // @synthesize nearByInfo=_nearByInfo;
- (void).cxx_destruct;
- (id)parseNearByInfoFromResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportWeAppLocation:(struct CLLocationCoordinate2D)arg1;
- (void)onGetLocationFailedWithReason:(unsigned int)arg1;
- (void)onGetLocationSuccess:(id)arg1;
- (id)preViewItems;
- (id)nearByPageUrl;
- (unsigned long long)nearByAppNumber;
- (void)updateNearWeApp;
- (_Bool)isNearByDataValid;
- (_Bool)isNearByThresholdValid;
- (_Bool)hasNearByStore;
- (_Bool)isNearByUrlExpired;
- (_Bool)shouldTryToGetNear;
- (_Bool)shouldShowNear;
- (_Bool)getAllowNearByStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

