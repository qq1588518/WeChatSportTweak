//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EditMsgReportTaskInfo.h"

@class NSString;

@interface EditImageMsgReportTaskInfo : EditMsgReportTaskInfo
{
    NSString *_imgFileID;
    NSString *_imgAesKey;
    NSString *_imgMd5;
    NSString *_originalImgLocalId;
    NSString *_originalImgFilePath;
    NSString *_originalImgFileID;
    NSString *_originalImgAesKey;
    NSString *_originalImgMd5;
}

@property(retain, nonatomic) NSString *originalImgMd5; // @synthesize originalImgMd5=_originalImgMd5;
@property(retain, nonatomic) NSString *originalImgAesKey; // @synthesize originalImgAesKey=_originalImgAesKey;
@property(retain, nonatomic) NSString *originalImgFileID; // @synthesize originalImgFileID=_originalImgFileID;
@property(retain, nonatomic) NSString *originalImgFilePath; // @synthesize originalImgFilePath=_originalImgFilePath;
@property(retain, nonatomic) NSString *originalImgLocalId; // @synthesize originalImgLocalId=_originalImgLocalId;
@property(retain, nonatomic) NSString *imgMd5; // @synthesize imgMd5=_imgMd5;
@property(retain, nonatomic) NSString *imgAesKey; // @synthesize imgAesKey=_imgAesKey;
@property(retain, nonatomic) NSString *imgFileID; // @synthesize imgFileID=_imgFileID;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

