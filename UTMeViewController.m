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

- (IBAction)buttonP:(id)sender
{
    if ([sender tag] == 1)
    {
        //UIAlertView *alert = [[UIAlertView alloc]initWithTitle:@"Hello" message:@"Yes, cool!" delegate:nil cancelButtonTitle:@"NO, don't press me" otherButtonTitles:nil, nil];
        //[alert show];
        [sender setTitle:@"enter" forState:UIControlStateNormal];
        //ButtonPressed *button = [ButtonPressed alloc];
        //[button buttonPressed:1];
        [ButtonPressed buttonPressed:1];
    }
    else
    {
        [sender setTitle:@"not enter" forState:UIControlStateNormal];
    }
}

@end
