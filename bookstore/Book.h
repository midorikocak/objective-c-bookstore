//
//  Book.h
//  bookstore
//
//  Created by Midori Kocak on 23/10/15.
//  Copyright © 2015 Midori Kocak. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Book : NSObject{
    NSString *title;
    NSString *author;
    NSString *description;
}

- (NSString *) title;
- (void) setTitle:(NSString *)newTitle;

@end
