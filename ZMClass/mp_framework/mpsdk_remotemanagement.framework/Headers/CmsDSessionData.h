/**
 *  Copyright (c) 2018, MasterCard International Incorporated and/or its
 *  affiliates. All rights reserved.
 *
 *  The contents of this file may only be used subject to the MasterCard
 *  Mobile Payment SDK for MCBP and/or MasterCard Mobile MPP UI SDK
 *  Materials License.
 *
 *  Please refer to the file LICENSE.TXT for full details.
 *
 *  TO THE EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS", WITHOUT
 *  WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 *  WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NON INFRINGEMENT. TO THE EXTENT PERMITTED BY LAW, IN NO EVENT SHALL
 *  MASTERCARD OR ITS AFFILIATES BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 *  IN THE SOFTWARE.
 **/

// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from CmsDSessionData.djinni

#import <Foundation/Foundation.h>
@class CmsDSessionData;
@class CmsDSessionData;



#import "mpsdk_componentinterface/SessionData.h"

/**
 * Auto-generated Djinni interface for ::mpsdk::remotemanagement::json::session::CmsDSessionData_t
 * 
 * Class represents the json structure of a session used in communication between Cms-D and
 * remote management library.
 * 
 */
@interface CmsDSessionData : NSObject<SessionData>

- (id _Nonnull)initWithFromJSONData:(NSString* _Nonnull)fromJSONData;

- (NSString* _Nonnull)getVersion;

/**
 * 
 * @param version Version number of the Mobile Payment APIs. This is not
 * related to the version of this document.Max Length: 16
 * 
 */
- (void)setVersion:(NSString* _Nonnull)version;

/**
 * 
 * @returns arrays of utils of session code
 * 
 */
- (NSData* _Nonnull)getSessionCode;

/**
 * 
 * @param sessionCode The remote management session code used by the Mobile
 * Payment App to generate an authentication code when communicating
 * with the Credentials Management (Dedicated).Max Length: 64
 * 
 */
- (void)setSessionCode:(NSData* _Nonnull)sessionCode;

/**
 * 
 * @returns expiryTimestamp as String
 * 
 */
- (NSString* _Nonnull)getExpiryTimestamp;

/**
 * 
 * @param expiryTimestamp The date/time when the remote management session code
 * will expire. In ISO 8601 format: yyyy-MM-dd'T'HH:mm:ssZ. Max Length:
 * 28
 * 
 */
- (void)setExpiryTimestamp:(NSString* _Nonnull)expiryTimestamp;

/**
 * 
 * @returns The number of seconds after which the remote management
 * session code will expire after first use.
 * 
 */
- (int32_t)getValidForSeconds;

/**
 * 
 * @param validForSeconds The number of seconds after which the remote management
 * session code will expire after first use. Max Length: 16
 * 
 */
- (void)setValidForSeconds:(int32_t)validForSeconds;

/**
 * 
 * @returns pendingAction as String
 * 
 */
- (NSString* _Nullable)getPendingAction;

/**
 * 
 * @param pendingAction The pending action requested by the Credentials
 * Management (Dedicated) for a Token on the Mobile Payment App. Max
 * Length:64
 * 
 */
- (void)setPendingAction:(NSString* _Nullable)pendingAction;

- (NSString* _Nullable)getTokenUniqueReference;

/**
 * 
 * @param tokenUniqueReference The Token Credential on which the action is requested.
 * Must be a valid reference as assigned by the Digitization
 * Service.
 * Max Length: 64
 * 
 */
- (void)setTokenUniqueReference:(NSString* _Nullable)tokenUniqueReference;

/**
 * 
 * Returns equivalent CmsDSessionData_t
 * object from given json string.
 * @param data Json string as byte[].
 * @returns RemoteManagementSessionData object.
 * 
 */
+ (CmsDSessionData* _Nonnull)valueOf:(NSData* _Nonnull)data;

/**
 * 
 * Returns json string.
 * @returns Json string.
 * 
 */
- (NSString* _Nonnull)toJsonString;

- (NSString* _Nonnull)toString;

@end