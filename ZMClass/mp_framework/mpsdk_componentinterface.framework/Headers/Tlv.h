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
// This file generated by Djinni from Tlv.djinni

#import <Foundation/Foundation.h>
@class ByteArray;
@class ByteArray;


/** Auto-generated Djinni interface for ::mpsdk::utils::Tlv_t */
@interface Tlv : NSObject

/**
 * 
 * Creates a Tlv_t byte array from a tag and a value. Length is calculated.
 * 
 * @param tag   the Tlv_t tag
 * @param value the Tlv_t value
 * @return the Tlv_t byte array
 * 
 */
+ (ByteArray* _Nonnull)createWithByteArrayTag:(ByteArray* _Nonnull)tag
                                                   value:(ByteArray* _Nonnull)value;

/**
 * 
 * Creates a Tlv_t byte array from a tag and a value. Length is calculated.
 * 
 * @param tag   the Tlv_t tag
 * @param value the Tlv_t value
 * @return the Tlv_t as byte[]
 * 
 */
+ (NSData* _Nonnull)createWithBinaryTag:(NSData* _Nonnull)tag
                                  value:(NSData* _Nonnull)value;

/**
 * 
 * Creates a Tlv_t byte array from a tag and a value. Length is calculated.
 * 
 * @param tag   the Tlv_t tag
 * @param value the Tlv_t value
 * @return the Tlv_t byte array
 * 
 */
+ (ByteArray* _Nonnull)createWithByteTag:(uint8_t)tag
                                              value:(ByteArray* _Nonnull)value;

/**
 * 
 * Creates a Tlv_t byte array from a tag and a value. Length is calculated.
 * Data Input is in Hex String
 * 
 * @param tag   the Tlv_t tag (HEX String)
 * @param value the Tlv_t value (HEX String)
 * @return the Tlv_t byte array (HEX String)
 * 
 */
+ (NSString* _Nonnull)createWithStringTag:(NSString* _Nonnull)tag
                                    value:(NSString* _Nonnull)value;

/**
 * 
 * Calculate the Tlv_t length of a value.
 * 
 * @param value the value for which the length is returned
 * @return the length of the value.
 * 
 */
+ (ByteArray* _Nonnull)lengthBytes:(ByteArray* _Nonnull)value;

@end
