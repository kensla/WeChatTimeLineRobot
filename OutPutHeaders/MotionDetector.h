/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"

@class AVCaptureDevice;
@protocol MotionDetectorDelegate;

@interface MotionDetector : MMObject {
	id<MotionDetectorDelegate> _delegate;
	BOOL _isInit;
	BOOL _isFocusLibInit;
	AVCaptureDevice* _defaultCaptureDevice;
	bool _focuseEngineRet[2];
	int _state;
}
@property(readonly, assign, nonatomic) int state;
@property(assign, nonatomic) __weak id<MotionDetectorDelegate> delegate;
-(void).cxx_destruct;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)stop;
-(void)start;
-(int)releaseFocuseEngine;
-(void)focuseEngineProcess:(char*)process;
-(int)initFocuseEngineWithSize:(CGSize)size isForOcr:(BOOL)ocr;
-(id)getGrayScaleImageData:(id)data;
-(void)dealloc;
-(id)init;
@end

