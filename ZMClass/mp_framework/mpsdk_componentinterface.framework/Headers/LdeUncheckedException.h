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
// This file generated by Djinni from LdeUncheckedException.djinni

#import "mpsdk_componentinterface/ReturnCode.h"
#import "mpsdk_componentinterface/ReturnCode.h"
#import <Foundation/Foundation.h>
@class LdeUncheckedException;
@class LdeUncheckedException;



#import "mpsdk_componentinterface/RuntimeException.h"

/**
 * Auto-generated Djinni interface for ::mpsdk::componentinterface::database::exception::LdeUncheckedException_t
 * 
 * Base class for all the exceptions related to the Local Database Encrypted Lde
 * 
 */
@interface LdeUncheckedException : RuntimeException

- (id _Nonnull)initWithReason:(NSString* _Nonnull)reason;

- (id _Nonnull)initWithReason:(NSString* _Nonnull)reason errorCode:(ReturnCode)errorCode;

- (id _Nonnull)init;

- (id _Nonnull)initWithMessage:(NSString* _Nonnull)message errorCode:(ReturnCode)errorCode;

/**
 * 
 * Get the Error related to the Exception_t
 * 
 * @return The Error Code which is associated with the exception
 * 
 */
- (ReturnCode)getErrorCode;

+ (LdeUncheckedException* _Nonnull)createWithMessageAndErrorCode:(NSString* _Nonnull)message
                                                                  errorCode:(ReturnCode)errorCode;

@end