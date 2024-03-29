//
//  Listings.h
//  Nooklyn
//
//  Created by Moiz K. Malik on 11/11/14.
//  Copyright (c) 2014 Moiz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Listings : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, strong) NSString *thumbnail;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSURL *url;

// Designated initializer
- (id) initWithTitle:(NSString *)title;
+ (id) blogPostWithTitle:(NSString *)title;


- (NSURL *) thumbnailURL;
- (NSString *) formattedDate;

@end
