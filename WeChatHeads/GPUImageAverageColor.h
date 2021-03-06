//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageAverageColor : GPUImageFilter
{
    int texelWidthUniform;
    int texelHeightUniform;
    unsigned long long numberOfStages;
    char *rawImagePixels;
    struct CGSize finalStageSize;
    CDUnknownBlockType _colorAverageProcessingFinishedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType colorAverageProcessingFinishedBlock; // @synthesize colorAverageProcessingFinishedBlock=_colorAverageProcessingFinishedBlock;
- (void).cxx_destruct;
- (void)extractAverageColorAtFrameTime:(CDStruct_1b6d18a9)arg1;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)dealloc;
- (id)init;

@end

