//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GraphState;

__attribute__((visibility("hidden")))
@interface GraphManagerAdaptTransaction : NSObject
{
    struct unique_ptr<adm::MutateGraph, std::__1::default_delete<adm::MutateGraph>> mMutateGraph;
    unsigned long long _transactionNumber;
    GraphState *_originalState;
    GraphState *_adaptedState;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) GraphState *adaptedState; // @synthesize adaptedState=_adaptedState;
@property(retain, nonatomic) GraphState *originalState; // @synthesize originalState=_originalState;
@property(readonly, nonatomic) unsigned long long transactionNumber; // @synthesize transactionNumber=_transactionNumber;
- (const struct MutateGraph *)mutateGraph;
- (void)logTransaction;
- (id)initWithOriginalState:(id)arg1 adaptedState:(id)arg2 graphBuilder:(const struct GraphBuilder *)arg3;

@end

