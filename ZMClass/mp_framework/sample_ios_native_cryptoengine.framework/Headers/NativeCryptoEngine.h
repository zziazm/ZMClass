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
// This file generated by Djinni from NativeCryptoEngine.djinni

#import <Foundation/Foundation.h>
@protocol KeyLifeCycleManager;
@protocol DatabaseCrypto;
@protocol DatabaseUpgradeCrypto;
@protocol RemoteManagementCrypto;
@protocol TransactionCrypto;
@protocol WalletDataCrypto;
@class DstDekEncryptedData;
@class WalletDekEncryptedData;
@class RMKekEncryptedData;
@class CmsDPublicKeyEncryptedData;
@class LocalDekEncryptedData;
@class DekEncryptedData;
@class RgkEncryptedData;
@class TransportKeyEncryptedData;
@protocol TransactionCryptograms;
@class CustomEncryptedData;
@protocol SessionData;
@protocol WalletIdentificationDataProvider;
@protocol IccKekEncryptedKey;
@protocol PinDataProvider;
@class CmsDPublicKeyEncryptedData;
@class CustomEncryptedData;
@class DekEncryptedData;
@class DstDekEncryptedData;
@class LocalDekEncryptedData;
@class RMKekEncryptedData;
@class RgkEncryptedData;
@class TransportKeyEncryptedData;
@class WalletDekEncryptedData;
@protocol DatabaseCrypto;
@protocol DatabaseUpgradeCrypto;
@protocol IccKekEncryptedKey;
@protocol KeyLifeCycleManager;
@protocol PinDataProvider;
@protocol RemoteManagementCrypto;
@protocol SessionData;
@protocol TransactionCrypto;
@protocol TransactionCryptograms;
@protocol WalletDataCrypto;
@protocol WalletIdentificationDataProvider;



#import "mpsdk_componentinterface/McbpCryptoServices.h"
#import "mpsdk_componentinterface/DatabaseCrypto.h"
#import "mpsdk_componentinterface/WalletDataCrypto.h"
#import "mpsdk_componentinterface/RemoteManagementCrypto.h"
#import "mpsdk_componentinterface/TransactionCrypto.h"
#import "mpsdk_componentinterface/DatabaseUpgradeCrypto.h"

/**
 * Auto-generated Djinni interface for ::mcbp::nativecrypto::NativeCryptoEngine_t
 * 
 */
@interface NativeCryptoEngine : NSObject<McbpCryptoServices, DatabaseCrypto, WalletDataCrypto, RemoteManagementCrypto, TransactionCrypto, DatabaseUpgradeCrypto>

/**
 * 
 * Retrieve the Key Lifecycle Manager for Database Storage key
 * 
 * @return the Key Lifecycle Manager for Database Storage key
 * 
 * 
 */
- (id<KeyLifeCycleManager> _Nonnull)getDatabaseStorageKeyManager;

/**
 * 
 * Retrieve the Key Lifecycle Manager for Database Storage MAC key
 * 
 * @return the Key Lifecycle Manager for Database Storage MAC key
 * 
 * 
 */
- (id<KeyLifeCycleManager> _Nonnull)getDatabaseStorageMacKeyManager;

/**
 * 
 * Retrieve the Key Lifecycle Manager for Local Data Encryption Key
 * 
 * @return the Key Lifecycle Manager for Local Data Encryption Key
 * 
 * 
 */
- (id<KeyLifeCycleManager> _Nonnull)getLocalDataEncryptionKeyManager;

/**
 * 
 * Retrieve the Key Lifecycle Manager for Remote Management key encryption key
 * 
 * @return the Key Lifecycle Manager for Remote Management key encryption key
 * 
 * 
 */
- (id<KeyLifeCycleManager> _Nonnull)getRemoteManagementKeyEncryptionKeyManager;

/**
 * 
 * Retrieve the Key Lifecycle Manager for Wallet Data encryption key
 * 
 * @return the Key Lifecycle Manager for Wallet Data encryption key
 * 
 * 
 */
- (id<KeyLifeCycleManager> _Nonnull)getWalletDataEncryptionKeyManager;

/**
 * 
 * Retrieve an implementation of the Database crypto
 * 
 * @return database crypto
 * 
 * 
 */
- (id<DatabaseCrypto> _Nonnull)getDatabaseCrypto;

/**
 * 
 * Retrieve an implementation of the Database upgrade crypto
 * 
 * @return database upgrade crypto
 * 
 * 
 */
