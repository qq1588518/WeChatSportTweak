//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSData, NSString;

@interface CmdMessage : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasCmdType;
    _Bool _hasCmdData;
    int _cmdType;
    NSData *_cmdData;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSData *cmdData; // @synthesize cmdData=_cmdData;
@property(nonatomic) int cmdType; // @synthesize cmdType=_cmdType;
@property(readonly) _Bool hasCmdData; // @synthesize hasCmdData=_hasCmdData;
@property(readonly) _Bool hasCmdType; // @synthesize hasCmdType=_hasCmdType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

