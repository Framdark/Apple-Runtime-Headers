//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyPreferences/TPSCarrierBundleControllerDelegate-Protocol.h>
#import <TelephonyPreferences/TPSRequestControllerDelegate-Protocol.h>

@class CTCallForwardingValue, CTXPCServiceSubscriptionContext, NSArray, NSDictionary, NSString, TPSCallForwardingRequestController, TPSCarrierBundleController;
@protocol TPSCallForwardingControllerDelegate;

@interface TPSCallForwardingController : NSObject <TPSCarrierBundleControllerDelegate, TPSRequestControllerDelegate>
{
    _Bool _unloading;
    NSArray *_conditionalServiceRequests;
    NSString *_subscriptionISOCountryCode;
    NSArray *_unconditionalServiceRequests;
    id <TPSCallForwardingControllerDelegate> _delegate;
    TPSCarrierBundleController *_carrierBundleController;
    TPSCallForwardingRequestController *_requestController;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    int _currentServiceType;
    int _pendingServiceType;
    CTCallForwardingValue *_conditionalServiceBusyValue;
    CTCallForwardingValue *_conditionalServiceUnansweredValue;
    CTCallForwardingValue *_conditionalServiceUnreachableValue;
    CTCallForwardingValue *_unconditionalServiceValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CTCallForwardingValue *unconditionalServiceValue; // @synthesize unconditionalServiceValue=_unconditionalServiceValue;
@property(retain, nonatomic) CTCallForwardingValue *conditionalServiceUnreachableValue; // @synthesize conditionalServiceUnreachableValue=_conditionalServiceUnreachableValue;
@property(retain, nonatomic) CTCallForwardingValue *conditionalServiceUnansweredValue; // @synthesize conditionalServiceUnansweredValue=_conditionalServiceUnansweredValue;
@property(retain, nonatomic) CTCallForwardingValue *conditionalServiceBusyValue; // @synthesize conditionalServiceBusyValue=_conditionalServiceBusyValue;
@property(nonatomic) int pendingServiceType; // @synthesize pendingServiceType=_pendingServiceType;
@property(nonatomic) int currentServiceType; // @synthesize currentServiceType=_currentServiceType;
@property(readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
@property(readonly, nonatomic) TPSCallForwardingRequestController *requestController; // @synthesize requestController=_requestController;
@property(readonly, nonatomic) TPSCarrierBundleController *carrierBundleController; // @synthesize carrierBundleController=_carrierBundleController;
@property(nonatomic) __weak id <TPSCallForwardingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isUnloading) _Bool unloading; // @synthesize unloading=_unloading;
- (void)requestController:(id)arg1 didReceiveResponse:(id)arg2;
- (void)sendEnableSetRequestForValue:(id)arg1;
- (void)sendSetRequestForValue:(id)arg1;
- (void)sendSetUnconditionalServiceDisabledRequest;
- (void)sendSetAllServicesDisabledRequest;
- (void)sendServicesRequest;
- (void)sendUnconditionalServicesRequest;
- (void)sendConditionalServicesRequest;
@property(readonly, copy, nonatomic) NSString *localizedConditionalUnreachableTitle;
@property(readonly, copy, nonatomic) NSString *localizedConditionalUnansweredTitle;
@property(readonly, copy, nonatomic) NSString *localizedConditionalBusyTitle;
- (id)localizedCarrierBundleStringForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *carrierBundleLocalizedStringKeys;
@property(copy, nonatomic) NSString *unconditionalServicePhoneNumber;
@property(readonly, nonatomic) int unconditionalServiceState;
@property(readonly, copy, nonatomic) NSArray *unconditionalServiceRequests; // @synthesize unconditionalServiceRequests=_unconditionalServiceRequests;
@property(readonly, nonatomic, getter=isUnconditionalServiceLoading) _Bool unconditionalServiceLoading;
- (void)enableUnconditionalServiceIfNeeded;
@property(copy, nonatomic) NSString *conditionalServiceUnreachablePhoneNumber;
@property(copy, nonatomic) NSString *conditionalServiceUnansweredPhoneNumber;
@property(copy, nonatomic) NSString *conditionalServiceBusyPhoneNumber;
@property(readonly, nonatomic) int conditionalServiceState;
@property(readonly, copy, nonatomic) NSArray *conditionalServiceRequests; // @synthesize conditionalServiceRequests=_conditionalServiceRequests;
@property(readonly, nonatomic, getter=isConditionalServiceLoading) _Bool conditionalServiceLoading;
@property(readonly, nonatomic, getter=isConditionalServiceAvailable) _Bool conditionalServiceAvailable;
- (void)enableConditionalServiceIfNeeded;
- (void)updateServiceType:(int)arg1;
- (void)resetPendingServiceType;
@property(readonly, nonatomic) int serviceType;
@property(readonly, copy, nonatomic) NSString *subscriptionISOCountryCode; // @synthesize subscriptionISOCountryCode=_subscriptionISOCountryCode;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

