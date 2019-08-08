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
//  mpsdk_remotemanagement.h
//  mpsdk-remotemanagement
//
//  Copyright � 2018 Mastercard. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for mpsdk_remotemanagement.
FOUNDATION_EXPORT double mpsdk_remotemanagementVersionNumber;

//! Project version string for mpsdk_remotemanagement.
FOUNDATION_EXPORT const unsigned char mpsdk_remotemanagementVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <mpsdk_remotemanagement/PublicHeader.h>

#import <mpsdk_remotemanagement/AlternateContactlessPaymentDataJson.h>
#import <mpsdk_remotemanagement/BaseRemoteManagementCommand.h>
#import <mpsdk_remotemanagement/BusinessLogicModuleV1Json.h>
#import <mpsdk_remotemanagement/CardAlternateContactlessPaymentDataJson.h>
#import <mpsdk_remotemanagement/CardContactlessPaymentDataJson.h>
#import <mpsdk_remotemanagement/CardDsrpDataJson.h>
#import <mpsdk_remotemanagement/CardholderValidationNotSuccessful.h>
#import <mpsdk_remotemanagement/CardRecordsJson.h>
#import <mpsdk_remotemanagement/CardRiskManagementDataV1Json.h>
#import <mpsdk_remotemanagement/CardTrackConstructionDataJson.h>
#import <mpsdk_remotemanagement/CardWalletRelatedDataJson.h>
#import <mpsdk_remotemanagement/CdCvmCheckedException.h>
#import <mpsdk_remotemanagement/CdCvmValidationNotPerformed.h>
#import <mpsdk_remotemanagement/ChangeMobilePinRequest.h>
#import <mpsdk_remotemanagement/ChangeMobilePinResponse.h>
#import <mpsdk_remotemanagement/ChangePinCommand.h>
#import <mpsdk_remotemanagement/CmsDBaseResponse.h>
#import <mpsdk_remotemanagement/CmsDCommandFactory.h>
#import <mpsdk_remotemanagement/CmsDCommandQueue.h>
#import <mpsdk_remotemanagement/CmsDNotification.h>
#import <mpsdk_remotemanagement/CmsDNotificationHandler.h>
#import <mpsdk_remotemanagement/CmsDRemoteCommunicationManager.h>
#import <mpsdk_remotemanagement/CmsDRequest.h>
#import <mpsdk_remotemanagement/CmsDResponse.h>
#import <mpsdk_remotemanagement/CmsDSessionContextProvider.h>
#import <mpsdk_remotemanagement/CmsDSessionData.h>
#import <mpsdk_remotemanagement/CommandEventListener.h>
#import <mpsdk_remotemanagement/CommandFactory.h>
#import <mpsdk_remotemanagement/CommandFailureAction.h>
#import <mpsdk_remotemanagement/CommandQueue.h>
#import <mpsdk_remotemanagement/CommandQueueHelper.h>
#import <mpsdk_remotemanagement/CommandStatus.h>
#import <mpsdk_remotemanagement/CommandSuccessAction.h>
#import <mpsdk_remotemanagement/CommonDataV2Json.h>
#import <mpsdk_remotemanagement/ContactlessCredentialsError.h>
#import <mpsdk_remotemanagement/ContactlessIncompatibleProfile.h>
#import <mpsdk_remotemanagement/ContactlessPaymentDataV1Json.h>
#import <mpsdk_remotemanagement/ContactlessPaymentDataV2Json.h>
#import <mpsdk_remotemanagement/DeleteTokenCommand.h>
#import <mpsdk_remotemanagement/DeleteTokenRequest.h>
#import <mpsdk_remotemanagement/DigitizedCardJson.h>
#import <mpsdk_remotemanagement/DigitizedCardProfile.h>
#import <mpsdk_remotemanagement/DigitizedCardProfileV1Json.h>
#import <mpsdk_remotemanagement/DigitizedCardProfileV2Json.h>
#import <mpsdk_remotemanagement/DomainProfileBuilder.h>
#import <mpsdk_remotemanagement/DomainProfileBuilderV1.h>
#import <mpsdk_remotemanagement/DomainProfileBuilderV2.h>
#import <mpsdk_remotemanagement/DsrpCredentialsError.h>
#import <mpsdk_remotemanagement/DsrpDataV2Json.h>
#import <mpsdk_remotemanagement/ErrorCode.h>
#import <mpsdk_remotemanagement/GetSystemHealthCommand.h>
#import <mpsdk_remotemanagement/GetTaskStatusCommand.h>
#import <mpsdk_remotemanagement/GetTaskStatusRequest.h>
#import <mpsdk_remotemanagement/GetTaskStatusResponse.h>
#import <mpsdk_remotemanagement/IccPrivateKeyCrtComponentsJson.h>
#import <mpsdk_remotemanagement/InternalError.h>
#import <mpsdk_remotemanagement/InterruptedException.h>
#import <mpsdk_remotemanagement/InvalidCardStateException.h>
#import <mpsdk_remotemanagement/InvalidDigitizedCardProfile.h>
#import <mpsdk_remotemanagement/LdeNotInitialized.h>
#import <mpsdk_remotemanagement/MagstripeCvmIssuerOptionsV1Json.h>
#import <mpsdk_remotemanagement/McbpCardException.h>
#import <mpsdk_remotemanagement/McbpCardNotFound.h>
#import <mpsdk_remotemanagement/McbpCheckedException.h>
#import <mpsdk_remotemanagement/McbpErrorCode.h>
#import <mpsdk_remotemanagement/McbpUncheckedException.h>
#import <mpsdk_remotemanagement/MchipCardProfileV2Json.h>
#import <mpsdk_remotemanagement/MChipCvmIssuerOptionsV1Json.h>
#import <mpsdk_remotemanagement/MockCommand.h>
#import <mpsdk_remotemanagement/MppLiteModuleV1Json.h>
#import <mpsdk_remotemanagement/NotifyProvisioningResultCommand.h>
#import <mpsdk_remotemanagement/NotifyProvisionRequest.h>
#import <mpsdk_remotemanagement/ProvisionCommand.h>
#import <mpsdk_remotemanagement/ProvisioningSukFailedException.h>
#import <mpsdk_remotemanagement/ProvisionRequest.h>
#import <mpsdk_remotemanagement/ProvisionResponse.h>
#import <mpsdk_remotemanagement/RecordsJson.h>
#import <mpsdk_remotemanagement/RemoteManagementCommand.h>
#import <mpsdk_remotemanagement/RemotePaymentDataV1Json.h>
#import <mpsdk_remotemanagement/ReplenishCommand.h>
#import <mpsdk_remotemanagement/ReplenishRequest.h>
#import <mpsdk_remotemanagement/ReplenishResponse.h>
#import <mpsdk_remotemanagement/RequestSessionCommand.h>
#import <mpsdk_remotemanagement/RequestSessionRequest.h>
#import <mpsdk_remotemanagement/SessionContext.h>
#import <mpsdk_remotemanagement/SessionContextProvider.h>
#import <mpsdk_remotemanagement/SessionKeysNotAvailable.h>
#import <mpsdk_remotemanagement/SetPinCommand.h>
#import <mpsdk_remotemanagement/TrackConstructionDataV2Json.h>
#import <mpsdk_remotemanagement/TransactionCredentialData.h>
#import <mpsdk_remotemanagement/WalletRelatedDataV2Json.h>

