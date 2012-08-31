//
//  NewFundTableViewController.h
//  SouthwestTravelFundsManager
//
//  Created by Colin Regan on 8/27/12.
//  Copyright (c) 2012 Red Cup. All rights reserved.
//

#import "GenericDataInputTableViewController.h"

@class NewFundTableViewController;

@protocol NewFundDelegate <NSObject>

- (void)newFundTableViewController:(NewFundTableViewController *)sender didEnterFundInformation:(NSDictionary *)fundInfo;

@end

@interface NewFundTableViewController : GenericDataInputTableViewController

@property (nonatomic, weak) id <NewFundDelegate> delegate;

@end