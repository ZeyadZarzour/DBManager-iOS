//
//  ViewController.h
//  SQLite3DBSample
//
//  Created by Radbonus on 15.05.17.
//  Copyright © 2017 Radbonus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DBManager.h"
#import "EditInfoViewController.h"


@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, EditInfoViewControllerDelegate>


@property (weak, nonatomic) IBOutlet UITableView *tblPeople;

@property (nonatomic, strong) DBManager *dbManager;

@property (nonatomic, strong) NSArray *arrPeopleInfo;

@property (nonatomic) int recordIDToEdit;

- (IBAction)addNewRecord:(id)sender;

-(void)loadData;

@end

