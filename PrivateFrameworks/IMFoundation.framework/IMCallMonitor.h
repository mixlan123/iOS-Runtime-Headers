/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSDate;

@interface IMCallMonitor : NSObject {
    id _callCenter;
    NSDate *_lastCallDate;
    bool_wasOnCall;
}

@property(retain,readonly) NSDate * dateLastCallEnded;
@property(readonly) bool isOnCall;

+ (id)sharedInstance;

- (id)dateLastCallEnded;
- (void)dealloc;
- (id)init;
- (bool)isOnCall;

@end