/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol IMsgExt
@optional
-(void)OnSendSight:(id)sight;
-(void)OnReceiveSight:(id)sight;
-(void)OnBeginDownloadAppData:(id)data;
-(void)OnBeginDownloadVideo:(id)video;
-(void)OnBeginDownloadImage:(id)image;
-(void)OnMsgDownloadAppAttachExpiredFail:(id)fail MsgWrap:(id)wrap;
-(void)OnMsgDownloadVideoExpiredFail:(id)fail MsgWrap:(id)wrap;
-(void)OnUpdateVideoStatus:(id)status MsgWrap:(id)wrap;
-(void)OnGetNewXmlMsg:(id)msg Type:(id)type MsgWrap:(id)wrap;
-(void)OnMsgDownloadThumbFail:(id)fail MsgWrap:(id)wrap;
-(void)OnMsgDownloadThumbOK:(id)ok MsgWrap:(id)wrap;
-(void)OnMsgNotAddDBSession:(id)session MsgList:(id)list;
-(void)OnShowPush:(id)push;
-(void)OnAddMsgForSpecialSession:(id)specialSession MsgList:(id)list;
-(void)OnMsgNotAddDBNotify:(id)notify MsgWrap:(id)wrap;
-(void)OnAddMsgListForSession:(id)session NotifyUsrName:(id)name;
-(void)OnUnReadCountChange:(id)change;
-(void)OnDelMsg:(id)msg DelAll:(BOOL)all;
-(void)OnRevokeMsg:(id)msg MsgWrap:(id)wrap ResultCode:(unsigned long)code ResultMsg:(id)msg4 EducationMsg:(id)msg5;
-(void)OnDelMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnDelMsg:(id)msg;
-(void)OnModMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnAddMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnPreAddMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnChangeMsg:(id)msg OpCode:(unsigned long)code;
@end

