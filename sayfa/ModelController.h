//
//  ModelController.h
//  sayfa
//
//  Created by Baran on 8/17/15.
//  Copyright (c) 2015 com.MyCodeIsWorking. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

