//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXConditionValidating-Protocol.h>
#import <Silex/SXConditionValidatorManager-Protocol.h>

@class NSMutableArray, NSString;

@interface SXConditionValidatorManager : NSObject <SXConditionValidatorManager, SXConditionValidating>
{
    NSMutableArray *_validators;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *validators; // @synthesize validators=_validators;
- (_Bool)validateCondition:(id)arg1 context:(id)arg2;
- (void)addConditionValidator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

