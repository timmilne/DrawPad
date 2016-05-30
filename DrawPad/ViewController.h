//
//  ViewController.h
//  DrawPad
//
//  Created by Tim.Milne on 5/29/16.
//  Copyright © 2016 Tim.Milne. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SettingsViewController.h"

@interface ViewController : UIViewController <SettingsViewControllerDelegate>{
   
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    BOOL mouseSwiped;
}

@property (weak, nonatomic) IBOutlet UIImageView *mainImage;
@property (weak, nonatomic) IBOutlet UIImageView *tempDrawImage;
@property (weak, nonatomic) IBOutlet UIButton *blackBtn;
@property (weak, nonatomic) IBOutlet UIButton *greyBtn;
@property (weak, nonatomic) IBOutlet UIButton *redBtn;
@property (weak, nonatomic) IBOutlet UIButton *blueBtn;
@property (weak, nonatomic) IBOutlet UIButton *greenBtn;
@property (weak, nonatomic) IBOutlet UIButton *lightGreenBtn;
@property (weak, nonatomic) IBOutlet UIButton *lightBlueBtn;
@property (weak, nonatomic) IBOutlet UIButton *brownBtn;
@property (weak, nonatomic) IBOutlet UIButton *orangeBtn;
@property (weak, nonatomic) IBOutlet UIButton *yellowBtn;
@property (weak, nonatomic) IBOutlet UIButton *eraserBtn;

- (IBAction)pencilPressed:(id)sender;
- (IBAction)eraserPressed:(id)sender;
- (IBAction)reset:(id)sender;
- (IBAction)settings:(id)sender;
- (IBAction)save:(id)sender;

@end

