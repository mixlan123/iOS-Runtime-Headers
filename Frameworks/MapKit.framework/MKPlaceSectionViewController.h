/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceSectionViewController : UIViewController <MKPlaceSectionViewDelegate> {
    MKPlaceSectionView * _sectionView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) MKPlaceSectionView *sectionView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_viewHostsLayoutEngineAllowsTAMIC_NO;
- (void)dealloc;
- (void)loadView;
- (id)sectionView;
- (void)sectionView:(id)arg1 didDeselectRow:(id)arg2 atIndex:(unsigned int)arg3;
- (void)sectionView:(id)arg1 didSelectFooter:(id)arg2;
- (void)sectionView:(id)arg1 didSelectHeader:(id)arg2;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned int)arg3;

@end
