//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/NSSecureCoding-Protocol.h>
#import <XCTAutomationSupport/XCTCapabilitiesProviding-Protocol.h>
#import <XCTAutomationSupport/XCTRuntimeIssueContextReportingDelegate-Protocol.h>

@class NSOrderedSet, NSSet, NSString, XCElementSnapshot;

@interface XCTElementQueryResults : NSObject <NSSecureCoding, XCTCapabilitiesProviding, XCTRuntimeIssueContextReportingDelegate>
{
    XCElementSnapshot *_rootElement;
    NSOrderedSet *_matchingElements;
    NSSet *_remoteElements;
    NSOrderedSet *_runtimeIssues;
    NSString *_noMatchesMessage;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)shouldRuntimeIssueContext:(id)arg1 reportIssue:(id)arg2;
+ (void)provideCapabilitiesToBuilder:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *noMatchesMessage; // @synthesize noMatchesMessage=_noMatchesMessage;
@property(readonly, copy) NSOrderedSet *runtimeIssues; // @synthesize runtimeIssues=_runtimeIssues;
@property(readonly, copy) NSSet *remoteElements; // @synthesize remoteElements=_remoteElements;
@property(readonly, copy) NSOrderedSet *matchingElements; // @synthesize matchingElements=_matchingElements;
@property(readonly) XCElementSnapshot *rootElement; // @synthesize rootElement=_rootElement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resultsByReplacingRuntimeIssues:(id)arg1;
- (id)initWithRootElement:(id)arg1 matchingElements:(id)arg2 remoteElements:(id)arg3 runtimeIssues:(id)arg4 noMatchesMessage:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

