//
//  BaseShaderTypes.h
//  BaseTextureTGADemo
//
//  Created by fenwei on 2020/8/26.
//  Copyright © 2020 sxcoal.com. All rights reserved.
//

#ifndef BaseShaderTypes_h
#define BaseShaderTypes_h
#include <simd/simd.h>

typedef enum BaseVertexInputIndex {
    
    //顶点
    BaseVertexInputIndexVertices   =0,
    
    //视图大小
    BaseVertexInputIndexViewportSize=1,
    
}BaseVertexInputIndex;
//纹理索引
typedef enum BaseTextureIndex
{
    BaseTextureIndexBaseColor = 0
}BaseTextureIndex;

//结构体
typedef struct {
    //像素空间位置
    vector_float2 position;
    
    //2D纹理
    vector_float2 textureCoordinate;
}BaseVertex;
#endif /* BaseShaderTypes_h */
