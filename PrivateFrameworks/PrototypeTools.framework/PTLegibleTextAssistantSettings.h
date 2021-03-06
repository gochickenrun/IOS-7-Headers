/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "_UISettings.h"

@class NSArray, NSString, UIColor;

@interface PTLegibleTextAssistantSettings : _UISettings
{
    BOOL _drawingShadowDrawsText;
    NSArray *_shadowRadii;
    NSArray *_shadowAlphas;
    NSString *_shadowCompositingFilterName;
    UIColor *_foregroundColor;
    CDStruct_d4b298fb _imageStatistics;
}

+ (id)settingsWithImageStatistics:(CDStruct_d4b298fb)arg1;
@property(nonatomic) CDStruct_d4b298fb imageStatistics; // @synthesize imageStatistics=_imageStatistics;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) BOOL drawingShadowDrawsText; // @synthesize drawingShadowDrawsText=_drawingShadowDrawsText;
@property(copy, nonatomic) NSString *shadowCompositingFilterName; // @synthesize shadowCompositingFilterName=_shadowCompositingFilterName;
@property(copy, nonatomic) NSArray *shadowAlphas; // @synthesize shadowAlphas=_shadowAlphas;
@property(copy, nonatomic) NSArray *shadowRadii; // @synthesize shadowRadii=_shadowRadii;
- (void).cxx_destruct;
- (id)calculateForegroundColorWithImageStatistics:(CDStruct_d4b298fb)arg1;
- (void)setDefaultValues;

@end

