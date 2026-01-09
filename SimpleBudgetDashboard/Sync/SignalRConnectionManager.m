#import "SignalRConnectionManager.h"
@implementation SignalRConnectionManager
+ (instancetype)shared{static id s;static dispatch_once_t t;dispatch_once(&t,^{s=[self new];});return s;}
- (void)start{}
- (void)sendBudgetUpdate:(NSDictionary*)payload{}
@end