//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLActivityScheduleObserver-Protocol.h>

@class CSLActivityBudget, CSLSchedulerActivityHistory, NSString;
@protocol CSLActivityDateSource, OS_dispatch_queue;

@interface CSLActivityBudgetManager : NSObject <CSLActivityScheduleObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CSLActivityDateSource> _dateSource;
    CSLActivityBudget *_budget;
    CSLSchedulerActivityHistory *_history;
}

- (void).cxx_destruct;
@property(readonly) CSLSchedulerActivityHistory *history; // @synthesize history=_history;
@property(readonly) CSLActivityBudget *budget; // @synthesize budget=_budget;
@property(retain) id <CSLActivityDateSource> dateSource; // @synthesize dateSource=_dateSource;
- (void)performQuery:(CDUnknownBlockType)arg1;
- (void)activityScheduler:(id)arg1 didStartActivity:(id)arg2;
- (void)activityScheduler:(id)arg1 willRequestStartActivity:(id)arg2;
- (id)initWithBudget:(id)arg1 history:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

