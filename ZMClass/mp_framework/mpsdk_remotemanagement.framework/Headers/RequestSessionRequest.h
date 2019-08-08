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
// This file generated by Djinni from RequestSessionRequest.djinni

#import <Foundation/Foundation.h>
@class RequestSessionRequest;
@class RequestSessionRequest;


/**
 * Auto-generated Djinni interface for ::mpsdk::remotemanagement::json::request::RequestSessionRequest_t
 * 
 * Represents the request session request for CMS-D.
 * 
 */
@interface RequestSessionRequest : NSObject

- (id _Nonnull)initWithPaymentAppInstanceId:(NSString* _Nonnull)paymentAppInstanceId paymentAppProviderId:(NSString* _Nonnull)paymentAppProviderId mobileKeysetId:(NSString* _Nonnull)mobileKeysetId;

/**
 * 
 * @returns paymentAppProviderId as String
 * 
 */
- (NSString* _Nonnull)getPaymentAppProviderId;

/**
 * 
 * @param paymentAppProviderId as String
 * @returns an object of RequestSessionRequest_t
 * 
 */
- (RequestSessionRequest* _Nonnull)setPaymentAppProviderId:(NSString* _Nonnull)paymentAppProviderId;

/**
 * 
 * @returns paymentAppInstanceId as String
 * 
 */
- (NSString* _Nonnull)getPaymentAppInstanceId;

/**
 * 
 * @param paymentAppInstanceId as String
 * @returns an object of RequestSessionRequest_t
 * 
 */
- (RequestSessionRequest* _Nonnull)setPaymentAppInstanceId:(NSString* _Nonnull)paymentAppInstanceId;

/**
 * 
 * @returns mobileKeysetId as String
 * 
 */
- (NSString* _Nonnull)getMobileKeysetId;

/**
 * 
 * @param mobileKeysetId as String
 * @returns an object of RequestSessionRequest_t
 * 
 */
- (RequestSessionRequest* _Nonnull)setMobileKeysetId:(NSString* _Nonnull)mobileKeysetId;

- (NSString* _Nonnull)toString;

@end
