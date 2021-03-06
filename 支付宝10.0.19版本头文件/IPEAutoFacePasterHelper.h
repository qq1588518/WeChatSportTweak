//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIImage;

@interface IPEAutoFacePasterHelper : NSObject
{
    UIImage *applyImage_;
    _Bool _isFaceType;
    _Bool _isMagicRequesting;
    id <INPhotoEditDataSource> _dataSource;
    unsigned long long _faceCount;
    NSArray *_pasterInfoArr;
    struct INSmartSticker *_smartStickerLib;
    unsigned long long _currentShowIndex;
}

@property(nonatomic) _Bool isMagicRequesting; // @synthesize isMagicRequesting=_isMagicRequesting;
@property(nonatomic) unsigned long long currentShowIndex; // @synthesize currentShowIndex=_currentShowIndex;
@property(nonatomic) struct INSmartSticker *smartStickerLib; // @synthesize smartStickerLib=_smartStickerLib;
@property(retain, nonatomic) NSArray *pasterInfoArr; // @synthesize pasterInfoArr=_pasterInfoArr;
@property(nonatomic) unsigned long long faceCount; // @synthesize faceCount=_faceCount;
@property(nonatomic) _Bool isFaceType; // @synthesize isFaceType=_isFaceType;
@property(nonatomic) __weak id <INPhotoEditDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)addViewFromPasteInfo:(struct StickPasteInfo *)arg1 pasterView:(id)arg2 isFixXY:(_Bool)arg3;
- (void)resetPasterViewStatus:(id)arg1 applyImage:(id)arg2 WithPasterInfo:(id)arg3 faceIndex:(int)arg4;
- (void)downloadPasterImageWithPasterArr:(id)arg1 resultArr:(CDUnknownBlockType)arg2;
- (void)downloadPasterImage:(CDUnknownBlockType)arg1;
- (void)autofacePasterInfoRequest:(id)arg1 geekeyeInfo:(id)arg2 image:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)checkImageFaceInfoWith:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

