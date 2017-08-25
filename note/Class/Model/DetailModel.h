//
//  DetailModel.h
//  note
//
//  Created by apple on 2017/8/23.
//  Copyright © 2017年 apple. All rights reserved.
//

#import "BaseModel.h"
#import "ProjectModel.h"

@class ProjectModel;

@interface DetailModel : BaseModel

@property NSString *content;
@property NSString *money;
@property NSString *category;
@property NSString *dateTime;
@property NSString *note;
@property ProjectModel *projectModel;

@end

RLM_ARRAY_TYPE(DetailModel) //定义一个RLMArray<DetailModle> 类型