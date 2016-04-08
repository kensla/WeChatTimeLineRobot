/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "PBMessageObserverDelegate.h"

@protocol ChatMigrationCreateQRCodeDelegate;

@interface ChatMigrationCreateQRCode : MMObject <PBMessageObserverDelegate> {
	id<ChatMigrationCreateQRCodeDelegate> m_delegate;
}
@property(assign, nonatomic) __weak id<ChatMigrationCreateQRCodeDelegate> m_delegate;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)GetQRCodeOfflineWithIP:(id)ip Port:(unsigned short)port WifiName:(id)name PcName:(id)name4 PcacctName:(id)name5 TotalSize:(unsigned long long)size Ticket:(id)ticket AESKey:(id)key Uin:(unsigned long)uin;
-(void)GetQRCodeWithIP:(id)ip Port:(unsigned short)port WifiName:(id)name PcName:(id)name4 PcacctName:(id)name5 TotalSize:(unsigned long long)size;
-(void)GetQRCodeWithIP:(id)ip Port:(unsigned short)port WifiName:(id)name TotalSize:(unsigned long long)size;
-(void)dealloc;
-(id)init;
@end
