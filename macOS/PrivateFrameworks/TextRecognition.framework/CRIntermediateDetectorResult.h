//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CRIntermediateDetectorResult : NSObject
{
    NSMutableArray *_pyramidPreIntraScaleNMSTextFeatures;
    NSMutableArray *_pyramidPostIntraScaleNMSTextFeatures;
    NSMutableArray *_pyramidPostInterScaleNMSTextFeatures;
    NSMutableArray *_pyramidScaleSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pyramidScaleSize; // @synthesize pyramidScaleSize=_pyramidScaleSize;
@property(retain, nonatomic) NSMutableArray *pyramidPostInterScaleNMSTextFeatures; // @synthesize pyramidPostInterScaleNMSTextFeatures=_pyramidPostInterScaleNMSTextFeatures;
@property(retain, nonatomic) NSMutableArray *pyramidPostIntraScaleNMSTextFeatures; // @synthesize pyramidPostIntraScaleNMSTextFeatures=_pyramidPostIntraScaleNMSTextFeatures;
@property(retain, nonatomic) NSMutableArray *pyramidPreIntraScaleNMSTextFeatures; // @synthesize pyramidPreIntraScaleNMSTextFeatures=_pyramidPreIntraScaleNMSTextFeatures;
- (id)initWithNumberOfScales:(long long)arg1;

@end

