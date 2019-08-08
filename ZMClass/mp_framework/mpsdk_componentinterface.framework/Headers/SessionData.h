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
// This file generated by Djinni from SessionData.djinni

#import <Foundation/Foundation.h>


/**
 * Auto-generated Djinni interface for ::mpsdk::componentinterface::crypto::SessionData_t
 * 
 * Represents a remote management session
 * 
 */
@protocol SessionData

/**
 * 
 * Returns the Session identifier
 * 
 * @return the session identifier
 * 
 * 
 */
- (NSData* _Nonnull)getSessionCode;

/**
 * 
 * Returns the timestamp at which the session expires
 * 
 * @return the timestamp at which the session expires
 * 
 * 
 */
- (NSString* _Nonnull)getExpiryTimestamp;

/**
 * 
 * The version
 * 
 * @return the version
 * 
 */
- (NSString* _Nonnull)getVersion;

/**
 * 
 * Get the number of seconds the session is valid for
 * 
 * @return the number of seconds the session is valid for
 * 
 * 
 */
- (int32_t)getValidForSeconds;

/**
 * 
 * Get the pending action
 * 
 * @return the pending action
 * 
 * 
 */
- (NSString* _Nullable)getPendingAction;

/**
 * 
 * Get the token unique reference
 * 
 * @return the token unique reference
 * 
 * 
 */
- (NSString* _Nullable)getTokenUniqueReference;

@end