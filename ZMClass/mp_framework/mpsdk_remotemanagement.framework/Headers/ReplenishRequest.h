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
// This file generated by Djinni from ReplenishRequest.djinni

#import <Foundation/Foundation.h>
@protocol SingleUseKeyStatus;
@class ReplenishRequest;
@class ReplenishRequest;
@protocol SingleUseKeyStatus;


/**
 * Auto-generated Djinni interface for ::mpsdk::remotemanagement::json::request::ReplenishRequest_t
 * 
 * Represents the Suk replenishment request to Cms-D.
 * 
 */
@interface ReplenishRequest : NSObject

- (id _Nonnull)initWithRequestId:(NSString* _Nonnull)requestId tokenUniqueReference:(NSString* _Nonnull)tokenUniqueReference transactionCredentialsStatuses:(NSArray<id<SingleUseKeyStatus>>* _Nonnull)transactionCredentialsStatuses;

/**
 * 
 * @returns requestId as Stirng
 * 
 */
- (NSString* _Nonnull)getRequestId;

/**
 * 
 * @param requestId as String
 * @returns an object of ReplenishRequest_t
 * 
 */
- (ReplenishRequest* _Nonnull)setRequestId:(NSString* _Nonnull)requestId;

/**
 * 
 * @returns tokenUniqueReference as String
 * 
 */
- (NSString* _Nullable)getTokenUniqueReference;

/**
 * 
 * @param tokenUniqueReference as String
 * @returns an object of ReplenishRequest_t
 * 
 */
- (ReplenishRequest* _Nonnull)setTokenUniqueReference:(NSString* _Nullable)tokenUniqueReference;

/**
 * 
 * @returns array of utils of SingleUseKeyStatus_t
 * 
 */
- (NSArray<id<SingleUseKeyStatus>>* _Nonnull)getTransactionCredentialsStatus;

/**
 * 
 * @param transactionCredentialsStatus as array of utils of SingleUseKeyStatus_t
 * @returns an object of ReplenishRequest_t
 * 
 */
- (ReplenishRequest* _Nonnull)setTransactionCredentialsStatus:(NSArray<id<SingleUseKeyStatus>>* _Nonnull)transactionCredentialsStatus;

- (NSString* _Nonnull)toString;

@end
