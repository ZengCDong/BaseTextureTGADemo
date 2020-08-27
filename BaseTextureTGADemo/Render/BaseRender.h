//
//  BaseRender.h
//  BaseTextureTGADemo
//
//  Created by fenwei on 2020/8/26.
//  Copyright © 2020 sxcoal.com. All rights reserved.
//

#import <Foundation/Foundation.h>
@import MetalKit;
@import simd;
NS_ASSUME_NONNULL_BEGIN

@interface BaseRender : NSObject<MTKViewDelegate>

- (nonnull instancetype)initWithMetalKitView:(nonnull MTKView *)mtkView;
@end

NS_ASSUME_NONNULL_END
