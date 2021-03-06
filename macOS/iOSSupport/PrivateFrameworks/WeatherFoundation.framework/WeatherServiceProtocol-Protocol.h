//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WeatherFoundation/WeatherServiceInternalProtocol-Protocol.h>

@class MKLocalSearchCompletion, NSDateComponents, NSDictionary, NSLocale, NSString, WFLocation, WFTaskIdentifier;

@protocol WeatherServiceProtocol <WeatherServiceInternalProtocol>
- (void)invalidateCache:(WFTaskIdentifier *)arg1;
- (void)cancelTaskWithIdentifier:(WFTaskIdentifier *)arg1;
- (void)reachabilityConfigurationForIdentifier:(WFTaskIdentifier *)arg1;
- (void)replaceTemperatureUnitWith:(int)arg1 identifier:(WFTaskIdentifier *)arg2;
- (void)temperatureUnitWithIdentifier:(WFTaskIdentifier *)arg1;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(WFTaskIdentifier *)arg1;
- (void)locationForSearchCompletion:(MKLocalSearchCompletion *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)locationForString:(NSString *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)airQualityForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 options:(NSDictionary *)arg3 taskIdentifier:(WFTaskIdentifier *)arg4;
- (void)forecast:(unsigned long long)arg1 forLocation:(WFLocation *)arg2 locale:(NSLocale *)arg3 taskIdentifier:(WFTaskIdentifier *)arg4;
- (void)dailyForecastForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 taskIdentifier:(WFTaskIdentifier *)arg3;
- (void)hourlyForecastForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 taskIdentifier:(WFTaskIdentifier *)arg3;
- (void)forecastForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 atDate:(NSDateComponents *)arg3 options:(NSDictionary *)arg4 taskIdentifier:(WFTaskIdentifier *)arg5;
@end