- (id<DatabaseUpgradeCrypto> _Nonnull)getDatabaseUpgradeCrypto;

/**
 * 
 * Retrieve an implementation of the Remote Management crypto
 * 
 * @return Remote Management crypto
 * 
 * 
 */
- (id<RemoteManagementCrypto> _Nonnull)getRemoteManagementCrypto;

/**
 * 
 * Retrieve an implementation of the transaction crypto
 * 
 * @return transaction crypto
 * 
 * 
 */
- (id<TransactionCrypto> _Nonnull)getTransactionCrypto;

/**
 * 
 * Retrieve an implementation of the Remote Management crypto
 * 
 * @return Remote Management crypto
 * 
 * 
 */
- (id<WalletDataCrypto> _Nonnull)getWalletDataCrypto;

/**
 * 
 * Wipes all keys and other parameters stored by Crypto Engine
 * 
 * @return true if success
 * 
 * 
 */
- (BOOL)wipeCryptoParameters;

/**
 * 
 * Encrypt data with the current database key so it is ready to be stored
 * 
 * @param dataToBeEncrypted Data to be encrypted
 * @return Data protected with the current data storage encryption key
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (DstDekEncryptedData* _Nullable)encryptDataForStorage:(NSData* _Nonnull)dataToBeEncrypted error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Decrypt data with current database key so that is ready for use
 * 
 * @param encryptedData Previously protected data
 * @return unprotected data
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (NSData* _Nullable)unencryptStoredDataForUse:(DstDekEncryptedData* _Nonnull)encryptedData error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Provides the database component with a way to validate that the MAC it has stored for a
 * particular piece of data is in fact valid
 * 
 * @param encryptedData the data
 * @param mac           the MAC
 * @return true if the MAC is valid for the given data. False otherwise
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (BOOL)isMacValid:(NSData* _Nonnull)encryptedData
               mac:(NSData* _Nonnull)mac error:(NSError* _Nullable __autoreleasing * _Nullable)error NS_SWIFT_NOTHROW;

/**
 * 
 * Provides the database component with a way to generate a MAC for a given piece of data using
 * the current DST_MAC
 * <p>
 * This ensures data integrity.
 * 
 * @param encryptedData the data for which a MAC should be generated
 * @return the generated MAC to be stored along with the data
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (NSData* _Nullable)generateMac:(NSData* _Nonnull)encryptedData error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Provides the database component with a way to generate a MAC for a given piece of data using
 * the specified DST_MAC identified by the provided DST_MAC key Id
 * <p>
 * This ensures data integrity.
 * 
 * @param encryptedData the data for which a MAC should be generated
 * @return the generated MAC to be stored along with the data
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (NSData* _Nullable)generateMacWithKeyId:(NSData* _Nonnull)dataStorageMacKeyId
                           encryptedData:(NSData* _Nonnull)encryptedData error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Encrypts the data using the current wallet encryption key
 * 
 * @param dataToBeEncrypted The data to be encrypted
 * @return Data protected by the wallet data encryption key
 * 
 * 
 */
- (WalletDekEncryptedData* _Nonnull)encryptWalletData:(CustomEncryptedData* _Nonnull)dataToBeEncrypted;

/**
 * 
 * Encrypts the data using the specified wallet encryption key
 * 
 * @param walletDataKeyId   Id of the Wallet Data Key to use
 * @param dataToBeEncrypted The data to be encrypted
 * @return Data protected by the wallet data encryption key
 * 
 * 
 */
- (WalletDekEncryptedData* _Nonnull)encryptWalletDataWithKeyId:(NSData* _Nonnull)walletDataKeyId
                                                        dataToBeEncrypted:(CustomEncryptedData* _Nonnull)dataToBeEncrypted;

