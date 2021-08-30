//
//  DeviceInfo.h
//  DevicePlugin
//
//  Created by Elvis on 2019/11/15.
//  Copyright © 2019 agree. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

NSString *generateUUID(void); //生成UUID

/// 设备信息模型类
@interface DeviceInfo : NSObject

+ (DeviceInfo *)sharedInstance;

/// 应用设备唯一标识UUID+KeyChain
@property (nonatomic, strong, readonly) NSString *deviceID;

/// 应用设备唯一标识
@property (nonatomic, strong, readonly) NSString *bundleInentifier;

/// 状态栏高度
@property (nonatomic, readonly) CGFloat statusBarHeight;
/// 安全区域高度
@property (nonatomic, readonly) CGFloat safeAreaHeight;

/// 分辨率
@property (nonatomic, strong, readonly) NSString *deviceResolution;
@property (nonatomic, strong, readonly) NSDictionary *deviceResolutionInfo;

/// 电池容量
@property (nonatomic, strong, readonly) NSString *batteryCapacity; //暂未实现, 与安卓同步字段

/// 当前电池百分比🔋
@property (nonatomic, strong, readonly) NSString *batteryLevel;

/// 系统语言
@property (nonatomic, strong, readonly) NSString *systemLanguage;

/// 物理存储空间
@property (nonatomic, strong, readonly) NSString *storageSpaces;

/// 内存
@property (nonatomic, strong, readonly) NSString *memory;

/// 系统版本
@property (nonatomic, strong, readonly) NSString *systemVersion; ///e.g. 13.0

/// 系统名称
@property (nonatomic, strong, readonly) NSString *systemName; /// e.g. @"iOS"

/// 系统型号
@property (nonatomic, strong, readonly) NSString *systemModel; /// e.g. @"iPhone", @"iPod touch"

/// 设备名称
@property (nonatomic, strong, readonly) NSString *deviceName; /// e.g. @"Elvis"

/// 设备型号
@property (nonatomic, strong, readonly) NSString *deviceModel; /// e.g. @"iPhone 11 Pro Max"

/// 是否为越狱设备
@property (nonatomic, readonly) BOOL isJailbreakDevice;

/// IP地址
@property (nonatomic, strong, readonly) NSString *deviceIPAddress;

@end
NS_ASSUME_NONNULL_END
