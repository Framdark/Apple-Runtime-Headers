//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, XCUITransformParameters;

@interface XCUIPointTransformationRequest : NSObject
{
    XCUITransformParameters *_transformParameters;
    struct CGPoint _point;
}

+ (id)pointTransformationRequestWithPoint:(struct CGPoint)arg1 parameters:(id)arg2;
- (void).cxx_destruct;
@property(readonly) XCUITransformParameters *transformParameters; // @synthesize transformParameters=_transformParameters;
@property(readonly) struct CGPoint point; // @synthesize point=_point;
@property(readonly) NSArray *axParameterRepresentation;

@end

