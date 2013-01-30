//
//  MeViewController.h
//  FoodFriends
//
//  Created by jin on 12-10-8.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "UTCommonFunctions.h"

@interface UTMeViewController : UIViewController
{
    IBOutlet UIButton *custom;
}

@property (retain, nonatomic) UIButton *custom;

//  Portrait
- (int)initPortrait;
- (int)displayPortrait;
- (int)refreshPortrait;
- (int)portritCacheUpdate;
- (int)portritServerUpdate;
- (void)getPortraitFromCache;
- (void)getPortraitFromServer;
- (int)openCamera;
- (int)openPhoto;
- (IBAction)changePortrait:(id)sender;

//  Labels
- (int)initLabels;
- (int)addLabels;
- (int)deleteLabels;
- (int)displayLabels;
- (int)refreshLabels;
- (int)labelCacheUpdate;
- (int)labelServerUpdate;
- (void)getLabelFromCache;
- (void)getLabelFromServer;
- (IBAction)changeLabels:(id)sender;

//  What's up
- (int)initWhatsup;
- (int)displayWhatsup;
- (int)refreshWhatsup;
- (int)whatsupCacheUpdate;
- (int)whatsupServerUpdate;
- (int)getWhatsupFromCache;
- (int)getWhatsupFromServer;
- (IBAction)changeWhatsup:(id)sender;

//  Personal Settings
- (IBAction)changePersonalSettings:(id)sender;


@end
