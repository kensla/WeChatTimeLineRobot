/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BatchSearchHardDeviceFilter, NSMutableArray;

@interface BatchSearchHardDeviceReq : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned batchSearchSence;
@property(retain, nonatomic) BatchSearchHardDeviceFilter* searchFilter;
@property(retain, nonatomic) NSMutableArray* searchInfo;
+(void)initialize;
@end

