//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreChart/CCVegaCurveFactoryInterface-Protocol.h>

@interface CCVegaCurveFactory : NSObject <CCVegaCurveFactoryInterface>
{
    struct CGPath *path;
}

+ (id)factoryWithCurve:(id)arg1;
@property(nonatomic) struct CGPath *path; // @synthesize path;
- (void)point:(struct CGPoint)arg1;
- (void)areaEnd;
- (void)areaStart;
- (void)lineEnd;
- (void)lineStart;

@end

