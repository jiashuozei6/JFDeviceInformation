//
//  DeviceConst.h
//  JFDeviceInformation
//
//  Created by Elvis on 2021/4/25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, JFCode)  {
    
    JFCodeSuccess = 0, // 成功回调通用
    JFParametersFormatError = 6100, //入参格式错误
    JFParametersCannotBeNull = 6101, //入参不能为空
    JFCodeErrorUnknown = 6102, // 未知错误
    JFCodeError = 6103 // 回调格式错误
};

typedef NS_ENUM(NSUInteger, JFPermission)  {
    
    JFPermissionAllowed = 7000, //允许访问相关权限
    JFPermissionNoAppleMusicUsage = 7001, //音乐
    JFPermissionNoBluetoothPeripheralUsage = 7002, //蓝牙
    JFPermissionNoCalendarsUsage = 7003, //日历
    JFPermissionNoCameraUsage = 7004, //相机
    JFPermissionNoContactsUsage = 7005, //通讯录
    JFPermissionNoFaceIDUsage = 7006, //Face ID
    JFPermissionNoHealthShareUsage = 7007, //您的健康分享
    JFPermissionNoHealthUpdateUsage = 7008, //健康更新s
    JFPermissionNoHomeKitUsage = 7009, //家庭媒体管理
    JFPermissionNoLocationUsage = 7010, //定位
    JFPermissionNoMicrophoneUsage = 7011, //麦克风
    JFPermissionNoMotionUsage = 7012, //运动与健身
    JFPermissionNoPhotoLibraryAddUsage = 7013, //相册添加
    JFPermissionNoPhotoLibraryUsage = 7014, //相册
    JFPermissionNoRemindersUsage = 7015, //提醒事项
    JFPermissionNoSiriUsage = 7016, //Siri
    JFPermissionNoSpeechRecognitionUsage = 7017, //语音识别
    JFPermissionNoVideoSubscriberAccountUsage = 7018 //TV
};

#pragma mark - Extern String
/** 文件路径标题头 */
UIKIT_EXTERN NSString * const kJFPathProjectHeader; //@"project://"
UIKIT_EXTERN NSString * const kJFPathHomeHeader; //@"home://"
UIKIT_EXTERN NSString * const kJFPathDocumentHeader; //@"document://"
UIKIT_EXTERN NSString * const kJFPathLibraryHeader; //@"library://"
UIKIT_EXTERN NSString * const kJFPathCachesHeader; //@"caches://"
UIKIT_EXTERN NSString * const kJFPathTempHeader; //@"temp://"
UIKIT_EXTERN NSString * const kJFPathFileHeader; //@"file://"
UIKIT_EXTERN NSString * const kJFHttpHeader; //@"http://"
UIKIT_EXTERN NSString * const kJFHttpsHeader; //@"https://"
UIKIT_EXTERN NSString * const kJFPathUserHeader; //@"/User"
UIKIT_EXTERN NSString * const kJFPathVarHeader; //@"/var"

/** 日期格式 */
UIKIT_EXTERN NSString * const kJFDateFormatterYMD_HMS; // 2020-12-12 12:12:12
UIKIT_EXTERN NSString * const kJFDateFormatterYMD; // 2020-12-12

#pragma mark - Localization String Key
/** 为本地化字符串 */
UIKIT_EXTERN NSString * const kJFStringOK; //@"OK";
UIKIT_EXTERN NSString * const kJFStringError; //@"Error";
UIKIT_EXTERN NSString * const kJFStringErrorUnknown; //@"ErrorUnknown";

UIKIT_EXTERN NSString * const kJFStringSuccess; //@"Success";
UIKIT_EXTERN NSString * const kJFStringFailure; //@"Failure";

UIKIT_EXTERN NSString * const kJFStringBack; //@"Back";
UIKIT_EXTERN NSString * const kJFStringCancel; //@"Cancel";
UIKIT_EXTERN NSString * const kJFStringConfirm; //@"Confirm";

UIKIT_EXTERN NSString * const kJFStringQuit; //@"Quit";
UIKIT_EXTERN NSString * const kJFStringDelete; //@"Delete";

