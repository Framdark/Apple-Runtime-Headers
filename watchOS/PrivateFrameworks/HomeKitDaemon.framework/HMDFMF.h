//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMDFMF : NSObject
{
    unsigned int _value;
}

+ (id)fmfStatusWithCoder:(id)arg1;
+ (id)fmfStatusWithDict:(id)arg1;
+ (id)fmfStatusWithMessage:(id)arg1;
+ (id)fmfStatusWithNumber:(id)arg1;
+ (id)fmfStatusWithValue:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int value; // @synthesize value=_value;
- (id)description;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;
- (void)addToCoder:(id)arg1;
- (id)initWithNumber:(id)arg1;

@end

