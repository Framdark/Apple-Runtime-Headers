//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;
@protocol SSFrameBufferObserver;

__attribute__((visibility("hidden")))
@interface SSFrameBufferObserverEntry : NSObject
{
    id <SSFrameBufferObserver> _observer;
    NSThread *_thread;
}

- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)initWithObserver:(id)arg1 withThread:(id)arg2;

@end

