#import "FTAGeoPoint.h"


@interface FTAGeoPoint ()

// Private interface goes here.

@end


@implementation FTAGeoPoint

- (PFGeoPoint *)pfGeoPoint {
	return [PFGeoPoint geoPointWithLatitude:self.latitudeValue longitude:self.longitudeValue];
}

- (void)updateWithPFGeoPoint:(PFGeoPoint *)geoPoint {
	self.latitudeValue = geoPoint.latitude;
	self.longitudeValue = geoPoint.longitude;
}

@end
