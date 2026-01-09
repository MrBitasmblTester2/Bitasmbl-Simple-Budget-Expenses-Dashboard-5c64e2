#import <Foundation/Foundation.h>
@class BudgetAction;
@interface BudgetStore:NSObject
@property(nonatomic,strong,readonly)NSDictionary *state;
+ (instancetype)shared;
- (void)dispatch:(BudgetAction*)action;
- (void)subscribe:(id)target selector:(SEL)sel;
@end