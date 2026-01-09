#import <UIKit/UIKit.h>
@interface BudgetSummaryView:UIView
@property(nonatomic,assign)double income;
@property(nonatomic,assign)double expenses;
- (void)configure;
@end