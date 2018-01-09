//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FaceDetector.h"

@interface FastDetector : FaceDetector
{
    struct FaceDetectionParam param;
}

+ (int)globalReleaseDetector;
+ (int)globalInitDetector;
- (id).cxx_construct;
- (id)faceRectsWithImage:(id)arg1;
- (id)faceRectsWithRGB:(struct Mat)arg1;
- (void)getFeaturePoints:(int [83][2])arg1 atIndex:(long long)arg2;
- (void)detectFaceFeature:(id)arg1 withLeftEye:(struct CGPoint)arg2 rightEye:(struct CGPoint)arg3;
- (void)detectFaceFeature:(id)arg1 withFaceRect:(struct CGRect)arg2;
- (void)detectFaceFeature:(id)arg1;
- (id)init;

@end

