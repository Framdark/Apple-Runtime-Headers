//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSString;

@interface EWSPhysicalAddressDictionaryEntryType : NSObject <XSDefinitionProvider>
{
    NSString *_Street;
    NSString *_City;
    NSString *_State;
    NSString *_CountryOrRegion;
    NSString *_PostalCode;
    NSString *_Key;
}

+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *Key; // @synthesize Key=_Key;
@property(copy, nonatomic) NSString *PostalCode; // @synthesize PostalCode=_PostalCode;
@property(copy, nonatomic) NSString *CountryOrRegion; // @synthesize CountryOrRegion=_CountryOrRegion;
@property(copy, nonatomic) NSString *State; // @synthesize State=_State;
@property(copy, nonatomic) NSString *City; // @synthesize City=_City;
@property(copy, nonatomic) NSString *Street; // @synthesize Street=_Street;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

