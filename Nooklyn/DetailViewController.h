//
//  DetailViewController.h
//  Nooklyn
//
//  Created by Moiz K. Malik on 11/10/14.
//  Copyright (c) 2014 Moiz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

