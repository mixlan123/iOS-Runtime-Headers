/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class RTFTextTable;



@interface RTFTextTableBlock : RTFTextBlock 
{
    RTFTextTable *_table;
    NSInteger _rowNum;
    NSInteger _colNum;
    NSInteger _rowSpan;
    NSInteger _colSpan;
    void *_tableBlockPrimary;
    void *_tableBlockSecondary;
}


- (id)initWithTable:(id)arg1 startingRow:(NSInteger)arg2 rowSpan:(NSInteger)arg3 startingColumn:(NSInteger)arg4 columnSpan:(NSInteger)arg5;
- (NSInteger)startingColumn;
- (void)_setColumnSpan:(NSInteger)arg1;
- (NSInteger)startingRow;
- (void)_setRowSpan:(NSInteger)arg1;
- (NSInteger)rowSpan;
- (NSInteger)columnSpan;
- (id)table;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end