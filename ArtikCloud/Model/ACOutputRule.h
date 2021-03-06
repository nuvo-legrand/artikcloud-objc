#import <Foundation/Foundation.h>
#import "ACObject.h"

/**
* ARTIK Cloud API
* No descripton provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: 2.0.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#import "ACRuleError.h"
#import "ACRuleWarningOutput.h"


@protocol ACOutputRule
@end

@interface ACOutputRule : ACObject


@property(nonatomic) NSString* aid;

@property(nonatomic) NSNumber* createdOn;

@property(nonatomic) NSString* _description;

@property(nonatomic) NSNumber* enabled;

@property(nonatomic) ACRuleError* error;

@property(nonatomic) NSString* _id;

@property(nonatomic) NSNumber* index;

@property(nonatomic) NSNumber* invalidatedOn;

@property(nonatomic) NSNumber* languageVersion;

@property(nonatomic) NSNumber* modifiedOn;

@property(nonatomic) NSString* name;

@property(nonatomic) NSDictionary<NSString*, NSObject*>* rule;

@property(nonatomic) NSString* uid;

@property(nonatomic) ACRuleWarningOutput* warning;

@end
