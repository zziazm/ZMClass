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
// This file generated by Djinni from RgkEncryptedMobileKeys.djinni

#import <Foundation/Foundation.h>
@class RgkEncryptedData;
@class RgkEncryptedData;


/**
 * Auto-generated Djinni interface for ::mpsdk::componentinterface::crypto::keys::RgkEncryptedMobileKeys_t
 * 
 * Defines a way to retrieve a set of Remote Management keys (MAC, DEK and Transport) that
 * are protected by the RGK key
 * 
 */
@protocol RgkEncryptedMobileKeys

/**
 * 
 * Retrieve the keyset ID used to identify this set of keys
 * 
 * @return the keyset id
 * 
 * 
 */
- (NSString* _Nonnull)getKeySetId;

/**
 * 
 * Retrieve the protected MAC key
 * 
 * @return the protected MAC key (RM_KEK)
 * 
 * 
 */
- (RgkEncryptedData* _Nonnull)getEncryptedMacKey;

/**
 * 
 * Retrieve the protected Transport key
 * 
 * @return the protected Transport key
 * 
 * 
 */
- (RgkEncryptedData* _Nonnull)getEncryptedTransportKey;

/**
 * 
 * Retrieve the protected DEK key
 * 
 * @return the protected DEK key
 * 
 * 
 */
- (RgkEncryptedData* _Nonnull)getEncryptedDek;

@end