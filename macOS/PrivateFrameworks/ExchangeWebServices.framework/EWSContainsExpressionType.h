//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ExchangeWebServices/EWSSearchExpressionType.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSBasePathToElementType, EWSConstantValueType, NSString;

@interface EWSContainsExpressionType : EWSSearchExpressionType <XSDefinitionProvider>
{
    EWSConstantValueType *_Constant;
    long long _ContainmentComparison;
    long long _ContainmentMode;
    EWSBasePathToElementType *_Path;
}

+ (id)definition;
- (void).cxx_destruct;
@property(retain, nonatomic) EWSBasePathToElementType *Path; // @synthesize Path=_Path;
@property(nonatomic) long long ContainmentMode; // @synthesize ContainmentMode=_ContainmentMode;
@property(nonatomic) long long ContainmentComparison; // @synthesize ContainmentComparison=_ContainmentComparison;
@property(retain, nonatomic) EWSConstantValueType *Constant; // @synthesize Constant=_Constant;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

