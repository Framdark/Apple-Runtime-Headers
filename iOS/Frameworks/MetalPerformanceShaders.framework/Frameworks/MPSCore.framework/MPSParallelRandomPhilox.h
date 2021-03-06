//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSParallelRandom.h>

@protocol MTLBuffer;

@interface MPSParallelRandomPhilox : MPSParallelRandom
{
    id <MTLBuffer> _counters;
    float _bernoulliParameter;
    float _uniformMin;
    float _uniformMax;
    unsigned long long _seed;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(unsigned long long)arg3 numEntries:(unsigned long long)arg4;
- (void)encodeToCommandBuffer:(id)arg1 computeEncoder:(id)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 numEntries:(unsigned long long)arg5;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 destinationDataType:(unsigned int)arg2 seed:(unsigned long long)arg3;
- (id)initWithDevice:(id)arg1 destinationDataType:(unsigned int)arg2 seed:(unsigned long long)arg3 distributionDescriptor:(id)arg4;

@end

