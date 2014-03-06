/*
 * cocos2d for iPhone: http://www.cocos2d-iphone.org
 *
 * Copyright (c) 2014 Cocos2D Authors
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


#import <Foundation/Foundation.h>
#import "CCRenderer.h"
#import "CCCache.h"


extern id CCBLENDMODE_CACHE;
extern id CCRENDERSTATE_CACHE;


@interface CCRenderer()

/// Current global shader uniform values.
@property(nonatomic, copy) NSDictionary *globalShaderUniforms;

/// Ensure that the specified renderstate is applied to GL.
-(void)setRenderState:(CCRenderState *)renderState;

/// Retrieve the current renderer for the current thread.
+(instancetype)currentRenderer;

/// Set the current renderer for the current thread.
+(void)bindRenderer:(CCRenderer *)renderer;

/// Render any currendly queued commands.
-(void)flush;

@end
