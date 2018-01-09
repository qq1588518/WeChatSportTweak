//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNNBuffer.h"

@interface CNNImage : CNNBuffer
{
    struct CNNDimension _dimension;
}

@property(nonatomic) struct CNNDimension dimension; // @synthesize dimension=_dimension;
- (id).cxx_construct;
- (id)description;
- (id)initWithDimension:(struct CNNDimension)arg1 elementSize:(int)arg2 mtlBuffer:(id)arg3;
- (id)initWithDimension:(struct CNNDimension)arg1 elementSize:(int)arg2 device:(id)arg3 option:(unsigned long long)arg4;
- (id)initWithDimension:(struct CNNDimension)arg1 elementSize:(int)arg2 device:(id)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 dimension:(struct CNNDimension)arg2 elementSize:(int)arg3 device:(id)arg4;
- (id)initWithBytes:(void *)arg1 dimension:(struct CNNDimension)arg2 elementSize:(int)arg3 device:(id)arg4 option:(unsigned long long)arg5;
- (id)initWithBytes:(void *)arg1 dimension:(struct CNNDimension)arg2 elementSize:(int)arg3 device:(id)arg4;

@end

