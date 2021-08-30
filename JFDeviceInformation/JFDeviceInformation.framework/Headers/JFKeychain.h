//
//  JFKeychain.h
//  JFDeviceInformation
//
//  Created by Elvis on 2021/4/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static NSString *serviceSuffix = @"_DevInfo";

@interface JFKeychain : NSObject

+ (NSString *)getContentForKey:(NSString *)key serviceName:(NSString *)serviceName error:(NSError **)error;

+ (BOOL)storeContent:(NSString *)content forKey:(NSString *)key serviceName:(NSString *)serviceName updateExisting:(BOOL)updateExisting error:(NSError **)error;

+ (BOOL)deleteContentForKey:(NSString *)key serviceName:(NSString *)serviceName error:(NSError **)error;
@end

NS_ASSUME_NONNULL_END
