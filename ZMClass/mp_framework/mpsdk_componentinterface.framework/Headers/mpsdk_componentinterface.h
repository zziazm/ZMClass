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

//
//  mpsdk_componentinterface.h
//  mpsdk-componentinterface
//
//  Copyright � 2018 Mastercard. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for mpsdk_componentinterface.
FOUNDATION_EXPORT double mpsdk_componentinterfaceVersionNumber;

//! Project version string for mpsdk_componentinterface.
FOUNDATION_EXPORT const unsigned char mpsdk_componentinterfaceVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <mpsdk_componentinterface/PublicHeader.h>

#import <mpsdk_componentinterface/ActiveCardProvider.h>
#import <mpsdk_componentinterface/AlreadyInProcessException.h>
#import <mpsdk_componentinterface/AlternateContactlessPaymentData.h>
#import <mpsdk_componentinterface/AsyncLogger.h>
#import <mpsdk_componentinterface/Background.h>
#import <mpsdk_componentinterface/BerTlvUtils.h>
#import <mpsdk_componentinterface/ByteArray.h>
#import <mpsdk_componentinterface/ByteArrayUtils.h>
#import <mpsdk_componentinterface/Card.h>
#import <mpsdk_componentinterface/CardAccountType.h>
#import <mpsdk_componentinterface/CardAccountTypeHelper.h>
#import <mpsdk_componentinterface/CardCvmModel.h>
#import <mpsdk_componentinterface/CardCvmModelHelper.h>
#import <mpsdk_componentinterface/CardholderValidator.h>
#import <mpsdk_componentinterface/CardholderValidatorHelper.h>
#import <mpsdk_componentinterface/CardManager.h>
#import <mpsdk_componentinterface/CardProductType.h>
#import <mpsdk_componentinterface/CardProductTypeHelper.h>
#import <mpsdk_componentinterface/CardSide.h>
#import <mpsdk_componentinterface/CardSideTlvHandler.h>
#import <mpsdk_componentinterface/CardState.h>
#import <mpsdk_componentinterface/CardStateHelper.h>
#import <mpsdk_componentinterface/CardUcafVersion.h>
#import <mpsdk_componentinterface/CardUcafVersionHelper.h>
#import <mpsdk_componentinterface/CardUmdConfig.h>
#import <mpsdk_componentinterface/CardUmdConfigHelper.h>
#import <mpsdk_componentinterface/Cld.h>
#import <mpsdk_componentinterface/CldTlvHandler.h>
#import <mpsdk_componentinterface/CmsDPublicKeyEncryptedData.h>
#import <mpsdk_componentinterface/CommunicationParametersProvider.h>
#import <mpsdk_componentinterface/CommunicationRetryParametersProvider.h>
#import <mpsdk_componentinterface/ContactlessPaymentData.h>
#import <mpsdk_componentinterface/ContactlessPaymentNotSupportedException.h>
#import <mpsdk_componentinterface/CredentialsReplenishmentPolicy.h>
#import <mpsdk_componentinterface/Currency.h>
#import <mpsdk_componentinterface/CustomEncryptedData.h>
#import <mpsdk_componentinterface/DatabaseCrypto.h>
#import <mpsdk_componentinterface/DatabaseInitParams.h>
#import <mpsdk_componentinterface/DatabaseState.h>
#import <mpsdk_componentinterface/DatabaseStateHelper.h>
#import <mpsdk_componentinterface/DatabaseUpgradeCrypto.h>
#import <mpsdk_componentinterface/DatabaseUpgradeHelper.h>
#import <mpsdk_componentinterface/DatabaseWalletData.h>
#import <mpsdk_componentinterface/DateUtils.h>
#import <mpsdk_componentinterface/DekEncryptedData.h>
#import <mpsdk_componentinterface/DigitizedCard.h>
#import <mpsdk_componentinterface/DsrpData.h>
#import <mpsdk_componentinterface/DsrpOutput.h>
#import <mpsdk_componentinterface/DsrpTransactionInput.h>
#import <mpsdk_componentinterface/DsrpTransactionOutcome.h>
#import <mpsdk_componentinterface/DsrpTransactionOutcomeResult.h>
#import <mpsdk_componentinterface/DstDekEncryptedData.h>
#import <mpsdk_componentinterface/DuplicateMcbpCard.h>
#import <mpsdk_componentinterface/DuplicateTransactionCredential.h>
#import <mpsdk_componentinterface/EmptyMcbpLogger.h>
#import <mpsdk_componentinterface/EncryptedData.h>
#import <mpsdk_componentinterface/Exception.h>
#import <mpsdk_componentinterface/GeneralSecurityException.h>
#import <mpsdk_componentinterface/HttpException.h>
#import <mpsdk_componentinterface/HttpManager.h>
#import <mpsdk_componentinterface/HttpMethod.h>
#import <mpsdk_componentinterface/HttpRequest.h>
#import <mpsdk_componentinterface/HttpResponse.h>
#import <mpsdk_componentinterface/HttpResponseStatus.h>
#import <mpsdk_componentinterface/IccKekEncryptedData.h>
#import <mpsdk_componentinterface/IccKekEncryptedKey.h>
#import <mpsdk_componentinterface/InvalidArgumentException.h>
#import <mpsdk_componentinterface/InvalidInput.h>
#import <mpsdk_componentinterface/IOException.h>
#import <mpsdk_componentinterface/Iso4217CurrencyUtils.h>
#import <mpsdk_componentinterface/JSONArray.h>
#import <mpsdk_componentinterface/JSONException.h>
#import <mpsdk_componentinterface/JSONObject.h>
#import <mpsdk_componentinterface/JsonUtils.h>
#import <mpsdk_componentinterface/KeyDataRollover.h>
#import <mpsdk_componentinterface/KeyLifeCycleManager.h>
#import <mpsdk_componentinterface/LdeAlreadyInitialized.h>
#import <mpsdk_componentinterface/LdeCheckedException.h>
#import <mpsdk_componentinterface/LdeUncheckedException.h>
#import <mpsdk_componentinterface/LocalDekEncryptedData.h>
#import <mpsdk_componentinterface/LogUtils.h>
#import <mpsdk_componentinterface/McbpAsyncTask.h>
#import <mpsdk_componentinterface/McbpAsyncTaskFactory.h>
#import <mpsdk_componentinterface/McbpCryptoServices.h>
#import <mpsdk_componentinterface/McbpDataBase.h>
#import <mpsdk_componentinterface/McbpLogger.h>
#import <mpsdk_componentinterface/McbpLoggerInstance.h>
#import <mpsdk_componentinterface/McbpTaskFactory.h>
#import <mpsdk_componentinterface/McbpTaskListener.h>
#import <mpsdk_componentinterface/MobileKeys.h>
#import <mpsdk_componentinterface/MpaManagementHelper.h>
#import <mpsdk_componentinterface/MpSdkException.h>
#import <mpsdk_componentinterface/NotFoundException.h>
#import <mpsdk_componentinterface/ParsingException.h>
#import <mpsdk_componentinterface/PaymentContext.h>
#import <mpsdk_componentinterface/Picture.h>
#import <mpsdk_componentinterface/PinDataProvider.h>
#import <mpsdk_componentinterface/ProfileVersion.h>
#import <mpsdk_componentinterface/ProfileVersionHelper.h>
#import <mpsdk_componentinterface/ProfileWalletData.h>
#import <mpsdk_componentinterface/PropertyStorageFactory.h>
#import <mpsdk_componentinterface/QrcOutput.h>
#import <mpsdk_componentinterface/QrcTransactionContext.h>
#import <mpsdk_componentinterface/QrcTransactionOutcome.h>
#import <mpsdk_componentinterface/QrcTransactionOutcomeResult.h>
#import <mpsdk_componentinterface/Records.h>
#import <mpsdk_componentinterface/RegistrationRequestParameters.h>
#import <mpsdk_componentinterface/RemoteCommunicationEventListener.h>
#import <mpsdk_componentinterface/RemoteCommunicationManager.h>
#import <mpsdk_componentinterface/RemoteCryptogramType.h>
#import <mpsdk_componentinterface/RemoteManagementCrypto.h>
#import <mpsdk_componentinterface/RemoteManagementException.h>
#import <mpsdk_componentinterface/RemoteManagementTaskStatus.h>
#import <mpsdk_componentinterface/ReturnCode.h>
#import <mpsdk_componentinterface/RgkEncryptedData.h>
#import <mpsdk_componentinterface/RgkEncryptedMobileKeys.h>
#import <mpsdk_componentinterface/RMKekEncryptedData.h>
#import <mpsdk_componentinterface/RMKekEncryptedMobileKeys.h>
#import <mpsdk_componentinterface/RolloverInProgressException.h>
#import <mpsdk_componentinterface/RuntimeException.h>
#import <mpsdk_componentinterface/SecurityIncident.h>
#import <mpsdk_componentinterface/SecurityIncidentReasonCode.h>
#import <mpsdk_componentinterface/SecurityIncidentService.h>
#import <mpsdk_componentinterface/SessionData.h>
#import <mpsdk_componentinterface/SingleUseKey.h>
#import <mpsdk_componentinterface/SingleUseKeyStatus.h>
#import <mpsdk_componentinterface/SingleUseKeyStatusStatus.h>
#import <mpsdk_componentinterface/SingleUseKeyStatusStatusHelper.h>
#import <mpsdk_componentinterface/Text.h>
#import <mpsdk_componentinterface/TimeUtils.h>
#import <mpsdk_componentinterface/Tlv.h>
#import <mpsdk_componentinterface/TlvEditor.h>
#import <mpsdk_componentinterface/TlvHandler.h>
#import <mpsdk_componentinterface/TlvParser.h>
#import <mpsdk_componentinterface/TrackConstructionData.h>
#import <mpsdk_componentinterface/TransactionCredentialInfo.h>
#import <mpsdk_componentinterface/TransactionCrypto.h>
#import <mpsdk_componentinterface/TransactionCryptograms.h>
#import <mpsdk_componentinterface/TransactionLog.h>
#import <mpsdk_componentinterface/TransactionLoggingError.h>
#import <mpsdk_componentinterface/TransactionStorageLimitReach.h>
#import <mpsdk_componentinterface/TransportKeyEncryptedData.h>
#import <mpsdk_componentinterface/Utils.h>
#import <mpsdk_componentinterface/WalletDataCrypto.h>
#import <mpsdk_componentinterface/WalletDekEncryptedData.h>
#import <mpsdk_componentinterface/WalletIdentificationDataProvider.h>
#import <mpsdk_componentinterface/WalletState.h>
#import <mpsdk_componentinterface/WalletStateHelper.h>

