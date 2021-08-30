//
//  DeviceDefines.h
//  JFGlobalFunctions
//
//  Created by Elvis on 2019/4/16.
//

#ifndef DeviceDefines_h
#define DeviceDefines_h

/** UIDevice单例对象 */
#define kJFCurrentDevice [UIDevice currentDevice]
/** 获取屏幕的大小 */
#define kJFScreenFrame  [[UIScreen mainScreen] bounds]
/** NSUserDefaults单例对象 */
#define kJFUserDefaults [NSUserDefaults standardUserDefaults]

/** 应用支持最低系统的版本号 */
#define kJFMinimumOSVersion 9.0

/// 弱引用
#define WeakObject(object) autoreleasepool{} __weak typeof(object) object##Weak = object;
/// 强引用
#define StrongObject(object) autoreleasepool{} __strong typeof(object) object = object##Weak;


/** 小屏幕 (3.5寸屏幕) iPhone (4, 4s, ...) */
#define kJFiPhoneScreen3_5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

/** 小屏幕 (4寸屏幕) iPhone (5, 5s, SE, ...) */
#define kJFiPhoneScreen4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

/** (4.7寸屏幕) iPhone (6, 7, 8, ...) */
#define kJFiPhoneScreen4_7 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size)) : NO)

/** (5.5寸屏幕) iPhone (6 Plus, 7 Plus, 8 Plus, ...) */
#define kJFiPhoneScreen5_5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size)) : NO)

/** 刘海屏 ( > 5.5寸屏幕) iPhone (X, XR, XS, XS MAX, ...) */
#define kJFiPhoneScreenAbove5_5 \
({BOOL screenAbove5_5 = NO;\
if (@available(iOS 11.0, *)) {\
  screenAbove5_5 = JFSharedApplicationKeyWindow().safeAreaInsets.bottom > 0.0;\
}\
(screenAbove5_5);})

#define kJFIsLandscapce UIInterfaceOrientationIsLandscape([[UIApplication sharedApplication] statusBarOrientation])

/** 导航栏高度 */
#define kJFNaviagtionHeight 44.0f
//#define kJFNaviagtionHeight self.navigationController.navigationBar.frame.size.height

/** 状态栏+导航栏高度 */
#define kJFNaviagtionAndStatusBarHeight (kJFStatusBarHeight + kJFNaviagtionHeight)

/** 状态栏高度 */
#define kJFStatusBarHeight (kJFiPhoneScreenAbove5_5 ? 44.0f : 20.0f) //[UIApplication sharedApplication].statusBarFrame.size.height

/** 竖屏状态下刘海屏安全高度 */
#define kJFSafeAreaHeight (kJFiPhoneScreenAbove5_5 ? 34.0f : 0.0f)

/** 安全区域+TabBar高度 */
#define kJFSafeAreaAndTabBarHeight (kJFiPhoneScreenAbove5_5 ? 83.0f : 49.0f)

/** 获取屏幕的高度 */
#define kJFScreenHeight [[UIScreen mainScreen] bounds].size.height
#define kJFScreenHeightScale kJFScreenHeight / 1334.0
/** 获取屏幕的宽度 */
#define kJFScreenWidth  [[UIScreen mainScreen] bounds].size.width
#define kJFScreenWidthScale kJFScreenWidth / 750.0

#endif /* DeviceDefines_h */
