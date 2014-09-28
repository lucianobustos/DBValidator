//
//  ViewController.h
//  DBValidator
//
//  Created by Daniel Beard on 9/01/13.
//  Copyright (c) 2013 Daniel Beard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (assign, nonatomic) IBOutlet UITextField *textField1;
- (IBAction)validatePressed:(id)sender;
@property (assign, nonatomic) IBOutlet UITextField *textField2;
@property (assign, nonatomic) IBOutlet UITextField *textFieldEmail;
@property (assign, nonatomic) IBOutlet UITextField *textFieldLength;
@property (assign, nonatomic) IBOutlet UITextField *textFieldRegex;

@end
