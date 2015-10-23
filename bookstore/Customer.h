//
//  Customer.h
//  bookstore
//
//  Created by Midori Kocak on 23/10/15.
//  Copyright © 2015 Midori Kocak. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Customer : NSObject{
    NSString* firstName;
    NSString* lastName;
    NSString* addressLine1;
    NSString* addressLine2;
    NSString* city;
    NSString* state;
    NSString* zip;
    NSString* phoneNumber;
    NSString* emailAddress;
    NSString* favoriteGenre;
}

-(NSArray *) listPurchaseHistory;
@end
