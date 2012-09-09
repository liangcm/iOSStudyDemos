//
//  BIDDeleteMeController.h
//  Nav
//
//  Created by raymond on 12-9-9.
//  Copyright (c) 2012年 com.apress. All rights reserved.
//

#import "BIDSecondLevelViewController.h"

@interface BIDDeleteMeController : BIDSecondLevelViewController
@property (strong, nonatomic) NSMutableArray *list;
- (IBAction)toggleEdit:(id)sender;
@end
