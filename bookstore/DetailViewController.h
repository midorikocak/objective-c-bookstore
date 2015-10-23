//
//  DetailViewController.h
//  bookstore
//
//  Created by Midori Kocak on 23/10/15.
//  Copyright © 2015 Midori Kocak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *authorLabel;
@property (strong,nonatomic) IBOutlet UITextView *descriptionTextView;

@end

