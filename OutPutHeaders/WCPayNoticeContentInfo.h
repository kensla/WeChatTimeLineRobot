/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface WCPayNoticeContentInfo : XXUnknownSuperclass <NSCoding> {
	NSString* m_nsAppName;
	unsigned long m_uiAmount;
}
@property(retain, nonatomic) NSString* m_nsAppName;
@property(assign, nonatomic) unsigned long m_uiAmount;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
@end

