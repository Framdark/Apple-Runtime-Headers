//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BSEventQueueEvent : NSObject
{
    NSString *_name;
    CDUnknownBlockType _handler;
}

+ (id)eventWithName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqualToEvent:(id)arg1;
- (void)_execute;
- (void)executeFromEventQueue;
- (void)execute;
- (id)description;

@end

