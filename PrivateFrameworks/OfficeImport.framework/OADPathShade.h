/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OADShade.h>

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADPathShade : OADShade
{
    OADRelativeRect *mFillToRect;
    BOOL mIsFillToRectOverridden;
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)defaultProperties;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isTypeOverridden;
- (void)setType:(int)arg1;
- (int)type;
- (BOOL)isFillToRectOverridden;
- (void)setFillToRect:(id)arg1;
- (id)fillToRect;
- (id)initWithDefaults;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
