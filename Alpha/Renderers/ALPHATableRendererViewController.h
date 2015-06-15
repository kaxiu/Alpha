//
//  ALPHATableRendererViewController.h
//  UICatalog
//
//  Created by Dal Rupnik on 29/05/15.
//  Copyright (c) 2015 Unified Sense. All rights reserved.
//

#import "ALPHADataRenderer.h"
#import "ALPHAViewController.h"
#import "ALPHAScreenModel.h"

@interface ALPHATableRendererViewController : UITableViewController <ALPHADataRenderer>

#pragma mark - ALPHADataRenderer

@property (nonatomic, weak) id <ALPHAViewControllerDelegate> delegate;

@property (nonatomic, strong) ALPHAScreenModel* screenModel;

@property (nonatomic, strong) id<ALPHASerializableItem> object;

@property (nonatomic, copy) ALPHARequest *request;

@property (nonatomic, strong) id<ALPHADataSource> source;

@property (nonatomic, strong) ALPHATheme *theme;

@end