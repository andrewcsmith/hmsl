//
//  HMSLWindowDelegate.m
//  HMSL-OSX
//
//  Created by Andrew C Smith on 2/22/15.
//  Copyright (c) 2015 3DO. All rights reserved.
//

#import "HMSLWindowDelegate.h"
#import "hmsl.h"

@implementation HMSLWindowDelegate

-(void)windowWillClose:(NSNotification *)notification {
  gHMSLContext.events[gHMSLContext.events_write_loc] = EV_CLOSE_WINDOW;
  gHMSLContext.events_write_loc += 1;
}

@end
