//
//  ImagesCollectionCellModel.h
//  IGListKitDemo
//
//  Created by gxy on 2018/5/30.
//  Copyright © 2018年 gxy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIImage.h>

@interface ImagesCollectionCellModel : NSObject
@property (nonatomic,copy) NSArray<UIImage *> *images;
-(instancetype)initWithImages:(NSArray<NSString *> *)urls;
@end
