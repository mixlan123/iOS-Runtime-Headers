/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCLegacyNotificationActionsViewController : UIViewController <NCLegacyNotificationActionsViewDelegate, NCNotificationCustomContent> {
    <NCNotificationCustomContentDelegate> * _delegate;
    NCNotificationRequest * _notificationRequest;
}

@property (nonatomic, readonly) NSString *contentExtensionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationCustomContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NCNotificationRequest *notificationRequest;
@property (nonatomic) NCNotificationAction *presentationSourceAction;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (BOOL)allowManualDismiss;
- (unsigned int)customContentLocation;
- (BOOL)defaultContentHidden;
- (id)delegate;
- (BOOL)didReceiveNotificationRequest:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;
- (void)loadView;
- (void)notificationActionsView:(id)arg1 performAction:(id)arg2;
- (id)notificationRequest;
- (BOOL)performAction:(id)arg1 forNotification:(id)arg2;
- (BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (void)setDelegate:(id)arg1;

@end