//
//  FlightDetailsTableViewController.h
//  SouthwestTravelFundsManager
//
//  Created by Colin Regan on 8/24/12.
//  Copyright (c) 2012 Red Cup. All rights reserved.
//

#import "GenericFlightTableViewController.h"
#import "Flight.h"

@interface FlightDetailsTableViewController : GenericFlightTableViewController

@property (nonatomic, strong) Flight *flight;

@end