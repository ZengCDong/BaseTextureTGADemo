//
//  ViewController.m
//  BaseTextureTGADemo
//
//  Created by fenwei on 2020/8/26.
//  Copyright © 2020 sxcoal.com. All rights reserved.
//

#import "ViewController.h"
@import MetalKit;
@import simd;
#import "BaseRender.h"
@interface ViewController ()
{
    MTKView *_view;
    BaseRender *_renderer;
    
}
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    _view = (MTKView *)self.view;
    _view.device = MTLCreateSystemDefaultDevice();
    if(!_view.device)
     {
         NSLog(@"Metal is not supported on this device");
         return;
     }
    //2.创建Render
    _renderer = [[BaseRender alloc]initWithMetalKitView:_view];
    if(!_renderer)
     {
         NSLog(@"Renderer failed initialization");
         return;
     }
    [_renderer mtkView:_view drawableSizeWillChange:_view.drawableSize];
    _view.delegate = _renderer;
}


@end
