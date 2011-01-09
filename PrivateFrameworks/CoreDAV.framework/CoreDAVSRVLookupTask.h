/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString;



@interface CoreDAVSRVLookupTask : CoreDAVTask 
{
    NSString *_serviceString;
    NSString *_srvHost;
    NSInteger _srvPort;
}

@property <CoreDAVSVRLookupTaskDelegate> *delegate;


- (id)_parseDNSReply:(struct { NSUInteger x1; struct sockaddr {} *x2; struct { /* ? */ } *x3; struct { /* ? */ } **x4; struct { /* ? */ } **x5; struct { /* ? */ } **x6; struct { /* ? */ } **x7; }*)arg1;
- (void)srvLookupForHost:(id)arg1 forService:(id)arg2;
- (void)performCoreDAVTask;
- (void)finishWithSRVLookupResults:(id)arg1;
- (id)initWithServiceString:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)description;
- (void)dealloc;

@end