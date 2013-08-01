//
//  Jul25AppDelegate.h
//  Jul25
//
//  Created by david morton on 7/25/13.
//  Copyright (c) 2013 David Morton Enterprises. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>	//needed for SystemSoundID
@class ViewController;

@interface Aug1AppDelegate : UIResponder <UIApplicationDelegate>{
	UIWindow *_window;
	ViewController *last;
}

//holds the band datasets we transtion between
@property (strong, nonatomic) NSMutableArray *bandDataSets;

@property (strong, nonatomic) UIWindow *window;
@end
