//
//  MessageViewController.h
//  FoodFriends
//
//  Created by jin on 12-10-8.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UTMessageViewController : UIViewController

//  Initial Functions
- (int)getFriendsFromCache;
- (int)getFriendsFromServer;
- (int)getMessageFromCache;

//  Actions
- (IBAction)friendSelected:(id)sender;

//  Message
- (int)messageSendTo:(NSString *)memberID;
- (int)messageCacheUpdate;

@end
