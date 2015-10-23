//
//  Bookstore.m
//  bookstore
//
//  Created by Midori Kocak on 23/10/15.
//  Copyright © 2015 Midori Kocak. All rights reserved.
//

#import "Bookstore.h"

@implementation Bookstore
@synthesize theBookStore;
-(id)init
{
    self= [super init];
    if(self){
        self.theBookStore = [[NSMutableArray alloc] init];
        Book *newBook = [[Book alloc] init];
        newBook.title = @"Objective-C for Absolute Beginners";
        newBook.author = @"Bennett, Fisher, Lees";
        newBook.description = @"ios Programming made easy";
        [self.theBookStore addObject:newBook];
        
        newBook = [[Book alloc]init];
        newBook.title = @"A Farewell To Arms";
        newBook.author = @"Ernest Hemingway";
        newBook.description =@"The story of an affair between and English "
                              "nurse and an American soldier "
                              "on the Italian front "
                              "during World War I.";
        [self.theBookStore addObject:newBook];
    }
    return self;
}

-(NSInteger) count
{
    return theBookStore.count;
}

-(Book *)bookAtIndex:(NSUInteger)index
{
    return [theBookStore objectAtIndex:index];
}
@end
