//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMusicSync/NMLogAction.h>

@class NMSQuotaEvaluationState;

__attribute__((visibility("hidden")))
@interface NMSQuotaEvaluationLogAction : NMLogAction
{
    unsigned int _type;
    NMSQuotaEvaluationState *_state;
}

+ (id)logActionWithActionType:(unsigned int)arg1 state:(id)arg2;
- (void).cxx_destruct;
- (id)_stringForType:(unsigned int)arg1;
- (id)logMessage;
- (id)initWithActionType:(unsigned int)arg1 state:(id)arg2;

@end

