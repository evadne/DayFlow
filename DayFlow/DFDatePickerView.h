#import <UIKit/UIKit.h>

@class DFDatePickerView;

@protocol DFDatePickerViewDataSource <NSObject>
- (BOOL) datePickerView:(DFDatePickerView *)datePickerView shouldShowActivityOnDate:(NSDate *)date;
@end

@interface DFDatePickerView : UIView

- (instancetype) initWithCalendar:(NSCalendar *)calendar;

@property (nonatomic, readwrite, strong) NSDate *selectedDate;
@property (nonatomic, weak) id <DFDatePickerViewDataSource> dataSource;

@end
