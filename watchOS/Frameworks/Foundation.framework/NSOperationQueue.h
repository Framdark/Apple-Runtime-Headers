//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSProgressReporting-Protocol.h>

@class NSProgress, NSString;
@protocol OS_dispatch_queue;

@interface NSOperationQueue : NSObject <NSProgressReporting>
{
    // Error parsing type: {?="__queueLock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"__firstOperation"@"NSOperation""__lastOperation"@"NSOperation""__firstPriOperation"[6@"NSOperation"]"__lastPriOperation"[6@"NSOperation"]"_barriers"@"NSMutableArray""_progress"@"_NSOperationQueueProgress""__operationCount"AI"__activeThreads"@"NSPointerArray""__maxNumOps"i"__actualMaxNumOps"i"__numExecOps"i"__dispatch_queue"@"NSObject<OS_dispatch_queue>""__backingQueue"@"NSObject<OS_dispatch_queue>""__name"@"NSString""__nameBuffer"[300c]"__suspended"AB"__overcommit"AB"__propertyQoS"AC"__operationsObserverCount"AC"__operationCountObserverCount"AC"__progressReporting"AC"__mainQ"C}, name: _iqp
}

+ (id)mainQueue;
+ (id)currentQueue;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void *)arg4;
@property(readonly, copy) NSString *description;
- (id)__graphDescription;
- (void)waitUntilAllOperationsAreFinished;
- (void)cancelAllOperations;
@property(copy) NSString *name;
@property NSObject<OS_dispatch_queue> *underlyingQueue;
@property int qualityOfService;
- (void)setOvercommitsOperations:(_Bool)arg1;
- (_Bool)overcommitsOperations;
@property(getter=isSuspended) _Bool suspended;
@property int maxConcurrentOperationCount;
@property(readonly) NSProgress *progress;
- (unsigned int)operationCount;
- (id)operations;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)addOperation:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_fc_addUncancellableOperationForReactorID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_fc_addUncancellableOperationWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

