//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSDate, NSString;

@interface CLSTimeInterval : CLSObject <CLSRelationable>
{
    NSDate *_startTime;
    double _length;
}

+ (_Bool)supportsSecureCoding;
+ (id)relations;
- (void).cxx_destruct;
@property(nonatomic) double length; // @synthesize length=_length;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

