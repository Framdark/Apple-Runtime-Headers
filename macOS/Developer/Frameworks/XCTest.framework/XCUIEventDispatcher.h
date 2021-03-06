//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCUIEventDispatching-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol XCUIAccessibilityInterface, XCUIEventGeneratorRequest;

@interface XCUIEventDispatcher : NSObject <XCUIEventDispatching>
{
    id _axEventNotificationToken;
    NSMutableDictionary *_confirmationHandlers;
    struct __CGEventSource *_eventSource;
    id <XCUIEventGeneratorRequest> _currentRequest;
    id <XCUIAccessibilityInterface> _accessibilityInterface;
    CDUnknownFunctionPointerType _cgEventPostFunc;
    double _implicitConfirmationDelay;
}

- (void).cxx_destruct;
@property double implicitConfirmationDelay; // @synthesize implicitConfirmationDelay=_implicitConfirmationDelay;
@property(readonly) CDUnknownFunctionPointerType cgEventPostFunc; // @synthesize cgEventPostFunc=_cgEventPostFunc;
@property(readonly) id <XCUIAccessibilityInterface> accessibilityInterface; // @synthesize accessibilityInterface=_accessibilityInterface;
@property(retain) id <XCUIEventGeneratorRequest> currentRequest; // @synthesize currentRequest=_currentRequest;
@property(readonly) struct __CGEventSource *eventSource; // @synthesize eventSource=_eventSource;
- (void)postMacOSEvent:(id)arg1 forRequest:(id)arg2;
- (void)_notifyWhenConfirmationIsReceivedForEvent:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_handleEventConfirmation:(id)arg1;
@property(readonly) unsigned long long currentKeyboardModifierFlags;
- (int)eventSourceStateID;
- (id)initWithAccessibilityInterface:(id)arg1;
- (id)initWithAccessibilityInterface:(id)arg1 cgEventPostFunc:(CDUnknownFunctionPointerType)arg2 implicitConfirmationDelay:(double)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

