//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PAImageCacheEntrySharedValid : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _valid;
}

- (void).cxx_destruct;
@property BOOL valid; // @synthesize valid=_valid;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)init;

@end

