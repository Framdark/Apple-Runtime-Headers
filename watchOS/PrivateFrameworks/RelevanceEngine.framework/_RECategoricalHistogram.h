//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REHistogram.h>

@class RETaggedFeatureValueCountedSet;

@interface _RECategoricalHistogram : REHistogram
{
    RETaggedFeatureValueCountedSet *_values;
}

- (void).cxx_destruct;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned int)countOfValuesBetweenMinValue:(unsigned long)arg1 maxValue:(unsigned long)arg2;
- (unsigned int)countForValue:(unsigned long)arg1;
- (void)removeValue:(unsigned long)arg1;
- (void)addValue:(unsigned long)arg1;
- (unsigned long)standardDeviation;
- (unsigned long)mean;
- (unsigned int)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithFeature:(id)arg1 binningSize:(unsigned long)arg2;

@end

