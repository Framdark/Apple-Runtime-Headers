//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPAnalyticsEventMatcher, NSString;

@interface CPAnalyticsEventCounter : NSObject
{
    unsigned long long _count;
    NSString *_name;
    CPAnalyticsEventMatcher *_matcher;
}

+ (id)_validateAndParseEventName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CPAnalyticsEventMatcher *matcher; // @synthesize matcher=_matcher;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)getName;
- (void)countEvent:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

