//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MOLRUCache;

@interface MOMediaItemsCache : NSObject
{
    long long _memoryStatus;
    id _memoryPressureMonitor;
    MOLRUCache *_mediaItemsCache;
    unsigned long long _minCacheCount;
    unsigned long long _maxCacheCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxCacheCount; // @synthesize maxCacheCount=_maxCacheCount;
@property(nonatomic) unsigned long long minCacheCount; // @synthesize minCacheCount=_minCacheCount;
- (void)removeAllMediaItems;
- (void)removeMediaItemAtIndexPath:(id)arg1;
- (id)mediaItemAtIndexPath:(id)arg1;
- (void)setMediaItem:(id)arg1 atIndexPath:(id)arg2;
- (void)_memoryPressureHandler;
- (void)dealloc;
- (id)init;

@end

