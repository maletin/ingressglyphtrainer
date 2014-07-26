//
//  IGTDrawableImageView.h
//  ingressglyphtrainer
//
//  Created by Matthew Nespor on 7/26/14.
//  Copyright (c) 2014 Matthew Nespor. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IGTDrawableView : UIView

@property (readonly) NSMutableSet* bezierPaths;
@property (strong, nonatomic) UIColor* drawingColor;

@end
