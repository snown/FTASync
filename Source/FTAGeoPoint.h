#import "_FTAGeoPoint.h"
#import <Parse/Parse.h>

@interface FTAGeoPoint : _FTAGeoPoint {}

- (PFGeoPoint *)pfGeoPoint;
- (void)updateWithPFGeoPoint:(PFGeoPoint *)geoPoint;

@end