UIKIT_EXTERN NSString * const kJFStringPrompt; //@"Prompt";

UIKIT_EXTERN NSString * const kJFStringNoAccess; //@"NoAccess";
UIKIT_EXTERN NSString * const kJFStringNoPhotosAccess; //@"NoPhotosAccess";
UIKIT_EXTERN NSString * const kJFStringNoCameraAccess; //@"NoCameraAccess";
UIKIT_EXTERN NSString * const kJFStringNoLocationAccess; //@"NoLocationAccess";
UIKIT_EXTERN NSString * const kJFStringNoContactsAccess; // @"NoContactsAccess";
UIKIT_EXTERN NSString * const kJFStringNoCalendarAccess; //@"NoCalendarAccess";
UIKIT_EXTERN NSString * const kJFStringNoAudioAccess; //@"NoAudioAccess";

UIKIT_EXTERN NSString * const kJFStringParametersCannotBeNull; //@"ParametersCannotBeNull";
UIKIT_EXTERN NSString * const kJFStringParametersFormatError; //@"ParametersFormatError";

UIKIT_EXTERN NSString * const kJFJFDeviceInformation; //@"JFDeviceInformation";
#pragma mark - Objective-C对象校验
/// 验证字符串合法性
/// @param string 需要验证的字符串
/// @return 验证结果. YES : 字符串不为空且有值 ; NO : 字符串为空, 或无值
BOOL kJFValidationString(NSString *string);

/**
 验证字典合法性
 
 @param dictionary 待验证字典
 @return 验证结果
 */
BOOL kJFValidationDictionary(NSDictionary *dictionary);

/**
 验证数组合法性
 
 @param array 待验证的数组
 @return 验证结果
 */
BOOL kJFValidationArray(NSArray *array);

/**
 验证数字合法性
 
 @param number 待验证的数组
 @return 验证结果
 */
BOOL kJFValidationNumber(id number);

/**
 返回安全字符串
 
 @param string 待验证字符串
 @return 安全字符串
 */
NSString *kJFSafeString(NSString * _Nullable string);

/// 验证二进制合法性
/// @param data 待验证二进制
///kJFLocalizedStringInFrameworkBundleionData(NSData *data);

/// 验证传入数据是否为可靠数据类型
/// @param dataObject 待验证数据
/// @return 验证结果
BOOL kJFValidationDataObject(id dataObject);

/**
 验证传入数据是否为字典或数组
 
 @param dataObject 待验证数据
 @return 验证结果
 */
BOOL kJFObjectData(id dataObject);

#pragma mark - 数据转换
/// 将Objective-C对象转化为JSON字符串
/// @param object Objective-C对象
/// @return JSON字符串
NSString *kJFJSONStringFromObject(id object);

/// 将JSON字符串转化为Objective-C对象
/// @param jsonString JSON字符串
/// @return Objective-C对象
id kJFObjectFromJsonString(NSString *jsonString);

#pragma mark - 提示
/**
 AlertAction按钮点击事件
 
 @param action 点击事件
 */
typedef void (^AlertHandler)(UIAlertAction *action);

/**
 提示框/弹出框
 
 @param title 标题
 @param message 消息
 @param cancelTitle 取消按钮
 @param cancelAction 点击事件
 @param otherTitle 其他按钮
 @param otherAction 点击事件
 */
void alertHandle(NSString *title, NSString * _Nullable message, NSString *cancelTitle, AlertHandler _Nullable cancelAction, NSString * _Nullable otherTitle, AlertHandler _Nullable otherAction);

/**
 提示框/弹出框
 
 @param title 标题
 @param message 消息
 @param cancelTitle 取消按钮
 */
void alert(NSString *title, NSString *message, NSString *cancelTitle);

#pragma mark - 应用国际化

/// 从全局类获取本地化字符串
/// @param key 本地化字符串Key
/// @param value 描述
NSString *kJFLocalizedStringInDeviceInformationBundle(NSString *key, NSString * _Nullable value);

