//
//  BIDTaskDetailController.h
//  Seg Nav
//
//  Created by raymond on 12-9-12.
//  Copyright (c) 2012年 com.apress. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDTaskDetailController : UIViewController

@property (weak, nonatomic) IBOutlet UITextView *textView;
@property (copy, nonatomic) NSDictionary *selection;
@property (weak, nonatomic) id delegate;

@end
