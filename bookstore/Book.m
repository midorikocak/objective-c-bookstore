//
//  Book.m
//  bookstore
//
//  Created by Midori Kocak on 23/10/15.
//  Copyright © 2015 Midori Kocak. All rights reserved.
//

#import "Book.h"

@implementation Book
- (NSString *) title{
    return title;
}
-(void)setTitle:(NSString *)newTitle{
    if ([newTitle length]>0) {
        title = newTitle;
    }
}
@end
