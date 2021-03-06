/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"
#import "PLDiagnosticsProvider.h"

@class NSArray, NSDate, NSOrderedSet, NSString, PLManagedAsset;

@protocol PLAssetContainer <NSObject, PLDiagnosticsProvider>
@property(readonly, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) BOOL canShowComments;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
@property(readonly, nonatomic) unsigned int assetsCount;
@property(readonly, nonatomic) unsigned int approximateCount;
@property(readonly, nonatomic) NSOrderedSet *assets;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *uuid;
- (BOOL)canPerformEditOperation:(int)arg1;

@optional
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@end

