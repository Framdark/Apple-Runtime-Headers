//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPSNDArrayDescriptor : NSObject
{
    // Error parsing type: , name: _dimensionLengths
    // Error parsing type: , name: _sliceOffsets
    // Error parsing type: , name: _sliceLengths
    // Error parsing type: , name: _dimensionOrder
    unsigned long long _numberOfDimensions;
    unsigned int _dataType;
    MPSNDArrayDescriptor *_child;
    MPSNDArrayDescriptor *_parent;
    int _transitionOp;
}

+ (id)descriptorWithDataType:(unsigned int)arg1 dimensionSizes:(unsigned long long)arg2;
+ (id)descriptorWithDataType:(unsigned int)arg1 shape:(id)arg2;
+ (id)descriptorWithDataType:(unsigned int)arg1 dimensionCount:(unsigned long long)arg2 dimensionSizes:(unsigned long long *)arg3;
@property(nonatomic) unsigned long long numberOfDimensions; // @synthesize numberOfDimensions=_numberOfDimensions;
@property(nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
- (void)dealloc;
- (void)reshapeWithDimensionCount:(unsigned long long)arg1 dimensionSizes:(unsigned long long *)arg2;
- (void)reshapeWithShape:(id)arg1;
- (id)initWithDataType:(unsigned int)arg1 dimensions:(unsigned long long)arg2 sizes: /* Error: Ran out of types for this method. */;
-     // Error parsing type: 16@0:8, name: dimensionOrder
- (void)transposeDimension:(unsigned long long)arg1 withDimension:(unsigned long long)arg2;
- (void)sliceDimension:(unsigned long long)arg1 withSubrange:(struct MPSDimensionSlice)arg2;
- (struct MPSDimensionSlice)sliceRangeForDimension:(unsigned long long)arg1;
- (void)setLengthOfDimension:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)lengthOfDimension:(unsigned long long)arg1;

@end

