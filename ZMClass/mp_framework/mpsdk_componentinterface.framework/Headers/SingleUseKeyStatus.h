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
// This file generated by Djinni from SingleUseKeyStatus.djinni

#import <Foundation/Foundation.h>


/**
 * Auto-generated Djinni interface for ::mpsdk::componentinterface::SingleUseKeyStatus_t
 * 
 * Interface specifies the transaction credentials structure.
 * 
 */
@protocol SingleUseKeyStatus

/**
 * 
 * The status of this Transaction Credential.
 * 
 * @return {@code Status} as string.
 * 
 * 
 */
- (NSString* _Nonnull)getStatus;

/**
 * 
 * The Application Transaction Counter (ATC) identifying this Transaction Credential.
 * 
 * 
 * 
 */
- (int32_t)getAtc;

/**
 * 
 * The date/time stamp for this status. For UNUSED_ACTIVE credentials, the timestamp must be
 * the current time as the status is being reported. For used or discarded credentials, the
 * timestamp must be the time when the credentials were used or discarded.
 * Must be expressed in ISO 8601 extended format as one of the following:
 * YYYY-MM-DDThh:mm:ss[.sss]Z
 * YYYY-MM-DDThh:mm:ss[.sss]�hh:mm
 * Where [.sss] is optional and can be 1 to 3 digits.
 * 
 * @return String
 * 
 * 
 */
- (NSString* _Nullable)getTimestamp;

/**
 * 
 * JSON Data representation
 * 
 * @return String
 * 
 * 
 */
- (NSString* _Nonnull)buildAsJson;

@end
