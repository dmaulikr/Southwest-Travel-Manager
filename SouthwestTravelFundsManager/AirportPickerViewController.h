//
//  AirportPickerViewController.h
//  SouthwestTravelFundsManager
//
//  Created by Colin Regan on 8/21/12.
//  Copyright (c) 2012 Red Cup. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AirportPickerViewController;

@protocol AirportPickerViewControllerDelegate <NSObject>

- (void)airportPickerViewController:(AirportPickerViewController *)airportPickerVC selectedOrigin:(NSString *)origin andDestination:(NSString *)destination;

@end

@interface AirportPickerViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource>

@property (nonatomic, weak) UIPickerView *airportPicker;
@property (nonatomic, weak) id <AirportPickerViewControllerDelegate> delegate;

- (NSTimeZone *)timeZoneForAirport:(NSString *)airport;

@end