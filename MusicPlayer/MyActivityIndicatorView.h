//
//  MyActivityIndicatorView.h
//  MusicPlayer
//
//  Created by bmxstudio04 on 10/12/16.
//  Copyright © 2016 bmxstudio04. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyActivityIndicatorView : UIActivityIndicatorView
+(void) startAnimatingInView:(UIView*)view;
+(void) stopAnimating;

@end
