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
// This file generated by Djinni from GetSystemHealthCommand.djinni

#import "mpsdk_componentinterface/HttpMethod.h"
#import "mpsdk_remotemanagement/CommandFailureAction.h"
#import "mpsdk_componentinterface/HttpMethod.h"
#import <Foundation/Foundation.h>
@protocol HttpManager;
@protocol RemoteManagementCrypto;
@protocol SessionContextProvider;
@protocol WalletIdentificationDataProvider;
@protocol CommandEventListener;
@protocol CommunicationParametersProvider;
@protocol CommunicationRetryParametersProvider;
@class CmsDBaseResponse;
@class Exception;



#import "mpsdk_remotemanagement/BaseRemoteManagementCommand.h"

/** Auto-generated Djinni interface for ::mpsdk::remotemanagement::commands::impl::GetSystemHealthCommand_t */
@interface GetSystemHealthCommand : BaseRemoteManagementCommand

- (id _Nonnull)initWithRequestId:(NSString* _Nonnull)requestId httpManager:(id<HttpManager> _Nonnull)httpManager remoteManagementCrypto:(id<RemoteManagementCrypto> _Nonnull)remoteManagementCrypto sessionContextProvider:(id<SessionContextProvider> _Nonnull)sessionContextProvider walletIdentificationDataProvider:(id<WalletIdentificationDataProvider> _Nonnull)walletIdentificationDataProvider commandEventListener:(id<CommandEventListener> _Nonnull)commandEventListener communicationParametersProvider:(id<CommunicationParametersProvider> _Nonnull)communicationParametersProvider communicationRetryParametersProvider:(id<CommunicationRetryParametersProvider> _Nonnull)communicationRetryParametersProvider;

/**
 * 
 * Retrieve the URL used for this command
 * @returns the URL used for this command
 * 
 */
- (NSString* _Nonnull)getUrlEndPoint;

/**
 * 
 * Executes the command
 * 
 */
- (void)execute;

/**
 * 
 * Cancels the execution of the command
 * 
 */
- (void)cancel;

- (HttpMethod)getHttpMethod;

- (NSString* _Nullable)getTaskId;

@end
