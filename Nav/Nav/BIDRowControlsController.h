//
//  BIDRowControlsController.h
//  Nav
//
//  Created by raymond on 12-9-9.
//  Copyright (c) 2012年 com.apress. All rights reserved.
//

#import "BIDSecondLevelViewController.h"

@interface BIDRowControlsController : BIDSecondLevelViewController
@property (strong, nonatomic) NSArray *list;
- (IBAction)buttonTapped:(id)sender;
@end
