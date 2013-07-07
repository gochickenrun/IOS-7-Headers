/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "CoreDAVItem.h"

@class CalDAVCalendarServerChangesItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_master;
    CoreDAVLeafItem *_recurrenceID;
    CalDAVCalendarServerChangesItem *_changes;
}

@property(retain) CalDAVCalendarServerChangesItem *changes; // @synthesize changes=_changes;
@property(retain) CoreDAVLeafItem *recurrenceID; // @synthesize recurrenceID=_recurrenceID;
@property(retain) CoreDAVItemWithNoChildren *master; // @synthesize master=_master;
@property(readonly) BOOL isMaster;
- (id)copyParseRules;
- (id)description;
- (void)dealloc;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)init;

@end
