//
//  ViewController.h
//  WebViewXSS
//
//  Created by Oliver Ng on 30/5/15.
//  Copyright (c) 2015 Security Compass. All rights reserved.
//  http://www.securitycompass.com
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

