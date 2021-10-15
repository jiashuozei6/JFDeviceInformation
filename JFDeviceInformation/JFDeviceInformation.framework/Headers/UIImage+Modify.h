//
//  UIImage+Modify.h
//  JFGlobalFunctions
//
//  Created by Elvis on 2019/5/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (Modify)

/**
 截取当前image对象rect区域内的图像
 
 @param rect 图片大小区域
 @return 截取后图像
 */
- (UIImage *)cropImageWithRect:(CGRect)rect;

/**
 压缩图像到指定大小
 
 @param size 指定大小
 @return 图片对象
 */
- (UIImage *)rescaleImageToSize:(CGSize)size;

/**
 压缩图像到指定大小
 
 @param name 图片名称
 @param size 指定大小
 @return 图片对象
 */
+ (UIImage *)imageNamed:(NSString *)name size:(CGSize)size;

/**
 压缩图片至指定像素
 
 @param toPX 指定像素
 @return 图片对象
 */
- (UIImage *)rescaleImageToPX:(CGFloat )toPX;

/**
 在指定的size里面生成一个平铺的图片
 
 @param size 指定大小
 @return 图片对象
 */
- (UIImage *)getTiledImageWithSize:(CGSize)size;

/**
 将UIView转化为UIImage
 
 @param view 待转化的UIView对象
 @return UIImage对象
 */
+ (UIImage *)imageFromView:(UIView *)view;

/**
 合并图像
 
 @param firstImage 合并第一张图片
 @param secondImage 合并第二张图片
 @return 合并后图片对象
 */
+ (UIImage*)mergeImage:(UIImage*)firstImage withImage:(UIImage*)secondImage;

/**
 创建缩略图
 
 @param image 图片文件
 @param maxWidth 最大宽度
 @param maxHeight 最大高度
 @return 缩略图
 */
+ (UIImage*)downscaleImageIfNecessary:(UIImage*)image maxWidth:(float)maxWidth maxHeight:(float)maxHeight;



@end

NS_ASSUME_NONNULL_END
