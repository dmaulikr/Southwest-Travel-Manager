//
//  TravelFund.swift
//  Southwest Travel Manager
//
//  Created by Colin Regan on 10/13/14.
//  Copyright (c) 2014 Red Cup. All rights reserved.
//

import UIKit
import Realm

class TravelFund: RLMObject {
    dynamic var balance = 0.0
    dynamic var expirationDate = NSDate(timeIntervalSinceNow: 60 * 60 * 24 * 365)
    dynamic var notes = ""
    dynamic var originalFlight: Flight?
    dynamic var unusedTicket = true
}