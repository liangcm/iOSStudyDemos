//
//  BIDDisclosureDetailController.m
//  Nav
//
//  Created by raymond on 12-9-9.
//  Copyright (c) 2012年 com.apress. All rights reserved.
//

#import "BIDDisclosureDetailController.h"

@interface BIDDisclosureDetailController ()

@end

@implementation BIDDisclosureDetailController
@synthesize label;
@synthesize message;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)viewWillAppear:(BOOL)animated
{
    label.text = message;
    [super viewWillAppear:animated];
}

- (void)viewDidUnload
{
    self.label = nil;
    self.message = nil;
    [super viewDidUnload];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
