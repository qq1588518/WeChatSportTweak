//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FunctionSwitchUtil : NSObject
{
}

+ (void)setModPushExtStatusSwitch:(unsigned int)arg1 statusBit:(unsigned int)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (_Bool)addModPushSwitchOplog:(unsigned int)arg1 SwitchValue:(unsigned int)arg2 sync:(_Bool)arg3;
+ (void)setExtStatusSwitch:(unsigned int)arg1 statusBit:(unsigned int)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (void)setStatusSwitch:(unsigned int)arg1 statusBit:(unsigned int)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (void)setPluginSwitch:(unsigned int)arg1 statusBit:(unsigned int)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (_Bool)addSwitchOplog:(unsigned int)arg1 SwitchValue:(unsigned int)arg2 sync:(_Bool)arg3;
+ (unsigned int)convertType:(unsigned int)arg1;

@end

