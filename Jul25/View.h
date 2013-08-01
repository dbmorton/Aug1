//
//  View.h
//  Jul25
//
//  Created by david morton on 7/25/13.
//  Copyright (c) 2013 David Morton Enterprises. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "BandData.h"

@class ViewController;

@interface View: UITextView  {
	ViewController *viewController;
	UILabel *label;
	UITextView *textView;
}
//holds the band datasets we transtion between
@property (strong, nonatomic) BandData *bandData;

- (id) initWithFrame: (CGRect) frame controller: (ViewController *) c bandData: (BandData *) bd;
@end
