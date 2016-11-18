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



@protocol ACUnregisterDeviceResponse
@end

@interface ACUnregisterDeviceResponse : ACObject

/* Device certificate information. [optional]
 */
@property(nonatomic) NSString* certificateInfo;
/* Certificate's signature. [optional]
 */
@property(nonatomic) NSString* certificateSignature;
/* Device created on date. [optional]
 */
@property(nonatomic) NSNumber* createdOn;
/* Device type id. [optional]
 */
@property(nonatomic) NSString* dtid;
/* External ID of the device. [optional]
 */
@property(nonatomic) NSString* eid;
/* Device id. [optional]
 */
@property(nonatomic) NSString* _id;
/* Device manifest version. [optional]
 */
@property(nonatomic) NSNumber* manifestVersion;
/* Device manifest version policy. [optional]
 */
@property(nonatomic) NSString* manifestVersionPolicy;
/* Device name. [optional]
 */
@property(nonatomic) NSString* name;
/* Device need provider auth. [optional]
 */
@property(nonatomic) NSNumber* needProviderAuth;
/* User id. [optional]
 */
@property(nonatomic) NSString* uid;

@end
