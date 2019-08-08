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
// This file generated by Djinni from CmsDRemoteCommunicationManager.djinni

#import <Foundation/Foundation.h>
@protocol WalletIdentificationDataProvider;
@class RequestSessionCommand;
@protocol RegistrationRequestParameters;
@class DekEncryptedData;
@protocol RemoteManagementCrypto;
@protocol HttpManager;
@protocol RemoteCommunicationEventListener;
@protocol CommunicationParametersProvider;
@protocol CommunicationRetryParametersProvider;
@protocol SingleUseKeyStatus;
@protocol PinDataProvider;
@class RemoteManagementCommand;
@class Exception;
@protocol DigitizedCard;
@protocol SingleUseKey;
@protocol RgkEncryptedMobileKeys;
@protocol SessionContextProvider;
@protocol CommandFactory;
@protocol CommandQueue;
@class CmsDNotificationHandler;
@class CmsDNotificationHandler;
@protocol CommandQueue;
@protocol CommandFactory;
@protocol SessionContextProvider;
@class DekEncryptedData;
@class Exception;
@class RemoteManagementCommand;
@class RequestSessionCommand;
@protocol CommunicationParametersProvider;
@protocol CommunicationRetryParametersProvider;
@protocol DigitizedCard;
@protocol HttpManager;
@protocol PinDataProvider;
@protocol RegistrationRequestParameters;
@protocol RemoteCommunicationEventListener;
@protocol RemoteManagementCrypto;
@protocol RgkEncryptedMobileKeys;
@protocol SingleUseKey;
@protocol SingleUseKeyStatus;
@protocol WalletIdentificationDataProvider;



#import "mpsdk_componentinterface/RemoteCommunicationManager.h"
#import "mpsdk_remotemanagement/CommandEventListener.h"
#import "mpsdk_remotemanagement/CommandQueueHelper.h"

/**
 * Auto-generated Djinni interface for ::mpsdk::remotemanagement::CmsDRemoteCommunicationManager_t
 * 
 * The main entry point and business logic component for the Remote Management module.
 * <para>
 * Is responsible for creating and managing commands and the queue that is used to execute them.
 * </para>
 * 
 */
@interface CmsDRemoteCommunicationManager : NSObject<RemoteCommunicationManager, CommandEventListener, CommandQueueHelper>

- (id _Nonnull)init;

@property(nonatomic, readwrite) CmsDNotificationHandler* _Nonnull mNotificationHandler;
- (CmsDNotificationHandler* _Nonnull)mNotificationHandler;
- (void)setMNotificationHandler:(CmsDNotificationHandler* _Nonnull)val;

@property(nonatomic, readwrite) id<CommandQueue> _Nonnull mCommandQueue;
- (id<CommandQueue> _Nonnull)mCommandQueue;
- (void)setMCommandQueue:(id<CommandQueue> _Nonnull)val;

@property(nonatomic, readwrite) id<CommandFactory> _Nonnull mCommandFactory;
- (id<CommandFactory> _Nonnull)mCommandFactory;
- (void)setMCommandFactory:(id<CommandFactory> _Nonnull)val;

@property(nonatomic, readwrite) id<SessionContextProvider> _Nonnull mSessionContextProvider;
- (id<SessionContextProvider> _Nonnull)mSessionContextProvider;
- (void)setMSessionContextProvider:(id<SessionContextProvider> _Nonnull)val;

/**
 * 
 * Will be called during SDK initialization
 * @param remoteManagementCrypto crypto engine to use for securing or decrypting data
 * @param httpManager used to communicate with the CMS-D
 * @param remoteCommunicationEventListener callback mechanism to notify user about data changes
 * @param walletIdentificationDataProvider data provider for registration purposes
 * @param communicationParametersProvider the data provider for obtaining communication parameters
 * 
 */