/**
 * 
 * Generate random 16 byte array for use as RGK and return the value protected by the RM_KEK
 * 
 * @return 16 byte RGK protected by RM_KEK
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (RMKekEncryptedData* _Nullable)generateEncryptedRgk:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Signs the RGK with the CMS-D public key.
 * 
 * @param encryptedRgk  Randomly Generated Key protected by the RM_KEK
 * @param cmsdPublicKey the CMS-D public key
 * @return the protected form of the RGK
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (CmsDPublicKeyEncryptedData* _Nullable)createSignedRgk:(RMKekEncryptedData* _Nonnull)encryptedRgk
                                                     cmsdPublicKey:(NSData* _Nonnull)cmsdPublicKey error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Used to extract the mobile keys that have been received protected by the RGK.
 * This includes the transport key, MAC key and the DEK key. Returns the keys protected by the
 * RM_KEK
 * 
 * @param encryptedRgk        the RM_KEK protected RGK
 * @param keyEncryptedWithRgk the key
 * @return the key provided protected by the RM_KEK
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (RMKekEncryptedData* _Nullable)exchangeRgkForRmKek:(RMKekEncryptedData* _Nonnull)encryptedRgk
                                           keyEncryptedWithRgk:(RgkEncryptedData* _Nonnull)keyEncryptedWithRgk error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Decrypts data received over the remote interface protected by the transport key and MAC key.
 * <p/>
 * Return data will not be entirely plain text since some elements will be protected by the DEK
 * key and ICC KEK.
 * <p/>
 * Decrypted data includes session data that needs to be used to continue the communication with
 * the remote server. The Remote Management module is responsible for extracting the session
 * data from the decrypted data and passing it back to the crypto module in subsequent calls
 * 
 * @param encryptedTransportKey     MDES Transport Key protected by the RM_KEK
 * @param encryptedMacKey           MDES MAC key protected by the RM_KEK
 * @param encryptedNotificationData the data received in the push notification, this data
 * contains both the transport key protected data and the MAC
 * of the protected data
 * @return the decrypted version of the pushed data
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (NSData* _Nullable)decryptNotificationData:(RMKekEncryptedData* _Nonnull)encryptedTransportKey
                            encryptedMacKey:(RMKekEncryptedData* _Nonnull)encryptedMacKey
                  encryptedNotificationData:(NSData* _Nonnull)encryptedNotificationData error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Calculates the authentication code used in communications so integrity can be checked. Device
 * fingerprint is required from the wallet as this is used in the calculation
 * 
 * @param sessionData                      the session data between the SDK and CMS-D
 * @param mobileKeySetId                   the unique identifier for the set of mobile keys
 * @param WalletIdentificationDataProvider the provider to allow access to the device
 * fingerprint
 * @return the authentication code for the message
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (NSData* _Nullable)calculateAuthenticationCode:(id<SessionData> _Nonnull)sessionData
                                 mobileKeySetId:(NSData* _Nonnull)mobileKeySetId
               walletIdentificationDataProvider:(id<WalletIdentificationDataProvider> _Nonnull)walletIdentificationDataProvider error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Used to exchange the encryption on a collection of data that has been protected by the ICC
 * KEK to
 * use L_DEK. Data is returned concatenated and protected by the L_DEK
 * <p/>
 * This is used to process the components of the ICC Key
 * 
 * @param encryptedIccKek     The ICC KEK protected by the DEK assigned by CMS-D
 * @param encryptedDekKey     The DEK key assigned by CMS-D protected by RM_KEK
 * @param iccKekEncryptedData Collection of data protected by the ICC Key
 * @return the data protected by L_DEK
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (LocalDekEncryptedData* _Nullable)exchangeIccKekForLocalDek:(DekEncryptedData* _Nonnull)encryptedIccKek
                                                        encryptedDekKey:(RMKekEncryptedData* _Nonnull)encryptedDekKey
                                                    iccKekEncryptedData:(id<IccKekEncryptedKey> _Nonnull)iccKekEncryptedData error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Exchanges the DEK encryption on a piece of data for the L_DEK.
 * <p/>
 * This is used to exchange encryption on various parts of the card profile as well as the
 * transaction credentials received during a replenish command.
 * 
 * @param dekEncryptedData data protected by the DEK received from CMS-D
 * @param encryptedDekKey  the DEK key received from the CMS-D protected by the RM_KEK
 * @return the data protected by the L_DEK
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (LocalDekEncryptedData* _Nullable)exchangeDekForLocalDek:(DekEncryptedData* _Nonnull)dekEncryptedData
                                                     encryptedDekKey:(RMKekEncryptedData* _Nonnull)encryptedDekKey error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Strips the W_DEK encryption on the mobile PIN, applies an algorithm to generate the PIN block
 * and returns the result protected by the MDES DEK.
 * <p/>
 * This is necessary for some service requests (e.g. change PIN) which need to have the data
 * protected by the MDES DEK key before it can be sent to the server.
 * 
 * @param encryptedDekKey                  MDES DEK key protected by the RM_KEK
 * @param walletIdentificationDataProvider Registration data provider
 * @param walletDekEncryptedData           data provided by the Wallet protected by the W_DEK
 * @return data protected by the DEK key
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (DekEncryptedData* _Nullable)encryptPinBlockWithDek:(RMKekEncryptedData* _Nonnull)encryptedDekKey
                               walletIdentificationDataProvider:(id<WalletIdentificationDataProvider> _Nonnull)walletIdentificationDataProvider
                                         walletDekEncryptedData:(WalletDekEncryptedData* _Nonnull)walletDekEncryptedData error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Strips the W_DEK encryption on the mobile PIN, applies an algorithm to generate the PIN block
 * and returns the result protected by the RGK.
 * <p/>
 * This is necessary for generating the registration request parameters when registration is
 * performed via the payment app server
 * 
 * @param encryptedRgk                     RGK protected by the RM_KEK
 * @param walletIdentificationDataProvider Registration data provider
 * @param walletDekEncryptedData           data provided by the Wallet protected by the W_DEK
 * @return data protected by the DEK key
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (RgkEncryptedData* _Nullable)encryptPinBlockWithRgk:(RMKekEncryptedData* _Nonnull)encryptedRgk
                               walletIdentificationDataProvider:(id<WalletIdentificationDataProvider> _Nonnull)walletIdentificationDataProvider
                                         walletDekEncryptedData:(WalletDekEncryptedData* _Nonnull)walletDekEncryptedData error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Strips the DEK encryption used for the IDN in a remote request, takes the rightmost 8 bytes
 * and returns the result protected by the L_DEK
 * 
 * @param encryptedDekKey the DEK key protected by RM_KEK
 * @param encryptedIdn    the IDN protected by the DEK
 * @return rightmost 8 bytes of the decrypted IDN, protected by the L_DEK
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (LocalDekEncryptedData* _Nullable)getLocalDekEncryptedIdn:(RMKekEncryptedData* _Nonnull)encryptedDekKey
                                                         encryptedIdn:(DekEncryptedData* _Nonnull)encryptedIdn error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * @param encryptedTransportKey            MDES Transport key protected by RM_KEK
 * @param encryptedMacKey                  MDES MAC key protected by RM_KEK
 * @param serviceRequestData               the data to send to the remote server
 * @param walletIdentificationDataProvider provides access to data such as device fingerprint.
 * Encrypted
 * by W_DEK
 * @param sessionData                      session data
 * @param counter                          request counter
 * @return the protected request ready to send to the CMS
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (TransportKeyEncryptedData* _Nullable)buildRemoteServiceRequest:(RMKekEncryptedData* _Nonnull)encryptedTransportKey
                                                            encryptedMacKey:(RMKekEncryptedData* _Nonnull)encryptedMacKey
                                                         serviceRequestData:(NSData* _Nonnull)serviceRequestData
                                           walletIdentificationDataProvider:(id<WalletIdentificationDataProvider> _Nonnull)walletIdentificationDataProvider
                                                                sessionData:(id<SessionData> _Nonnull)sessionData
                                                                    counter:(int32_t)counter error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * @param encryptedTransportKey MDES Transport key protected by RM_KEK
 * @param encryptedMacKey       MDES MAC key protected by RM_KEK
 * @param encryptedResponseData the protected response data
 * @param sessionData           session data
 * @return decrypted service response
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (NSData* _Nullable)decryptRemoteServiceResponse:(RMKekEncryptedData* _Nonnull)encryptedTransportKey
                                 encryptedMacKey:(RMKekEncryptedData* _Nonnull)encryptedMacKey
                           encryptedResponseData:(TransportKeyEncryptedData* _Nonnull)encryptedResponseData
                                     sessionData:(id<SessionData> _Nonnull)sessionData error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Initializes the ICC RSA key using the provided protected components
 * 
 * @param encryptedIccKey the components of the ICC Key protected by L_DEK
 * @return the length of the key
 * @throws GeneralSecurityException If something goes wrong during initialization of IccKey
 * 
 * 
 */
