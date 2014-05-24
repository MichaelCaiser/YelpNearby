//
//  ResultTableViewCell.h
//  YelpNearby
//
//  Created by Anouar on 18/05/14.
//
//

#import <UIKit/UIKit.h>

@interface ResultTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *addressLabel;

@property (weak, nonatomic) IBOutlet UIImageView *thumbImage;
@property (weak, nonatomic) IBOutlet UIImageView *ratingImage;

@end
