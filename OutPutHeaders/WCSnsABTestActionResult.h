/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

@interface WCSnsABTestActionResult : XXUnknownSuperclass {
	unsigned experType;
	NSString* dataItemId;
	NSMutableArray* arrTipActionResult;
	unsigned startTime;
	unsigned endTime;
}
@property(assign, nonatomic) unsigned endTime;
@property(assign, nonatomic) unsigned startTime;
@property(retain, nonatomic) NSString* dataItemId;
@property(assign, nonatomic) unsigned experType;
-(void).cxx_destruct;
-(void)addTipActionResult:(id)result;
-(void)tryAddTimeStamp:(BOOL)stamp endTime:(BOOL)time;
-(BOOL)hasActionResult;
-(id)genActionResult;
-(void)resetResult;
-(id)init;
@end

