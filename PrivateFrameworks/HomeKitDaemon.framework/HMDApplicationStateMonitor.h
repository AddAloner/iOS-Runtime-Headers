/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BKSApplicationStateMonitor, NSObject<OS_dispatch_queue>;

@interface HMDApplicationStateMonitor : NSObject {
    BKSApplicationStateMonitor *_bkAppStateMonitor;
    id _notificationHandler;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain) BKSApplicationStateMonitor * bkAppStateMonitor;
@property(copy) id notificationHandler;
@property(retain) NSObject<OS_dispatch_queue> * notificationQueue;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

+ (id)applicationStateDescription:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)bkAppStateMonitor;
- (void)handleAppStateChangedInfo:(id)arg1;
- (id)init;
- (id)notificationHandler;
- (id)notificationQueue;
- (void)setBkAppStateMonitor:(id)arg1;
- (void)setNotificationHandler:(id)arg1 queue:(id)arg2;
- (void)setNotificationHandler:(id)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)start;
- (id)workQueue;

@end
