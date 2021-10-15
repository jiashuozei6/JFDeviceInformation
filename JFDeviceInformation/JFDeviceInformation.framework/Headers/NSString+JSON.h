//
//  NSString+JSON.h
//  JFGlobalFunctions
//
//  Created by Elvis on 2019/5/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, JFJsonStringType) {
  
  JFJsonStringTypeDictionary = 1,
  JFJsonStringTypeArray = 2,
  JFJsonStringTypeString = 3,
  JFJsonStringTypeNumber = 4
};

@interface NSString (JSON)

/**
 对象转JSON
 
 @param object 需要转换的对象
 @return JSON字符串
 */
+ (NSString *)JSONStringFromObject:(id)object;

/**
 JSON转对象
 
 @param jsonString 需要转换的JSON字符串
 @return 转化后的对象
 */
+ (id)objectFromJSONString:(NSString *)jsonString type:(JFJsonStringType)jsonStringType;

/**
 移除无效字符

 @param jsonString 待处理的json字符串
 @return 处理结果
 */
+ (NSString *)removeIllegalCharacterFromJSONString:(NSString *)jsonString;
@end

NS_ASSUME_NONNULL_END
