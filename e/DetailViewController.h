//
//  DetailViewController.h
//  e
//
//  Created by p1 on 14.10.2015.
//  Copyright © 2015 p1. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

