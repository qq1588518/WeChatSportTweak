//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, O2OTemplate;

@interface O2OMistSectionItem : NSObject
{
    NSArray *_items;
    O2OTemplate *_tpl;
    NSDictionary *_allTemplates;
}

@property(copy, nonatomic) NSDictionary *allTemplates; // @synthesize allTemplates=_allTemplates;
@property(retain, nonatomic) O2OTemplate *tpl; // @synthesize tpl=_tpl;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;

@end

