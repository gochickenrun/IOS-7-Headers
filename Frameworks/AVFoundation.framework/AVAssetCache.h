/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetCacheInternal, NSURL;

@interface AVAssetCache : NSObject
{
    AVAssetCacheInternal *_priv;
}

+ (id)assetCacheWithURL:(id)arg1;
- (id)allKeys;
- (long long)sizeOfEntryForKey:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) long long currentSize;
@property(nonatomic) long long maxEntrySize;
@property(nonatomic) long long maxSize;
- (void)finalize;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