- (void)initialize:(id<RemoteManagementCrypto> _Nonnull)remoteManagementCrypto
       httpManager:(id<HttpManager> _Nonnull)httpManager
remoteCommunicationEventListener:(id<RemoteCommunicationEventListener> _Nonnull)remoteCommunicationEventListener
communicationParametersProvider:(id<CommunicationParametersProvider> _Nonnull)communicationParametersProvider
walletIdentificationDataProvider:(id<WalletIdentificationDataProvider> _Nonnull)walletIdentificationDataProvider
communicationRetryParametersProvider:(id<CommunicationRetryParametersProvider> _Nonnull)communicationRetryParametersProvider;

/**
 * 
 * Get the status of a previously initiated request.  The status is reported on a callback
 * <p />
 * When implementing this interface, On completion of the get status request
 * onTaskStatusReceived() or onTaskStatusReceivedFailure() function on
 * RemoteCommunicationEventListener_t must be called
 * @param taskId The Task Id as received when the command was started
 * 
 */
- (void)requestTaskStatusUpdate:(NSString* _Nonnull)taskId;

/**
 * 
 * @returns Id of the request currently being processed.  Return null if no request is in
 * progress
 * 
 */
- (NSString* _Nullable)getCurrentRequestId;

/**
 * 
 * Request replenishment of the transaction credentials(SUK) for this card
 * @param cardId The card for which the SUKs have to be replenished
 * @param credentialStatus Status of previously received transaction credentials.
 * Note: A null value shall be converted into empty array
 * @returns the unique request-identifier for this request, useful to check the current status of
 * command.
 * 
 */
- (NSString* _Nonnull)requestReplenish:(NSString* _Nonnull)cardId
                      credentialStatus:(NSArray<id<SingleUseKeyStatus>>* _Nonnull)credentialStatus;

/**
 * 
 * Request to set mobile PIN for Card.
 * @param cardId Card object identifying the card for which setPin is invoked
 * @param pinDataProvider provides access to the W_DEK protected mobile PIN.
 * @returns the unique request-identifier for this request, useful to check the current status of
 * command.
 * <p />
 * Note: This function should not be called directly, but only through the Card interface
 * 
 */
- (NSString* _Nonnull)requestSetPin:(NSString* _Nonnull)cardId
                    pinDataProvider:(id<PinDataProvider> _Nonnull)pinDataProvider;

/**
 * 
 * Request to change mobile PIN for Card.
 * @param cardId Card object identifying the card for which changePin is invoked
 * @param pinDataProvider Provides access to the W_DEK protected mobile PIN
 * @returns the unique request-identifier for this request, useful to check the current status of
 * command.
 * <p />
 * Note: This function should not be called directly, but only through the Card interface
 * 
 */
- (NSString* _Nonnull)requestChangePin:(NSString* _Nonnull)cardId
                       pinDataProvider:(id<PinDataProvider> _Nonnull)pinDataProvider;

/**
 * 
 * Request to set mobile wallet PIN.
 * @param pinDataProvider provides access to the W_DEK protected mobile PIN.
 * @returns the unique request-identifier for this request, useful to check the current status of
 * command.
 * @exception IllegalArgumentException when any argument is null or empty
 * <p />
 * Note: This function should not be called directly, but only
 * through the CardManager_t interface
 * 
 */
- (NSString* _Nonnull)requestSetWalletPin:(id<PinDataProvider> _Nonnull)pinDataProvider;

/**
 * 
 * Request to set mobile wallet PIN.
 * @param pinDataProvider Provides access to the W_DEK protected mobile PIN
 * @returns the unique request-identifier for this request, useful to check the current status of
 * command.
 * @exception IllegalArgumentException when any argument is null or empty
 * <p />
 * Note: This function should not be called directly, but only
 * through the CardManager_t interface
 * 
 */
- (NSString* _Nonnull)requestChangeWalletPin:(id<PinDataProvider> _Nonnull)pinDataProvider;

