/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactListBannerView : UIView {
    UIView * _avatarView;
    UIView * _avatarViewContainer;
    UIView * _bottomSeparator;
    NSArray * _constraintsPendingActivation;
    <CNContactListBannerViewDelegate> * _delegate;
    UIView * _footnoteContainer;
    UILabel * _footnoteLabel;
    NSLayoutConstraint * _footnoteTitleToBottomVerticalConstraint;
    NSLayoutConstraint * _footnoteTitleToTitleVerticalConstraint;
    NSLayoutConstraint * _footnoteTitleToValueHorizontalSpaceConstraint;
    UILabel * _footnoteValueLabel;
    CNContactFormatter * _formatter;
    UIGestureRecognizer * _longPress;
    CNContact * _meContact;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleToPhotoVerticalConstraint;
}

@property (nonatomic, retain) UIView *avatarView;
@property (nonatomic, readonly) UIView *avatarViewContainer;
@property (nonatomic, readonly) UIView *bottomSeparator;
@property (nonatomic, retain) NSArray *constraintsPendingActivation;
@property (nonatomic) <CNContactListBannerViewDelegate> *delegate;
@property (nonatomic, readonly) UIView *footnoteContainer;
@property (nonatomic, readonly) UILabel *footnoteLabel;
@property (nonatomic, retain) NSLayoutConstraint *footnoteTitleToBottomVerticalConstraint;
@property (nonatomic, retain) NSLayoutConstraint *footnoteTitleToTitleVerticalConstraint;
@property (nonatomic, retain) NSLayoutConstraint *footnoteTitleToValueHorizontalSpaceConstraint;
@property (nonatomic, readonly) UILabel *footnoteValueLabel;
@property (nonatomic, readonly) CNContactFormatter *formatter;
@property (nonatomic, readonly) UIGestureRecognizer *longPress;
@property (nonatomic, retain) CNContact *meContact;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleToPhotoVerticalConstraint;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)activatePendingConstraints;
- (id)avatarView;
- (id)avatarViewContainer;
- (id)bottomSeparator;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cellWasLongPressed:(id)arg1;
- (void)cellWasSingleTapped:(id)arg1;
- (id)constraintsPendingActivation;
- (void)copy:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)displaysContactInfo;
- (id)footnoteContainer;
- (id)footnoteFont;
- (id)footnoteLabel;
- (id)footnoteTextColor;
- (id)footnoteTitleToBottomVerticalConstraint;
- (id)footnoteTitleToTitleVerticalConstraint;
- (id)footnoteTitleToValueHorizontalSpaceConstraint;
- (id)footnoteValueLabel;
- (id)formatter;
- (id)init;
- (id)longPress;
- (id)meContact;
- (void)menuDidHide:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setConstraintsPendingActivation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFootnoteTitleToBottomVerticalConstraint:(id)arg1;
- (void)setFootnoteTitleToTitleVerticalConstraint:(id)arg1;
- (void)setFootnoteTitleToValueHorizontalSpaceConstraint:(id)arg1;
- (void)setMeContact:(id)arg1;
- (void)setMeContact:(id)arg1 footnoteTitle:(id)arg2 footnoteValue:(id)arg3;
- (void)setTitleToPhotoVerticalConstraint:(id)arg1;
- (void)showMenu;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)titleLabel;
- (id)titleToPhotoVerticalConstraint;
- (void)updateFontRelatedConstraints;

@end
