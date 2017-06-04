
#ifndef Base_h
#define Base_h

// 如果是调试模式(DEBUG 是调试模式下, 自带的宏)
#ifdef DEBUG
#define MHLog(...) NSLog(__VA_ARGS__);
#else
#define MHLog(...)
#endif

// 打印调用函数的宏
#define MHLogFunc MHLog(@"%s",__func__);

// 颜色
#define rgba(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define rgb(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]
#define randomColor rgb(arc4random_uniform(255.0), arc4random_uniform(255.0), arc4random_uniform(255.0))

// 屏幕尺寸相关
#define kScreenBounds [[UIScreen mainScreen] bounds]
#define kScreenWidth [[UIScreen mainScreen] bounds].size.width
#define kScreenHeight [[UIScreen mainScreen] bounds].size.height

// 弱引用
#define kWeakSelf __weak typeof(self) weakSelf = self;

#endif /* Base_h */