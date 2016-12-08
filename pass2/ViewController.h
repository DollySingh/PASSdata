//
//  ViewController.h
//  pass2
//
//  Created by Student-004 on 19/10/16.
//  Copyright © 2016 Student-004. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property(nonatomic,retain)NSMutableArray *tempcolorarray;
@property (weak, nonatomic) IBOutlet UITextField *tf1;
@property (weak, nonatomic) IBOutlet UIButton *Button;
- (IBAction)passdata:(id)sender;

@end
