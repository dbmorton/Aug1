

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>	//needed for SystemSoundID
#import "BandData.h"

@interface ViewController: UIViewController {	
	NSString *text;
}

- (id) initWithText: (NSString *) t
			  title: (NSString *) title
			  image: (UIImage *) image
			  badge: (NSString *) badge;

//holds the band datasets we transtion between
@property (strong, nonatomic) BandData *bandData;
@property (nonatomic) SystemSoundID sid;


@end
