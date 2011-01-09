/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDSlideMaster;



@interface PDSlideLayout : PDSlideChild 
{
    NSInteger mSlideLayoutType;
    PDSlideMaster *mSlideMaster;
}


- (id)initWithSlideMaster:(id)arg1;
- (NSInteger)slideLayoutType;
- (void)setSlideLayoutType:(NSInteger)arg1;
- (void)setSlideMaster:(id)arg1;
- (id)parentTextBodyPropertiesForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)parentTextStyleForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2 defaultTextListStyle:(id)arg3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)masterGraphicForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (void)doneWithContent;
- (id)slideMaster;
- (id)parentSlideBase;
- (id)defaultTheme;
- (void)dealloc;

@end