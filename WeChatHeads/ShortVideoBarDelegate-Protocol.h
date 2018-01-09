//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EditImageAttr, EditVideoAttr, NSData, NSString, UIImage;

@protocol ShortVideoBarDelegate <NSObject>
- (void)onCameraResign;
- (void)onShortVideoToolBtnClick:(int)arg1;

@optional
- (NSString *)chatUserNameForSightStatistics;
- (void)onStopRecord;
- (void)onStartRecord;
- (void)onDeactiveAnimStart:(double)arg1;
- (void)onPanelDrag:(double)arg1;
- (void)onDeactiveAnimEnd;
- (void)onSightPictureTaken:(UIImage *)arg1 imageData:(NSData *)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(EditImageAttr *)arg4;
- (void)onShortVideoTaken:(NSString *)arg1 thumbImg:(UIImage *)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4 editVideoAttr:(EditVideoAttr *)arg5;
@end

