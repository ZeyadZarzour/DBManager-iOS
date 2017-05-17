//
//  EditInfoViewController.h
//  SQLite3DBSample
//
//  Created by Radbonus on 16.05.17.
//  Copyright © 2017 Radbonus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DBManager.h"

@protocol EditInfoViewControllerDelegate

-(void)editingInfoWasFinished;

@end

@interface EditInfoViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *txtFirstname;

@property (weak, nonatomic) IBOutlet UITextField *txtLastname;

@property (weak, nonatomic) IBOutlet UITextField *txtAge;

@property (nonatomic, strong) DBManager *dbManager;

@property (nonatomic, strong) id<EditInfoViewControllerDelegate> delegate;

@property (nonatomic) int recordIDToEdit;

- (IBAction)saveInfo:(id)sender;

@end


