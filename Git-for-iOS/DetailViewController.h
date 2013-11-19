//
//  DetailViewController.h
//  Git-for-iOS
//
//  Created by Adrian on 11/19/2013.
//  Copyright (c) 2013 Creatif Cubed. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