/**
 * 
 * Asynchronously request deletion of this card
 * @param cardId The card for which the SUKs have to be replenished
 * @param credentialStatus Status of previously received transaction credentials.
 * Note: A null value shall be converted into empty array
 * @returns the unique request-identifier for this request, useful to check the current status of
 * command.
 * <p />
 * Note: This function should not be called directly, but only through the Card manager
 * interface
 * 
 */
- (NSString* _Nonnull)requestDeleteCard:(NSString* _Nonnull)cardId
                       credentialStatus:(NSArray<id<SingleUseKeyStatus>>* _Nonnull)credentialStatus;

/**
 * 
 * Check the general status of a Digitization API host.
 * @returns the unique request-identifier for this request, useful to check the current status of
 * command, or returns NULL if another command is a.
 * 
 */
- (NSString* _Nonnull)requestSystemHealth;

/**
 * 
 * Process any data that is pushed by the server for handling by the remote communications manager.
 * Typically this data would be a Json request that contains data as per the format specified
 * by the remote management protocol being used
 * @param data The data received as push by the server for taking action.
 * 
 */
- (void)processNotificationData:(NSString* _Nonnull)data error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Cancels all pending requests including request which is in execution.
 * @returns true if there are requests resting in queue, false otherwise
 * 
 */
- (BOOL)cancelPendingRequests;

- (id<WalletIdentificationDataProvider> _Nullable)getWalletIdentificationDataProvider;

/**
 * 
 * Processes any pending action as a result of receiving pushed data
 * 
 */
- (void)processPendingAction;

/**
 * 
 * Helper method to add and execute commands in queue. Adds a session command to front of queue
 * if no valid session can be found
 * 
 */
- (void)addCommandInQueue:(RemoteManagementCommand* _Nonnull)commandToExecute;

/**
 * 
 * Validates the incoming push data and creates the necessary session objects
 * @param data the raw notification contents
 * @exception RemoteManagementException Indicates error during communication with CMS-D
 * 
 */
- (void)validateAndCreateSession:(NSString* _Nullable)data;

/**
 * 
 * The Delete Token command has completed successfully
 * @param command the command
 * 
 */
- (void)onDeleteTokenCommandCompleted:(RemoteManagementCommand* _Nonnull)command
                               cardId:(NSString* _Nonnull)cardId;

/**
 * 
 * The Delete Token Command has failed
 * @param command the command
 * @param errorCode the error code
 * @param errorMessage the error message
 * @param exception the exception
 * 
 */
- (void)onDeleteTokenCommandFailed:(RemoteManagementCommand* _Nonnull)command
                            cardId:(NSString* _Nonnull)cardId
                         errorCode:(NSString* _Nullable)errorCode
                      errorMessage:(NSString* _Nullable)errorMessage
                         exception:(Exception* _Nonnull)exception;

/**
 * 
 * The system health command has successfully completed
 * @param command the command
 * 
 */
- (void)onGetSystemHealthCommandCompleted:(RemoteManagementCommand* _Nonnull)command;

/**
 * 
 * The system health command has failed
 * @param command the command
 * @param errorCode the error code
 * @param errorMessage the error message
 * @param exception the exception
 * 
 */
- (void)onGetSystemHealthCommandFailed:(RemoteManagementCommand* _Nonnull)command
                             errorCode:(NSString* _Nullable)errorCode
                          errorMessage:(NSString* _Nullable)errorMessage
                             exception:(Exception* _Nonnull)exception;

/**
 * 
 * The get task status command has successfully completed
 * @param command the command
 * @param taskStatus the status of the requested task
 * 
 */
- (void)onGetTaskStatusCommandCompleted:(RemoteManagementCommand* _Nonnull)command
                             taskStatus:(NSString* _Nonnull)taskStatus;

/**
 * 
 * The get task status command has failed
 * @param command the command
 * @param errorCode the error code
 * @param errorMessage the error message
 * @param exception the exception
 * 
 */