- (int32_t)initIccKey:(LocalDekEncryptedData* _Nonnull)encryptedIccKey error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Applies the mobile PIN to a single use key in order to make a session key
 * 
 * @param pinProvider           the PIN provider from which a Mobile PIN can be obtained
 * @param encryptedSingleUseKey A single use key that is protected with the L_DEK key
 * @return Session key protected by the L_DEK key
 * @throws GeneralSecurityException If something goes wrong while deriving session key
 * 
 * 
 */
- (LocalDekEncryptedData* _Nullable)deriveSessionKeyFromSingleUseKey:(id<PinDataProvider> _Nonnull)pinProvider
                                                         encryptedSingleUseKey:(LocalDekEncryptedData* _Nonnull)encryptedSingleUseKey error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Encrypts session key with the local DEK
 * 
 * @param sessionKey session key
 * @return local DEK protected data
 * 
 * 
 */
- (LocalDekEncryptedData* _Nonnull)encryptSessionKey:(NSData* _Nonnull)sessionKey;

- (id<TransactionCryptograms> _Nullable)buildGenerateAcCryptograms:(NSData* _Nonnull)transactionCryptogramInput
                                                     encryptedUmdSessionKey:(LocalDekEncryptedData* _Nonnull)encryptedUmdSessionKey
                                                      encryptedMdSessionKey:(LocalDekEncryptedData* _Nonnull)encryptedMdSessionKey error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Generate both UMD and MD cryptograms for the Compute Cryptographic Checksum operation
 * 
 * @param transactionCryptogramInput        The Input for the ComputeCc cryptogram calculation
 * @param encryptedContactlessUmdSessionKey The contactless UMD Session Key
 * @param encryptedContactlessMdSessionKey  The contactless MD Session key
 * @return Both UMD and MD cryptograms
 * @throws GeneralSecurityException If something goes wrong the M/Chip Engine will try to catch
 * a GeneralSecurityException. An implementation of this
 * interface is expected to raise only those exceptions
 * 
 * 
 */
