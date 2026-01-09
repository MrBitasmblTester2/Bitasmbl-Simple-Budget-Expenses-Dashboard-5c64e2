#import <Foundation/Foundation.h>
@interface SignalRConnectionManager:NSObject
+ (instancetype)shared;
- (void)start;
- (void)sendBudgetUpdate:(NSDictionary*)payload;
@end