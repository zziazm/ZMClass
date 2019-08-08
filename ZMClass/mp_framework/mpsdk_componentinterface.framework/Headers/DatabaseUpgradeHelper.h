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
// This file generated by Djinni from DatabaseUpgradeHelper.djinni

#import <Foundation/Foundation.h>
@protocol DatabaseUpgradeCrypto;
@protocol DatabaseUpgradeCrypto;


/**
 * Auto-generated Djinni interface for ::mpsdk::componentinterface::database::DatabaseUpgradeHelper_t
 * 
 * Helps the LDE to update from one version to another by providing the necessary logic to
 * serialize / deserialize objects
 * 
 */
@protocol DatabaseUpgradeHelper

/**
 * 
 * Accepts a transaction credential and returns a serialized version
 * 
 * @return a serialized transaction credential
 * 
 * 
 */
- (NSData* _Nonnull)serializeTransactionCredential:(NSString* _Nonnull)id
                                           sukInfo:(NSData* _Nonnull)sukInfo
                                 sukContactlessUmd:(NSData* _Nonnull)sukContactlessUmd
                               sukRemotePaymentUmd:(NSData* _Nonnull)sukRemotePaymentUmd
                           sessionKeyContactlessMd:(NSData* _Nonnull)sessionKeyContactlessMd
                         sessionKeyRemotePaymentMd:(NSData* _Nonnull)sessionKeyRemotePaymentMd
                          sessionKeyContactlessUmd:(NSData* _Nonnull)sessionKeyContactlessUmd
                        sessionKeyRemotePaymentUmd:(NSData* _Nonnull)sessionKeyRemotePaymentUmd
                                               idn:(NSData* _Nonnull)idn
                                               atc:(int32_t)atc
                                              hash:(NSData* _Nonnull)hash;

/**
 * 
 * Accepts a transaction log and returns a serialized version
 * 
 * @return a serialized transaction log
 * 
 * 
 */
- (NSData* _Nonnull)serializeTransactionLog:(NSString* _Nonnull)tokenUniqueReference
                        unpredictableNumber:(NSData* _Nonnull)unpredictableNumber
                                       date:(int64_t)date
                                     amount:(int64_t)amount
                               currencyCode:(int32_t)currencyCode
                           cryptogramFormat:(uint8_t)cryptogramFormat
                              transactionId:(NSData* _Nonnull)transactionId;

/**
 * 
 * Return the {@link DatabaseUpgradeCrypto_t}
 * 
 * @return Instance of {@link DatabaseUpgradeCrypto_t}
 * 
 * 
 */
- (id<DatabaseUpgradeCrypto> _Nonnull)getDatabaseUpgradeCrypto;

/**
 * 
 * Return the MPA key which is used to generate the database key
 * 
 * @return byte array of MPA key
 * 
 * 
 */
- (NSData* _Nonnull)getMpaKey;

@end
