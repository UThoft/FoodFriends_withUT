//
//  PostViewController.h
//  FoodFriends
//
//  Created by jin on 12-10-8.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UTPostViewController : UIViewController

//  Others' Posts
- (int)getPostFromServer:(int)postType;
- (int)acceptPostFromOthers:(int)postID;


// Actions
- (IBAction)filterButtonPressed:(id)sender;
- (int)filterPostFromOthers:(NSDate *)postDate
                           :(NSString *)postPlace
                           :(int)postType;




//  My Posts
- (int)cancelPostAccepted:(int)postID;
- (int)modifyPostAccepted:(int)postID;
- (int)cancelPostOnWall:(int)postID;
- (int)modifyPostOnWall:(int)postID;
- (IBAction)newPostButtonPressed:(id)sender;




//  Common
- (IBAction)postSelected:(id)sender;
- (IBAction)userPortraitSelected:(id)sender;


@end
