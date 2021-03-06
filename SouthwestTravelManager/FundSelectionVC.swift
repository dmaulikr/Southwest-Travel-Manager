//
//  FundSelectionVC.swift
//  Southwest Travel Manager
//
//  Created by Colin Regan on 10/23/14.
//  Copyright (c) 2014 Red Cup. All rights reserved.
//

import UIKit

class FundSelectionVC: UITableViewController {
    
    @IBOutlet var fundSelectionDataSource: TravelFundSelectionDataSource!
    var delegate: FundSelectionDelegate?

    @IBAction func doneTapped(sender: UIBarButtonItem) {
        delegate?.fundSelector(self, didSelectTravelFunds: Dictionary(collection: fundSelectionDataSource.selectedFunds, valueSelector: { (fund: TravelFund) -> Double in
            return fund.balance - self.fundSelectionDataSource.availableBalanceForFund(fund)
        }))
    }
    
}
