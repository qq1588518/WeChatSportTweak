//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "LocationRetrieveDelegate.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class CLLocation, LocationRetriever, MMTimer, NSString, RadarSearchSetting;

@interface RadarSearchMgr : MMService <MMService, LocationRetrieveDelegate, PBMessageObserverDelegate>
{
    _Bool _isStartReport;
    LocationRetriever *_locationRetrieve;
    MMTimer *_sendReportTimer;
    NSString *_ticket;
    RadarSearchSetting *_setting;
    CLLocation *_location;
}

@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) RadarSearchSetting *setting; // @synthesize setting=_setting;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleRadarSearchResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVerifyUserResp:(id)arg1 Event:(unsigned int)arg2;
- (void)onVerifyOkSuccessed:(id)arg1;
- (void)onVerifyOkFail:(id)arg1;
- (void)onAddContactSuccessed:(id)arg1;
- (void)onAddContactFail:(id)arg1;
- (void)onRetrieveHeadingError:(int)arg1;
- (void)onRetrieveHeadingOK:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (id)getLocation;
- (void)sendRadarReportRequest:(_Bool)arg1;
- (void)verifyUsr:(id)arg1 withTicket:(id)arg2;
- (void)addFriend:(id)arg1;
- (void)stopRadarReport;
- (void)removeRadarReportRequest;
- (void)startRadarReport;
- (void)stopResendRadarReportLogic;
- (void)startResendRadarReportLogic;
- (void)reSendRadarReportRequest;
- (void)stopRetrieveLocation;
- (void)startRetrieveLocation;
- (void)saveSetting;
- (void)loadRadarSearchSetting;
- (id)getSettingPath;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

