//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APWealthBaseScrollViewController.h"

#import "MKMapViewDelegate.h"

@class MKLocalSearch, MKMapView, NSArray, NSString;

@interface ALPAssetSearchMapViewController : APWealthBaseScrollViewController <MKMapViewDelegate>
{
    MKMapView *_mapView;
    NSString *_searchKey;
    NSString *_otherKey;
    NSArray *_places;
    MKLocalSearch *_localSearch;
    struct CLLocationCoordinate2D _userLocation;
    CDStruct_b7cb895d _boundingRegion;
}

@property(nonatomic) CDStruct_b7cb895d boundingRegion; // @synthesize boundingRegion=_boundingRegion;
@property(retain, nonatomic) MKLocalSearch *localSearch; // @synthesize localSearch=_localSearch;
@property(nonatomic) struct CLLocationCoordinate2D userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) NSString *otherKey; // @synthesize otherKey=_otherKey;
@property(retain, nonatomic) NSArray *places; // @synthesize places=_places;
@property(retain, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
- (void).cxx_destruct;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)startSearch;
- (void)viewWillDestroy;
- (void)viewDidLoad;
- (id)initWithSearchKey:(id)arg1 OtherKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

