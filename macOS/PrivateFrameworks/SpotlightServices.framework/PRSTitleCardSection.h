//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightServices/PRSCardSection.h>

@class NSString;

@interface PRSTitleCardSection : PRSCardSection
{
    BOOL _useSmallerFont;
    NSString *_subtitle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL useSmallerFont; // @synthesize useSmallerFont=_useSmallerFont;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (long long)type;
- (id)initWithSFSearchResult:(id)arg1 cardSection:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 useSmallerFont:(BOOL)arg3;

@end

