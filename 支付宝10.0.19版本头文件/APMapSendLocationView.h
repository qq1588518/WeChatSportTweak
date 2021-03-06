//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MAMapViewDelegate.h"

@class AMapReGeocode, APSocailCurrentLocationButton, APSocialLocationView, CLLocation, MAMapView, NSMutableArray, NSString, UIImage;

@interface APMapSendLocationView : UIView <MAMapViewDelegate>
{
    _Bool _isKeywordSearch;
    _Bool _needCallback;
    _Bool _isInSearchLocationState;
    _Bool _isCenterCurrentUser;
    UIImage *_curUserLocationImage;
    CDUnknownBlockType _locationChangedBlock;
    MAMapView *_mapView;
    APSocailCurrentLocationButton *_curLocBtn;
    APSocialLocationView *_locationView;
    NSString *_searchCenterAddr;
    CLLocation *_curUserLocation;
    CDUnknownBlockType _searchCompletedBlock;
    CDUnknownBlockType _reGeocodeSearchCompletedBlock;
    CDUnknownBlockType _reGeocodeCompletedBlock;
    AMapReGeocode *_curReGeocode;
    NSMutableArray *_searchRet;
    long long _pageNo;
    long long _pageOffset;
    double _startTime;
    double _reGeoCodeStartTime;
    double _limitDistance;
    CDUnknownBlockType _exceedDistanceBlock;
    struct CLLocationCoordinate2D _customInitCoordinate;
    struct CLLocationCoordinate2D _searchCoordinate;
}

@property(copy, nonatomic) CDUnknownBlockType exceedDistanceBlock; // @synthesize exceedDistanceBlock=_exceedDistanceBlock;
@property(nonatomic) double limitDistance; // @synthesize limitDistance=_limitDistance;
@property(nonatomic) double reGeoCodeStartTime; // @synthesize reGeoCodeStartTime=_reGeoCodeStartTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isCenterCurrentUser; // @synthesize isCenterCurrentUser=_isCenterCurrentUser;
@property(nonatomic) _Bool isInSearchLocationState; // @synthesize isInSearchLocationState=_isInSearchLocationState;
@property(nonatomic) _Bool needCallback; // @synthesize needCallback=_needCallback;
@property(nonatomic) _Bool isKeywordSearch; // @synthesize isKeywordSearch=_isKeywordSearch;
@property(nonatomic) long long pageOffset; // @synthesize pageOffset=_pageOffset;
@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) NSMutableArray *searchRet; // @synthesize searchRet=_searchRet;
@property(retain, nonatomic) AMapReGeocode *curReGeocode; // @synthesize curReGeocode=_curReGeocode;
@property(copy, nonatomic) CDUnknownBlockType reGeocodeCompletedBlock; // @synthesize reGeocodeCompletedBlock=_reGeocodeCompletedBlock;
@property(copy, nonatomic) CDUnknownBlockType reGeocodeSearchCompletedBlock; // @synthesize reGeocodeSearchCompletedBlock=_reGeocodeSearchCompletedBlock;
@property(copy, nonatomic) CDUnknownBlockType searchCompletedBlock; // @synthesize searchCompletedBlock=_searchCompletedBlock;
@property(retain, nonatomic) CLLocation *curUserLocation; // @synthesize curUserLocation=_curUserLocation;
@property(nonatomic) struct CLLocationCoordinate2D searchCoordinate; // @synthesize searchCoordinate=_searchCoordinate;
@property(retain, nonatomic) NSString *searchCenterAddr; // @synthesize searchCenterAddr=_searchCenterAddr;
@property(retain, nonatomic) APSocialLocationView *locationView; // @synthesize locationView=_locationView;
@property(retain, nonatomic) APSocailCurrentLocationButton *curLocBtn; // @synthesize curLocBtn=_curLocBtn;
@property(retain, nonatomic) MAMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) struct CLLocationCoordinate2D customInitCoordinate; // @synthesize customInitCoordinate=_customInitCoordinate;
@property(copy, nonatomic) CDUnknownBlockType locationChangedBlock; // @synthesize locationChangedBlock=_locationChangedBlock;
@property(retain, nonatomic) UIImage *curUserLocationImage; // @synthesize curUserLocationImage=_curUserLocationImage;
- (void).cxx_destruct;
- (void)setLimitDistance:(double)arg1 exceedCallback:(CDUnknownBlockType)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)removeAnnotationsExceptUserLocation;
- (void)locateAnimation;
- (void)updateLocationWithAccuracy:(id)arg1;
- (void)locateUserLocation:(id)arg1;
- (void)clearSearch;
- (void)clearMapView;
- (void)initSearch;
- (void)initMapView;
- (id)getUserLocationSnapshotInSize:(struct CGSize)arg1;
- (id)getUserLocationSnapshot;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 needCallback:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

