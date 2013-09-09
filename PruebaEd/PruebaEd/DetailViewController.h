//
//  DetailViewController.h
//  PruebaEd
//
//  Created by Edward Umaña Williams on 08/09/13.
//  Copyright (c) 2013 com.gotouch.tec. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
