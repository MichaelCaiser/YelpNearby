//
//  AppDelegate.h
//  YelpNearby
//
//  Created by Anouar on 18/05/14.
//
//

#import <UIKit/UIKit.h>
#import <SpeechKit/SpeechKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, CLLocationManagerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) CLLocationManager *customLocationManager;
@property (strong, nonatomic) CLLocation *currentUserLocation;
    
- (void)updateCurrentLocation;
- (void)stopUpdatingCurrentLocation;
- (void)setupSpeechKitConnection;

@end
