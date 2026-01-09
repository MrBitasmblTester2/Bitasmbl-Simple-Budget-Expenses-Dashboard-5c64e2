#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger,BudgetItemType){BudgetItemTypeIncome,BudgetItemTypeExpense};
@interface BudgetItem:NSObject
@property(nonatomic,assign)BudgetItemType type;
@property(nonatomic,strong)NSString *title;
@property(nonatomic,assign)double amount;
@property(nonatomic,strong)NSDate *date;
@end