//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADHomeButtonHandler : NSObject
{
    CDUnknownBlockType _homeButtonHandlerCallback;
}

+ (id)handlerWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType homeButtonHandlerCallback; // @synthesize homeButtonHandlerCallback=_homeButtonHandlerCallback;
- (void)stopConsumingHardwarePresses;
- (void)startConsumingHardwarePresses:(CDUnknownBlockType)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