- (void)onGetTaskStatusCommandFailed:(RemoteManagementCommand* _Nonnull)command
                           errorCode:(NSString* _Nullable)errorCode
                        errorMessage:(NSString* _Nullable)errorMessage
                           exception:(Exception* _Nonnull)exception;

/**
 * 
 * The notify token provisioning result command has failed
 * @param command the command
 * 
 */
- (void)onNotifyProvisioningResultCommandCompleted:(RemoteManagementCommand* _Nonnull)command;

/**
 * 
 * The notify token provisioning result command has failed
 * @param command the command
 * @param errorCode the error code
 * @param errorMessage the error message
 * @param exception the exception
 * 
 */
- (void)onNotifyProvisioningResultCommandFailed:(RemoteManagementCommand* _Nonnull)command
                           tokenUniqueReference:(NSString* _Nullable)tokenUniqueReference
                                      errorCode:(NSString* _Nullable)errorCode
                                   errorMessage:(NSString* _Nullable)errorMessage
                                      exception:(Exception* _Nonnull)exception;

/**
 * 
 * The provision command has completed
 * @param command the command
 * @param digitizedCardProfile the profile that has been provisioned
 * @param cardId the card id
 * 
 */
- (void)onProvisionCommandCompleted:(RemoteManagementCommand* _Nonnull)command
               digitizedCardProfile:(id<DigitizedCard> _Nonnull)digitizedCardProfile
                             cardId:(NSString* _Nonnull)cardId;

/**
 * 
 * The provision command has failed
 * @param command the command
 * @param errorCode the error code
 * @param errorMessage the error message
 * @param exception the exception
 * 
 */
- (void)onProvisionCommandFailed:(RemoteManagementCommand* _Nonnull)command
            tokenUniqueReference:(NSString* _Nullable)tokenUniqueReference
                       errorCode:(NSString* _Nullable)errorCode
                    errorMessage:(NSString* _Nullable)errorMessage
                       exception:(Exception* _Nonnull)exception;

/**
 * 
 * The request session command has completed - the session data will be received via push
 * notification.
 * @param command the command
 * 
 */
- (void)onRequestSessionCommandCompleted:(RemoteManagementCommand* _Nonnull)command;

/**
 * 
 * The request session command has failed
 * @param command the command
 * @param errorCode the error code
 * @param errorMessage the error message
 * @param exception the exception
 * 
 */
- (void)onRequestSessionCommandFailed:(RemoteManagementCommand* _Nonnull)command
                            errorCode:(NSString* _Nullable)errorCode
                         errorMessage:(NSString* _Nullable)errorMessage
                            exception:(Exception* _Nonnull)exception;

/**
 * 
 * The replenish command has completed
 * @param command the command
 * @param cardId the card id
 * @param requestId the request id
 * @param singleUseKeys the new transaction credentials
 * 
 */
- (void)onReplenishCommandCompleted:(RemoteManagementCommand* _Nonnull)command
                             cardId:(NSString* _Nonnull)cardId
                          requestId:(NSString* _Nonnull)requestId
                      singleUseKeys:(NSArray<id<SingleUseKey>>* _Nonnull)singleUseKeys;

/**
 * 
 * The replenish command has failed
 * @param command the command
 * @param errorCode the error code
 * @param errorMessage the error message
 * @param exception the exception
 * 
 */
- (void)onReplenishCommandFailed:(RemoteManagementCommand* _Nonnull)command
            tokenUniqueReference:(NSString* _Nullable)tokenUniqueReference
                       errorCode:(NSString* _Nullable)errorCode
                    errorMessage:(NSString* _Nullable)errorMessage
                       exception:(Exception* _Nonnull)exception;

- (void)onChangeCardPinCommandCompleted:(RemoteManagementCommand* _Nonnull)command
                                 cardId:(NSString* _Nonnull)cardId
                              requestId:(NSString* _Nonnull)requestId;

