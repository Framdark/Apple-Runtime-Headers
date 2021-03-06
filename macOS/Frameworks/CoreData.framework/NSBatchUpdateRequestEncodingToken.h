//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/NSSecureCoding-Protocol.h>

@class NSDictionary, NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface NSBatchUpdateRequestEncodingToken : NSObject <NSSecureCoding>
{
    NSString *_entityName;
    NSPredicate *_predicate;
    NSDictionary *_columnsToUpdate;
    long long _resultType;
    BOOL _includeSubEntities;
    BOOL _secure;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL secure; // @synthesize secure=_secure;
@property(readonly, nonatomic) BOOL includeSubEntities; // @synthesize includeSubEntities=_includeSubEntities;
@property(readonly, nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(readonly, retain, nonatomic) NSDictionary *columnsToUpdate; // @synthesize columnsToUpdate=_columnsToUpdate;
@property(readonly, retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, retain, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initForRequest:(id)arg1;

@end

