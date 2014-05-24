//
//  Restaurant.h
//  YelpNearby
//
//  Created by Anouar on 18/05/14.
//
//

#import <Foundation/Foundation.h>

@interface Restaurant : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSString *thumbURL;
@property (nonatomic, strong) NSString *ratingURL;
@property (nonatomic, strong) NSString *yelpURL;

@end
