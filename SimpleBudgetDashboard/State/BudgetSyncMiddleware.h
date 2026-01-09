#import <Foundation/Foundation.h>
@class BudgetAction;
@interface BudgetSyncMiddleware:NSObject
+ (void)handleAction:(BudgetAction*)action;
@end