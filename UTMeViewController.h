//
//  MeViewController.h
//  FoodFriends
//
//  Created by jin on 12-10-8.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ButtonPressed.h"

@interface UTMeViewController : UIViewController
{
    IBOutlet UIButton *custom;
}

@property (retain, nonatomic) UIButton *custom;

- (IBAction)buttonP:(id)sender;

@end
