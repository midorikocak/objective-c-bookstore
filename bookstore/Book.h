//
//  Book.h
//  bookstore
//
//  Created by Midori Kocak on 23/10/15.
//  Copyright © 2015 Midori Kocak. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Book : NSObject{
}

@property(nonatomic,strong) NSString *title;
@property(nonatomic,strong) NSString *author;
@property(nonatomic,strong) NSString *description;

@end
