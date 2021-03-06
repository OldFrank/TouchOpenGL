//
//  PopTipDocument.h
//  TouchOpenGL
//
//  Created by Aaron Golden on 3/21/11.
//  Copyright 2011 Aaron Golden. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without modification, are
//  permitted provided that the following conditions are met:
//
//     1. Redistributions of source code must retain the above copyright notice, this list of
//        conditions and the following disclaimer.
//
//     2. Redistributions in binary form must reproduce the above copyright notice, this list
//        of conditions and the following disclaimer in the documentation and/or other materials
//        provided with the distribution.
//
//  THIS SOFTWARE IS PROVIDED BY AARON GOLDEN ``AS IS'' AND ANY EXPRESS OR IMPLIED
//  WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
//  FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL AARON GOLDEN OR
//  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
//  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
//  ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
//  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
//  ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//  The views and conclusions contained in the software and documentation are those of the
//  authors and should not be interpreted as representing official policies, either expressed
//  or implied, of Aaron Golden.

#import <Cocoa/Cocoa.h>

@class CGeometryRenderer;
@class CSceneRendererView;

@interface CModelDocument : NSDocument {
}

@property (nonatomic, strong) CGeometryRenderer *renderer;
@property (nonatomic, strong) IBOutlet CSceneRendererView *mainView;

@property (nonatomic, assign) GLfloat roll;
@property (nonatomic, assign) GLfloat pitch;
@property (nonatomic, assign) GLfloat yaw;
@property (nonatomic, assign) GLfloat scale;

@property (nonatomic, assign) GLfloat cameraX;
@property (nonatomic, assign) GLfloat cameraY;
@property (nonatomic, assign) GLfloat cameraZ;

@property (nonatomic, assign) GLfloat lightX;
@property (nonatomic, assign) GLfloat lightY;
@property (nonatomic, assign) GLfloat lightZ;

@property (nonatomic, strong) NSArray *programs;
@property (nonatomic, strong) NSString *defaultProgram;

@property (readwrite, nonatomic, strong) NSArray *materials;


@end