- (id<TransactionCryptograms> _Nullable)buildComputeCcCryptograms:(NSData* _Nonnull)transactionCryptogramInput
                                         encryptedContactlessUmdSessionKey:(LocalDekEncryptedData* _Nonnull)encryptedContactlessUmdSessionKey
                                          encryptedContactlessMdSessionKey:(LocalDekEncryptedData* _Nonnull)encryptedContactlessMdSessionKey error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Builds signed dynamic application data. Combines different headers, IDN, application data and
 * computes hash over it. Then wrap with another headers and encrypt with ICC key
 * 
 * @param ddaHeader       DDA Header
 * @param ddaTrailer      DDA Trailer
 * @param dadHeader       Dynamic Application Data Header
 * @param applicationData Dynamic Application Data
 * @param encryptedIdn    The L DEK protected IDN credential object as received from the CMS
 * @return data protected by ICC key
 * @throws GeneralSecurityException If something goes wrong the M/Chip Engine will try to catch
 * a GeneralSecurityException. An implementation of this
 * interface is expected to raise only those exceptions
 * 
 * 
 */
- (NSData* _Nullable)buildSignedDynamicApplicationData:(NSData* _Nonnull)ddaHeader
                                           ddaTrailer:(NSData* _Nonnull)ddaTrailer
                                            dadHeader:(NSData* _Nonnull)dadHeader
                                      applicationData:(NSData* _Nonnull)applicationData
                                         encryptedIdn:(LocalDekEncryptedData* _Nonnull)encryptedIdn error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Applies SHA 1 Hash algorithm to given data
 * 
 * @param dataToHash The data to hash
 * @return The data hashed with SHA 1
 * 
 * 
 */
- (NSData* _Nonnull)sha1:(NSData* _Nonnull)dataToHash;

/**
 * 
 * Applies SHA 256 Hash algorithm to given data
 * 
 * @param dataToHash The data to hash
 * @return The data hashed with SHA 256
 * 
 * 
 */
- (NSData* _Nonnull)sha256:(NSData* _Nonnull)dataToHash;

/**
 * 
 * Encrypt data with the current database key so it is ready to be stored
 * 
 * @param dataToBeEncrypted Data to be encrypted
 * @return Data protected with the Local DEK
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (LocalDekEncryptedData* _Nullable)encryptDataUsingLocalDekKey:(NSData* _Nonnull)dataToBeEncrypted error:(NSError* _Nullable __autoreleasing * _Nullable)error;

/**
 * 
 * Encrypt data with the current database key so it is ready to be stored
 * 
 * @param dataToBeEncrypted Data to be encrypted
 * @return Data protected with Remote Key Encryption Key (RM KEK)
 * @throws GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (RMKekEncryptedData* _Nullable)encryptDataUsingRemoteKekKey:(NSData* _Nonnull)dataToBeEncrypted error:(NSError* _Nullable __autoreleasing * _Nullable)error;

@end