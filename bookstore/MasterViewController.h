//
//  MasterViewController.h
//  bookstore
//
//  Created by Midori Kocak on 23/10/15.
//  Copyright © 2015 Midori Kocak. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;
@class Bookstore;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong, nonatomic) Bookstore *myBookStore;

@end

