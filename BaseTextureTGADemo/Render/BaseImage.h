//
//  BaseImage.h
//  BaseTextureTGADemo
//
//  Created by fenwei on 2020/8/26.
//  Copyright © 2020 sxcoal.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaseImage : NSObject

//图片的宽高,以像素为单位
@property(nonatomic,readonly)NSUInteger width;
@property(nonatomic,readonly)NSUInteger height;

//图片数据每像素32bit,以BGRA形式的图像数据(相当于MTLPixelFormatBGRA8Unorm)
@property(nonatomic,readonly)NSData *data;

//通过加载一个简单的TGA文件初始化这个图像.只支持32bit的TGA文件
-(nullable instancetype) initWithTGAFileAtLocation:(nonnull NSURL *)location;
@end

NS_ASSUME_NONNULL_END
