

@interface KLTimeAgo : NSObject
+ (NSString *) timeSinceDate:(NSDate *)date;
+ (NSString *) timeSinceDate:(NSDate *)date withLimit:(NSTimeInterval)limit;
+ (NSString *) timeSinceDate:(NSDate *)date withLimit:(NSTimeInterval)limit dateFormat:(NSDateFormatterStyle)dFormatter andTimeFormat:(NSDateFormatterStyle)tFormatter;
@end

