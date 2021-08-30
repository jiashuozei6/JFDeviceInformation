//
//  JFLog.h
//  JFGlobalFunctions
//
//  Created by Elvis on 2019/5/28.
//

#import <UIKit/UIKit.h>

/**
 打印日志标记
 
 - JFLogFlagException: 原生程序崩溃日志
 - JFLogFlagError: 原生错误日志
 - JFLogFlagWarning: 原生警告日志
 - JFLogFlagJS: JS记录日志
 - JFLogFlagInfo: 原生信息日志
 - JFLogFlagDebug: 原生调试日志
 */
typedef NS_ENUM(NSUInteger, JFLogFlag) {
  
  JFLogFlagException = 1,
  JFLogFlagError = 2,
  JFLogFlagWarning = 3,
  JFLogFlagJS = 4,
  JFLogFlagInfo = 5,
  JFLogFlagDebug = 6
};

/**
 打印日志级别
 
 - JFLogLevelOff: 关闭Log
 - JFLogLevelException: 打印崩溃级别Log
 - JFLogLevelError: 打印Error以上级别Log
 - JFLogLevelWarning: 打印Warn以上级别Log
 - JFLogLevelInfo: 打印Info以上级别Log
 - JFLogLevelDebug: 打印Debug以上级别Log
 */
typedef NS_ENUM(NSUInteger, JFLogLevel) {
  
  JFLogLevelOff = 100,
  JFLogLevelException = 101,
  JFLogLevelError = 102,
  JFLogLevelWarning = 103,
  JFLogLevelInfo = 104,
  JFLogLevelDebug = 105
};

/**
 打印Log全局宏

 @param format Log内容样式
 @param ... 打印参数
 @return 打印输出
 */
#define JFDebugLog(format, ...) JFFunctionLog(__FILE__, __LINE__, __FUNCTION__, JFLogFlagDebug, format, ##__VA_ARGS__);
#define JFInfoLog(format, ...) JFFunctionLog(__FILE__, __LINE__, __FUNCTION__, JFLogFlagInfo, format, ## __VA_ARGS__);
#define JFWarningLog(format, ...) JFFunctionLog(__FILE__, __LINE__, __FUNCTION__, JFLogFlagWarning, format, ## __VA_ARGS__);
#define JFErrorLog(format, ...) JFFunctionLog(__FILE__, __LINE__, __FUNCTION__, JFLogFlagError, format, ## __VA_ARGS__);
#define JFExceptionLog(format, ...) JFFunctionLog(__FILE__, __LINE__, __FUNCTION__, JFLogFlagException, format, ## __VA_ARGS__);
#define JFJSLog(format, ...) JFFunctionLog(__FILE__, __LINE__, __FUNCTION__, JFLogFlagJS, format, ## __VA_ARGS__);

NS_ASSUME_NONNULL_BEGIN

/**
 函数方式复写NSLog
 
 @param file 文件
 @param lineNumber 行号
 @param functionName 方法名
 @param format 打印内容
 @param ... 参数
 */
void JFFunctionLog(const char *file, int lineNumber, const char *functionName, JFLogFlag flag, NSString *format, ...);

void setLogLevel(JFLogLevel logLevel);

@interface JFLog : NSObject

@end

NS_ASSUME_NONNULL_END
