//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUnfairLock;

@interface FCOnce : NSObject
{
    BOOL _finished;
    NFUnfairLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NFUnfairLock *lock; // @synthesize lock=_lock;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
- (BOOL)hasBeenTriggered;
- (BOOL)trigger;
- (void)executeOnce:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

