//
//  MeViewController.m
//  FoodFriends
//
//  Created by jin on 12-10-8.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import "UTMeViewController.h"

@interface UTMeViewController ()

@end

@implementation UTMeViewController

@synthesize custom;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [custom setTag:1];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
