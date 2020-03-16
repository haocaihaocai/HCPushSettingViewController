//
//  HCBaseSettingViewController.h
//  HCPushSettingViewController
//
//  Created by haocaihaocai on 2020/3/16.
//  Copyright © 2020年 haocaihaocai. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    HCBaseSettingAlignmentRight, //view position is right
    HCBaseSettingAlignmentLeft, //view postion is left
} HCBaseSettingAlignment;

@interface HCBaseSettingViewController : UIViewController

///Content view
@property (nonatomic, strong, readonly) UIView *hcContentView;

///Content view background Color
@property (nonatomic, strong) UIColor *hcContentViewBackgroundColor;

///hcContentView`s size, default is {300,MAXFLOAT},MAXFLOAT means will fill screen height
@property (nonatomic, assign) CGSize hcContentSize;

///Content EdgeInset ,Only Top and Bottom value is validate,left and right will be ignored. Default is UIEdgeInsetsZero
@property (nonatomic, assign) UIEdgeInsets contentInset;

///The final view postion,default is Right
@property (nonatomic, assign) HCBaseSettingAlignment alignment;

///Transition is animate,default is YES
@property (nonatomic, assign) BOOL isTransitionAnimate;

///If backgroundView not set,the value will effect backgroundView`s color
@property (nonatomic, strong) UIColor *backgroundColor;

///backgroundView
@property (nonatomic, strong) UIView *backgroundView;

///Tag backgoundView will cause ViewController dismiss
@property (nonatomic, assign) BOOL backgoundTapDismissEnable;

///dismiss controller completed block
@property (nonatomic, copy) void (^dismissComplete)(void);

@end


@interface HCBaseSettingViewController (TransitionAnimate)<UIViewControllerTransitioningDelegate>

@end
