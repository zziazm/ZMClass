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
// This file generated by Djinni from RemoteManagementCrypto.djinni

#import <Foundation/Foundation.h>
@class RMKekEncryptedData;
@class CmsDPublicKeyEncryptedData;
@class LocalDekEncryptedData;
@class DekEncryptedData;
@class RgkEncryptedData;
@class TransportKeyEncryptedData;
@protocol SessionData;
@protocol WalletIdentificationDataProvider;
@protocol IccKekEncryptedKey;
@class WalletDekEncryptedData;
@class CmsDPublicKeyEncryptedData;
@class DekEncryptedData;
@class LocalDekEncryptedData;
@class RMKekEncryptedData;
@class RgkEncryptedData;
@class TransportKeyEncryptedData;
@class WalletDekEncryptedData;
@protocol IccKekEncryptedKey;
@protocol SessionData;
@protocol WalletIdentificationDataProvider;


/**
 * Auto-generated Djinni interface for ::mpsdk::componentinterface::crypto::RemoteManagementCrypto_t
 * 
 * Provides an interface for the Database module to encrypt / unencrypt data
 * 
 */
@protocol RemoteManagementCrypto

/**
 * 
 * Generate random 16 byte array for use as RGK and return the value protected by the RM_KEK
 * 
 * @return 16 byte RGK protected by RM_KEK
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
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
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
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
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
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
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
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
 * @param walletIdentificationDataProvider the provider to allow access to the device
 * fingerprint
 * @return the authentication code for the message
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
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
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
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
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
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
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
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
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
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
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
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
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
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
 * @exception GeneralSecurityException If something goes wrong inside crypto engine
 * 
 * 
 */
- (NSData* _Nullable)decryptRemoteServiceResponse:(RMKekEncryptedData* _Nonnull)encryptedTransportKey
                                 encryptedMacKey:(RMKekEncryptedData* _Nonnull)encryptedMacKey
                           encryptedResponseData:(TransportKeyEncryptedData* _Nonnull)encryptedResponseData
                                     sessionData:(id<SessionData> _Nonnull)sessionData error:(NSError* _Nullable __autoreleasing * _Nullable)error;

@end
