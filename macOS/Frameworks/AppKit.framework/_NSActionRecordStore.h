//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSActionRecordStore : NSObject
{
    NSMutableArray *_actionRecords;
}

+ (id)sharedActionRecordStoreIfExists;
+ (id)sharedActionRecordStore;
- (void)replaceObjectInActionRecordsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromActionRecordsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inActionRecordsAtIndex:(unsigned long long)arg2;
- (void)addRecord:(id)arg1;
- (void)addRecordWithAction:(SEL)arg1 target:(id)arg2 sender:(id)arg3;
@property(readonly, copy) NSArray *actionRecords;
- (void)dealloc;

@end

