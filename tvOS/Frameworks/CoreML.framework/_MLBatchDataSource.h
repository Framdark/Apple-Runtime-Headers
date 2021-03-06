//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/ETDataProvider-Protocol.h>

@class MLNeuralNetworkEngine;
@protocol MLBatchProvider;

@interface _MLBatchDataSource : NSObject <ETDataProvider>
{
    _Bool _useForPrediction;
    id <MLBatchProvider> _batchProvider;
    MLNeuralNetworkEngine *_nnEngine;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool useForPrediction; // @synthesize useForPrediction=_useForPrediction;
@property(readonly, nonatomic) MLNeuralNetworkEngine *nnEngine; // @synthesize nnEngine=_nnEngine;
@property(readonly, nonatomic) id <MLBatchProvider> batchProvider; // @synthesize batchProvider=_batchProvider;
- (unsigned long long)numberOfDataPoints;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithMLBatchProvider:(id)arg1 forPrediction:(_Bool)arg2 neuralNetworkEngine:(id)arg3 error:(id *)arg4;

@end

