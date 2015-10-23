//
//  Bookstore.h
//  bookstore
//
//  Created by Midori Kocak on 23/10/15.
//  Copyright © 2015 Midori Kocak. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Book.h"

@interface Bookstore : NSObject
@property(strong,nonatomic) NSMutableArray *theBookStore;
-(NSInteger)count;
- (Book *) bookAtIndex:(NSUInteger)index;
@end
