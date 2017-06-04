//
//  ViewController.m
//  MHCoreSVPExample
//
//  Created by J on 2017/6/2.
//  Copyright © 2017年 J. All rights reserved.
//

#import "ViewController.h"
#import "MHCoreSVP.h"
#import "CoreSVP.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}
- (IBAction)showMessage:(id)sender {
    [MHCoreSVP showMHMsg:@"showMessage" andCompleteBlock:^{
        
    }];
}
static CGFloat progress = 0.0;
- (IBAction)showProgress:(id)sender {
    
    
    
}
- (IBAction)showError:(id)sender {
    [CoreSVP showSVPWithType:(CoreSVPTypeError) Msg:@"showsuccess" duration:2.0 allowEdit:NO beginBlock:nil completeBlock:nil];
}
- (IBAction)showsuccess:(id)sender {
    [CoreSVP showSVPWithType:(CoreSVPTypeSuccess) Msg:@"showsuccess" duration:2.0 allowEdit:NO beginBlock:nil completeBlock:nil];

}
- (IBAction)showInfo:(id)sender {
    [CoreSVP showSVPWithType:(CoreSVPTypeInfo) Msg:@"showInfo" duration:2.0 allowEdit:NO beginBlock:nil completeBlock:nil];
}
- (IBAction)showHud:(id)sender {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [MHCoreSVP hideMHHUD];
    });
    [MHCoreSVP showMHHUD];
}
- (IBAction)dissmiss:(id)sender {
    [MHCoreSVP hideMHHUD];
}



@end
