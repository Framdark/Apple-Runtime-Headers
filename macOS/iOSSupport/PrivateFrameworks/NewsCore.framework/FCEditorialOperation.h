//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCSpotlightOperationResult, FCVideoArticlesOperationResult, NSArray, NSError;
@protocol FCCoreConfiguration;

@interface FCEditorialOperation : FCOperation
{
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    NSArray *_trendingHeadlines;
    FCVideoArticlesOperationResult *_topVideosResult;
    FCVideoArticlesOperationResult *_moreVideosResult;
    FCSpotlightOperationResult *_spotlightResult;
    NSError *_error;
    CDUnknownBlockType _catchUpCompletionHandler;
    NSArray *_editorialSectionGroups;
}

- (void).cxx_destruct;
@property(copy) NSArray *editorialSectionGroups; // @synthesize editorialSectionGroups=_editorialSectionGroups;
@property(copy) CDUnknownBlockType catchUpCompletionHandler; // @synthesize catchUpCompletionHandler=_catchUpCompletionHandler;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) FCSpotlightOperationResult *spotlightResult; // @synthesize spotlightResult=_spotlightResult;
@property(retain) FCVideoArticlesOperationResult *moreVideosResult; // @synthesize moreVideosResult=_moreVideosResult;
@property(retain) FCVideoArticlesOperationResult *topVideosResult; // @synthesize topVideosResult=_topVideosResult;
@property(copy) NSArray *trendingHeadlines; // @synthesize trendingHeadlines=_trendingHeadlines;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (void)enumerateEditorialSectionsByRecencyWithBlock:(CDUnknownBlockType)arg1;

@end

