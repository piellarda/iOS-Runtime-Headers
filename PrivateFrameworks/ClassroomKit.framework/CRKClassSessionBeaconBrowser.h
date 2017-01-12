/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKClassSessionBeaconBrowser : NSObject <WPDeviceScannerDelegate, WPZoneTrackerDelegate> {
    NSSet * _controlGroupIdentifiers;
    <CRKClassSessionBeaconBrowserDelegate> * _delegate;
    BOOL  _isBrowsing;
    BOOL  _isScanning;
    NSSet * _organizationUUIDs;
    WPDeviceScanner * mDeviceScanner;
    int  mIncreasedScanRequestCount;
    NSMutableSet * mScanningZones;
    WPZoneTracker * mZoneTracker;
}

@property (nonatomic, copy) NSSet *controlGroupIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKClassSessionBeaconBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isBrowsing;
@property (nonatomic) BOOL isScanning;
@property (nonatomic, copy) NSSet *organizationUUIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)controlGroupIdentifiers;
- (void)dealloc;
- (id)delegate;
- (void)delegateDidFailWithError:(id)arg1;
- (void)delegateDidFindClassSession:(id)arg1 flags:(unsigned short)arg2;
- (void)deviceScannerDidUpdateState:(id)arg1;
- (void)increaseScanFrequencyForDuration:(double)arg1;
- (void)increasedScanDurationElapsed;
- (id)init;
- (BOOL)isBrowsing;
- (BOOL)isScanning;
- (id)organizationUUIDs;
- (id)organizationUUIDsMatchingZoneData:(id)arg1;
- (void)scanner:(id)arg1 didFailToRegisterDevices:(id)arg2 withError:(id)arg3;
- (void)scanner:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)scanner:(id)arg1 foundRequestedDevices:(id)arg2;
- (void)setControlGroupIdentifiers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsBrowsing:(BOOL)arg1;
- (void)setIsScanning:(BOOL)arg1;
- (void)setOrganizationUUID:(id)arg1;
- (void)setOrganizationUUIDs:(id)arg1;
- (void)startBrowsing;
- (void)startInitialScan;
- (void)startScanningForDevicesInZone:(id)arg1;
- (id)stateDictionary;
- (void)stopBrowsing;
- (void)stopScanningForDevicesInAllZones;
- (void)stopScanningForDevicesInZone:(id)arg1;
- (void)updateScanner;
- (void)updateZones;
- (id)zoneDataForOrganizationUUID:(id)arg1;
- (void)zoneTracker:(id)arg1 didFailToRegisterZones:(id)arg2 withError:(id)arg3;
- (void)zoneTracker:(id)arg1 enteredZone:(id)arg2;
- (void)zoneTracker:(id)arg1 exitedZone:(id)arg2;
- (void)zoneTrackerDidUpdateState:(id)arg1;

@end