/** 选择的语言环境 */
UIKIT_EXTERN NSString * const kJFLanguageSelected; //@"kJFLanguageSelected"
/** 英文语言环境 */
UIKIT_EXTERN NSString * const kJFLanguage_EN; //@"en"
/** 繁体中文的语言环境 */
UIKIT_EXTERN NSString * const kJFLanguage_TC; //@"tc"
/**简体中文的语言环境 */
UIKIT_EXTERN NSString * const kJFLanguage_SC; //@"sc"

/**
 应用语言
 
 @return 应用语言简写
 */
NSString *kJFGetAppLanguage(void);

/**
 设置系统语言
 
 @param language 语言简写
 */
void kJFSetAppLanguage(NSString *language);

/// 根据Bundle获取本地化字符串
/// @param string 本地化字符串Key
/// @param stringFile 本地化文件名
/// @param bundle bundle包类
NSString *kJFLocalizedStringWithBundle(NSString *string, NSString *stringFile, NSBundle *bundle);

/// 根据Framework及Bundle获取本地化字符串
/// @param framework framework名称
/// @param resource bundle名称
/// @param key 本地化字符串Key
/// @param value 描述
NSString *kJFLocalizedStringInFrameworkBundle(NSString *framework, NSString *resource, NSString *key, NSString * _Nullable value);
#pragma mark - 计算
/// 把字节数转换为字符串
/// @param byteLength 字节长度
///  @return 转换后字符串
NSString *kJFCalculateDataSizeToString(long long byteLength);

/// 计算文字大小
/// @param string 文字内容
/// @param rectSize 约束大小
/// @param font 字体
CGSize kJFCalculateStringSizeInSize(NSString *string, CGSize rectSize, UIFont *font);
#pragma mark - Device Application & Window & Controller & View
UIApplication *JFSharedApplication(void);

UIWindow *JFSharedApplicationKeyWindow(void);

UIViewController *JFPresentViewController(void);

UIView *JFStatusBar(void);
#pragma mark - 线程 && 队列
/// 主线程
dispatch_queue_t kJFMainQueue(void);

/// 异步主线程
/// @param block 回调
void kJFDispatchMainAsync(dispatch_block_t block);
#pragma mark - Colors
UIColor *kJFClearColor(void);
UIColor *kJFWhiteColor(void);

UIColor *kJFTextColor(void);
UIColor *kJFLightTextColor(void);

void kJFSetStatusBarBackgroundColor(UIColor *color);

/// 从RGB转UIColor,带透明度
/// @param red 红(0~255)
/// @param green 绿(0~255)
/// @param blue 蓝(0~255)
/// @param alpha 透明度(0~1)
/// @return 转换后颜色
UIColor *kJFColorWith255RGBA(CGFloat red, CGFloat green, CGFloat blue, CGFloat alpha);

/// 从Hex Int转UIColor
/// @param hexNumber 十进制hex码
UIColor *kJFColorWithHexNumber(UInt32 hexNumber);

/// 从Hex转UIColor,带透明度
/// @param hexString Hex字符串
/// @return 转换后颜色
UIColor *kJFColorWithHexString(NSString *hexString);
#pragma mark - Bundle Read

NSBundle *kJFGlobalBundle(void);

NSBundle *kJFBundleInFrameworkWithName(NSString *frameworkName, NSString *bundleName);

/// 从全局类库内获取图片, 仅支持读取JFDeviceInformation.bundle内图片
/// @param imageName 图片名称
UIImage *kJFImageName(NSString *imageName);

/// 根据Bundle, 读取内部图片
/// @param bundle bundle及framework名称, 名称相同
/// @param imageName 图片名
/// @return 读取的图片
UIImage *kJFImageNamedInbundle(NSString *bundle, NSString *imageName);

/// 根据Framework 及 Bundle, 读取内部图片
/// @param framework framework 名称
/// @param bundle bundle 名称
/// @param imageName imageName 图片名
UIImage *kJFImageNamedInFrameworkBundle(NSString *framework, NSString *bundle, NSString *imageName);

/// 根据颜色获取图片
/// @param color 颜色色值
UIImage *kJFImageWithColor(UIColor *color);

/// 根据Base64字符获取图片
/// @param base64String base64字符串
UIImage *kJFImageWithBase64String(NSString *base64String);
@interface DeviceConst : NSObject

@end

NS_ASSUME_NONNULL_END
