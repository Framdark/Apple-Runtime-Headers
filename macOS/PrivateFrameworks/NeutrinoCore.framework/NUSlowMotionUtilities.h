//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUSlowMotionUtilities : NSObject
{
}

+ (id)timeMapperForAssetDuration:(double)arg1 rate:(float)arg2 range:(CDStruct_e83c9415)arg3 error:(out id *)arg4;
+ (id)slowMotionAudioMixFromAsset:(id)arg1 rate:(float)arg2 range:(CDStruct_e83c9415)arg3 error:(out id *)arg4;
+ (id)slowMotionVideoFromAsset:(id)arg1 rate:(float)arg2 range:(CDStruct_e83c9415)arg3 error:(out id *)arg4;
+ (id)slomoFactory;
+ (id)photosFormatsSlomoFactory;

@end

