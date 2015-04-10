//
//  ViewController.h
//  WebViewXSS
//
//  Created by Oliver and Vienne Ng on 9/4/15.
//  Copyright (c) 2015 ONG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIWebView *myWebView;
@property (weak, nonatomic) IBOutlet UITextField *nameTxtFld;

- (IBAction)loadWebViewLocal:(id)sender;
- (IBAction)loadWebViewInternet:(id)sender;
- (IBAction)testXSS:(id)sender;
- (IBAction)testSOPAppleWeb:(id)sender;
- (IBAction)testSOPAboutBlank:(id)sender;
- (IBAction)testSOPFromBundle:(id)sender;
- (IBAction)loadSafariInternet:(id)sender;

@end

