//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INArchivedObject, NSArray, NSNumber, NSString;

@protocol INRunWorkflowIntentResponseExport <NSObject, JSExport>
@property(copy) NSNumber *requestsIntentExecution;
@property(copy) NSArray *steps;
@property(copy) NSNumber *continueRunning;
@property(copy) NSNumber *waitingForResume;
@property(copy) NSString *utterance;
@property(copy) INArchivedObject *underlyingIntentResponse;
@property(copy) INArchivedObject *underlyingIntent;
@property(readonly) long long code;
@end

