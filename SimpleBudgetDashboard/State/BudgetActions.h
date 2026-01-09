#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger,BudgetActionType){BudgetActionAddIncome,BudgetActionAddExpense,BudgetActionSetItems};
@interface BudgetAction:NSObject
@property(nonatomic,assign)BudgetActionType type;
@property(nonatomic,strong)NSDictionary *payload;
@end