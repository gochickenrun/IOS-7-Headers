/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLiteIntarrayTable : NSObject
{
    struct sqlite3_intarray *_intarrayTable;
    NSString *_intarrayTableName;
}

@property(retain) NSString *intarrayTableName; // @synthesize intarrayTableName=_intarrayTableName;
@property struct sqlite3_intarray *intarrayTable; // @synthesize intarrayTable=_intarrayTable;

@end
