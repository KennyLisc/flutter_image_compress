//
// Created by cjl on 2018/9/8.
//

#import <Foundation/Foundation.h>


@interface CompressHandler : NSObject
+ (NSMutableArray *)compressWithData:(NSData *)data minWidth:(int)minWidth minHeight:(int)minHeight quality:(int)quality;
+ (NSMutableArray *)compressWithUIImage:(UIImage *)image minWidth:(int)minWidth minHeight:(int)minHeight quality:(int)quality;

+ (NSData *)compressDataWithUIImage:(UIImage *)image minWidth:(int)minWidth minHeight:(int)minHeight quality:(int)quality;
@end