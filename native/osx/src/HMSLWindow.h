//
//  HMSLWindow.h
//  HMSL-OSX
//
//  Created by Andrew C Smith on 8/7/15.
//  Copyright (c) 2015 3DO. All rights reserved.
//


#import <Cocoa/Cocoa.h>
#import "hmsl.h"

@interface HMSLWindow : NSWindow {
  NSGraphicsContext *_graphicsContext;
}

@property (retain) NSGraphicsContext* graphicsContext;

+ (NSMutableDictionary*)windowDictionary;
+ (HMSLWindow*)hmslWindowWithTitle: (NSString*) title frame: (NSRect) frame;

- (void) drawRectangle: (HMSLRect) rect;
- (void) drawLineFrom: (HMSLPoint) start to: (HMSLPoint) end;
- (void) drawText: (NSString*) text atPoint: (NSPoint) point;
- (void) flushCurrentContext;
- (void) hmslBackgroundColor: (const double*) color;

@end
