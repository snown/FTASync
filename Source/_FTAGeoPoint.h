// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to FTAGeoPoint.h instead.

#import <CoreData/CoreData.h>


extern const struct FTAGeoPointAttributes {
	__unsafe_unretained NSString *latitude;
	__unsafe_unretained NSString *longitude;
} FTAGeoPointAttributes;

extern const struct FTAGeoPointRelationships {
	__unsafe_unretained NSString *parseObject;
} FTAGeoPointRelationships;

extern const struct FTAGeoPointFetchedProperties {
} FTAGeoPointFetchedProperties;

@class FTASyncParent;




@interface FTAGeoPointID : NSManagedObjectID {}
@end

@interface _FTAGeoPoint : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (FTAGeoPointID*)objectID;





@property (nonatomic, strong) NSNumber* latitude;



@property double latitudeValue;
- (double)latitudeValue;
- (void)setLatitudeValue:(double)value_;

//- (BOOL)validateLatitude:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* longitude;



@property double longitudeValue;
- (double)longitudeValue;
- (void)setLongitudeValue:(double)value_;

//- (BOOL)validateLongitude:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) FTASyncParent *parseObject;

//- (BOOL)validateParseObject:(id*)value_ error:(NSError**)error_;





@end

@interface _FTAGeoPoint (CoreDataGeneratedAccessors)

@end

@interface _FTAGeoPoint (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber*)primitiveLatitude;
- (void)setPrimitiveLatitude:(NSNumber*)value;

- (double)primitiveLatitudeValue;
- (void)setPrimitiveLatitudeValue:(double)value_;




- (NSNumber*)primitiveLongitude;
- (void)setPrimitiveLongitude:(NSNumber*)value;

- (double)primitiveLongitudeValue;
- (void)setPrimitiveLongitudeValue:(double)value_;





- (FTASyncParent*)primitiveParseObject;
- (void)setPrimitiveParseObject:(FTASyncParent*)value;


@end
