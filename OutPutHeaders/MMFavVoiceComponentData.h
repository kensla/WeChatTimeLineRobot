/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMComponentData.h"

@class NSString;

@interface MMFavVoiceComponentData : MMComponentData {
	int favType;
	NSString* m_des;
	NSString* m_title;
	int _sourceType;
	NSString* _m_dataFmt;
}
@property(retain, nonatomic) NSString* m_dataFmt;
@property(retain, nonatomic) NSString* m_des;
@property(retain, nonatomic) NSString* m_title;
@property(assign, nonatomic) int sourceType;
@property(assign, nonatomic) int favType;
-(void).cxx_destruct;
@end

