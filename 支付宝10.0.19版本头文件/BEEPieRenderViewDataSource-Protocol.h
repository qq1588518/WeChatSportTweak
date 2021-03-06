//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BEEPieRenderView, UIColor, UIImage;

@protocol BEEPieRenderViewDataSource <NSObject>
- (double)pieChart:(BEEPieRenderView *)arg1 valueForSliceAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfSlicesInPieChart:(BEEPieRenderView *)arg1;

@optional
- (UIImage *)pieChart:(BEEPieRenderView *)arg1 iconForSliceAtIndex:(unsigned long long)arg2;
- (UIColor *)pieChart:(BEEPieRenderView *)arg1 colorForSliceAtIndex:(unsigned long long)arg2;
@end