- (void)onChangeCardPinCommandFailed:(NSString* _Nullable)tokenUniqueReference
                   pinTriesRemaining:(int32_t)pinTriesRemaining
                             command:(RemoteManagementCommand* _Nonnull)command
                           errorCode:(NSString* _Nullable)errorCode
                        errorMessage:(NSString* _Nullable)errorMessage
                           exception:(Exception* _Nonnull)exception;

- (void)onSetCardPinCommandCompleted:(RemoteManagementCommand* _Nonnull)command
                              cardId:(NSString* _Nonnull)cardId
                           requestId:(NSString* _Nonnull)requestId;

- (void)onSetCardPinCommandFailed:(NSString* _Nullable)tokenUniqueReference
                pinTriesRemaining:(int32_t)pinTriesRemaining
                          command:(RemoteManagementCommand* _Nonnull)command
                        errorCode:(NSString* _Nullable)errorCode
                     errorMessage:(NSString* _Nullable)errorMessage
                        exception:(Exception* _Nonnull)exception;

- (void)onSetWalletPinCommandCompleted:(RemoteManagementCommand* _Nonnull)command
                             requestId:(NSString* _Nonnull)requestId;

- (void)onSetWalletPinCommandFailed:(int32_t)pinTriesRemaining
                            command:(RemoteManagementCommand* _Nonnull)command
                          errorCode:(NSString* _Nullable)errorCode
                       errorMessage:(NSString* _Nullable)errorMessage
                          exception:(Exception* _Nonnull)exception;

- (void)onChangeWalletPinCommandCompleted:(RemoteManagementCommand* _Nonnull)command
                                requestId:(NSString* _Nonnull)requestId;

- (void)onChangeWalletPinCommandFailed:(int32_t)pinTriesRemaining
                               command:(RemoteManagementCommand* _Nonnull)command
                             errorCode:(NSString* _Nullable)errorCode
                          errorMessage:(NSString* _Nullable)errorMessage
                             exception:(Exception* _Nonnull)exception;

/**
 * 
 * Used by a command to indicate that a session is no longer valid (not present or expired).
 * 
 */
- (RequestSessionCommand* _Nonnull)getRequestSessionCommand;

- (void)onChangeCardMobilePinStarted:(NSString* _Nonnull)cardId
                              taskId:(NSString* _Nonnull)taskId;

- (void)onChangeWalletMobilePinStarted:(NSString* _Nonnull)taskId;

/**
 * 
 * get the protected data for using in the registration request with payment app server
 * @param publicKeyBytes public key to be protected for use in registration request
 * @param pinDataProvider provider to retrieve Mobile pin to be protected for use in registration request
 * @returns interface to fetch the protected data
 * 
 */
- (id<RegistrationRequestParameters> _Nullable)getRegistrationRequestData:(NSData* _Nonnull)publicKeyBytes
                                                                   pinDataProvider:(id<PinDataProvider> _Nullable)pinDataProvider error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * get the protected pin for using in the registration request with payment app server
 * @param pinDataProvider provider to retrieve Mobile pin to be protected for use in
 * registration request
 * @returns The protected PIN
 * 
 */
- (DekEncryptedData* _Nullable)getSetPinRequestData:(id<PinDataProvider> _Nonnull)pinDataProvider error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * The registration response data will contain the mobile keys required by the SDK in order to
 * communicate with the Remote Management Service
 * @param encryptedMobileKeys the mobile keys necessary for communication and encryption
 * @param remoteManagementUrl the URL for the CMS-D
 * 
 */
- (void)setRegistrationResponseData:(id<RgkEncryptedMobileKeys> _Nonnull)encryptedMobileKeys
                remoteManagementUrl:(NSString* _Nonnull)remoteManagementUrl error:(NSError* _Nullable __autoreleasing * _Nullable)error;

@end