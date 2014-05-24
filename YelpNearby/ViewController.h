//
//  ViewController.h
//  YelpNearby
//
//  Created by Anouar on 18/05/14.
//
//

#import <UIKit/UIKit.h>
#import <SpeechKit/SpeechKit.h>
#import "YelpAPIService.h"
#import "AppDelegate.h"

@interface ViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, SpeechKitDelegate, SKRecognizerDelegate, SKVocalizerDelegate, YelpAPIServiceDelegate>

@property (weak, nonatomic) IBOutlet UITextField *searchTextField;
@property (weak, nonatomic) IBOutlet UIButton *recordButton;
@property (weak, nonatomic) IBOutlet UILabel *messageLabel;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;
    
@property (weak, nonatomic) IBOutlet UITableView *resultTableView;

@property (strong, nonatomic) AppDelegate *appDelegate;
@property (strong, nonatomic) NSMutableArray *tableViewDisplayDataArray;

@property (strong, nonatomic) SKRecognizer* voiceSearch;

@property (strong, nonatomic) SKVocalizer* vocalizer;
@property BOOL isSpeaking;

@property (strong, nonatomic) YelpAPIService *yelpService;
@property (strong, nonatomic) NSString* searchCriteria;

- (NSString *)getYelpCategoryFromSearchText;
- (void)findNearByRestaurantsFromYelpbyCategory:(NSString *)categoryFilter;

- (IBAction)recordButtonTapped:(id)sender;

@end
