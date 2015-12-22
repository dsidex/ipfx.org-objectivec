//
//  IPFXCurve.h
//  ipfx
//
//  Created by valentinkovalski on 12/18/15.
//  Copyright © 2015 DSIDEX Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IPFXFunction.h"
#import "IPFXVector.h"

@interface IPFXCurve : NSObject<IPFXFunction>
- (instancetype)initWithVector:(IPFXVector*)p1 p2:(IPFXVector*)p2 v1:(IPFXVector*)v1 v2:(IPFXVector*)v2;
@end
