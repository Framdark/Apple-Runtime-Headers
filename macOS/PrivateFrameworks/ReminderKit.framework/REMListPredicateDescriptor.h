//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSArray, REMObjectID;

@interface REMListPredicateDescriptor : NSObject <NSSecureCoding>
{
    long long _type;
    REMObjectID *_accountID;
    REMObjectID *_parentListID;
    NSArray *_objectIDs;
}

+ (BOOL)supportsSecureCoding;
+ (id)predicateDescriptorForAllLists;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *objectIDs; // @synthesize objectIDs=_objectIDs;
@property(retain, nonatomic) REMObjectID *parentListID; // @synthesize parentListID=_parentListID;
@property(retain, nonatomic) REMObjectID *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;

@end

