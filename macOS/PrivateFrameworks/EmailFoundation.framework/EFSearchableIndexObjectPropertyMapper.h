//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFObjectPropertyMapper-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface EFSearchableIndexObjectPropertyMapper : NSObject <EFObjectPropertyMapper>
{
    NSDictionary *_children;
    NSArray *_attributes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSDictionary *children; // @synthesize children=_children;
- (id)childForKey:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithChildren:(id)arg1 attributes:(id)arg2;
- (id)initWithChildren:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

