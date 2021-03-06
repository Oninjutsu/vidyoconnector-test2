//
//	VidyoRemoteWindowShare_Objc.h
//	VidyoClient
//
//	This file is auto generated, do not edit this file
//	Copyright (c) 2016 Vidyo, Inc. All rights reserved.
//

#import "VidyoLocalRenderer_Objc.h"
@interface VCRemoteWindowShare : NSObject
{
	void* objPtr;
}

	@property NSMutableString* id;
	@property NSMutableString* name;
	-(void) dealloc;
	-(long) addToLocalRenderer:(VCLocalRenderer*)renderer;
	-(NSString*) getId;
	-(NSString*) getName;
	-(BOOL) removeFromLocalRenderer:(VCLocalRenderer*)renderer;
	-(BOOL) setPositionInLocalRenderer:(VCLocalRenderer*)localRenderer X:(int)x Y:(int)y Width:(unsigned int)width Height:(unsigned int)height FrameInterval:(long)frameInterval;
	-(id) initWithObject:(void*)rPtr;
	-(void*)getObjectPtr;
@end
