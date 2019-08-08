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
// This file generated by Djinni from ByteArray.djinni

#import <Foundation/Foundation.h>
@class ByteArray;
@class ByteArray;


/** Auto-generated Djinni interface for ::mpsdk::utils::bytes::ByteArray_t */
@interface ByteArray : NSObject

/**
 * 
 * Get a ByteArray_t of a specified length
 * 
 */
+ (ByteArray* _Nonnull)get:(int32_t)size;

/**
 * 
 * Create a Byte Array object with the equivalent value of the input
 * The input data is copied
 * 
 * @param hexString A Java byte array
 * @return a ByteArray_t object that has an equivalent value of the input data
 * 
 */
+ (ByteArray* _Nonnull)ofHexString:(NSString* _Nonnull)hexString;

/**
 * 
 * Create a Byte Array object with the equivalent value of the input
 * The input data is copied
 * 
 * @param value The Value of the ByteArray_t as Short (e.g. 127 -> 0x007F, 257 -> 0x0101)
 * @return a ByteArray_t object that has an equivalent value of the input data
 * 
 */
+ (ByteArray* _Nonnull)ofShort:(int16_t)value;

/**
 * 
 * Create a Byte Array object with the equivalent value of the input
 * The input data is copied
 * 
 * @param value The Value of the ByteArray_t as char (e.g. 127 -> 0x007F, 257 -> 0x0101)
 * @return a ByteArray_t object that has an equivalent value of the input data
 * 
 */
+ (ByteArray* _Nonnull)ofChar:(int16_t)value;

/**
 * 
 * Create a Byte Array object with the equivalent value of the input
 * The input data is copied
 * 
 * @param value The Value of the ByteArray_t as Byte (e.g. 127 -> 0x7F, 8 -> 0x08)
 * @return a ByteArray_t object that has an equivalent value of the input data
 * 
 */
+ (ByteArray* _Nonnull)ofByte:(uint8_t)value;

/**
 * 
 * Create a Byte Array object with the equivalent value of the input
 * The input data is copied
 * 
 * @param bytes A Java byte array
 * @param size  The number of bytes (from the beginning) to be added to the ByteArray_t
 * @return a ByteArray_t object that has an equivalent value of the input data
 * 
 */
+ (ByteArray* _Nonnull)ofBinaryEx:(NSData* _Nonnull)bytes
                                        size:(int32_t)size;

/**
 * 
 * Create a Byte Array object with the equivalent value of the input
 * The input data is copied
 * 
 * @param byteArray A ByteArray_t object
 * @return a ByteArray_t object that has an equivalent value of the input data
 * 
 */
+ (ByteArray* _Nonnull)ofByteArray:(ByteArray* _Nonnull)byteArray;

/**
 * 
 * Create a Byte Array object with the equivalent value of the input
 * The input data is copied
 * 
 * @param bytes A Java byte array
 * @return a ByteArray_t object that has an equivalent value of the input data
 * 
 */
+ (ByteArray* _Nullable)ofBinary:(NSData* _Nullable)bytes;

/**
 * 
 * Convert the Byte Array into a Java String Base64 formatted
 * 
 * @return A Java String with the content of the Byte Array encoded in Base64
 * 
 */
- (NSString* _Nonnull)toBase64String;

/**
 * 
 * Convert the Byte Array into a Java String HEX formatted
 * 
 * @return A Java String with the content of the Byte Array encoded in HEX
 * 
 */
- (NSString* _Nonnull)toHexString;

/**
 * 
 * Convert the Byte Array into a Java String. By default the String would be HEX formatted
 * 
 * @return A Java String with the content of the Byte Array encoded in HEX
 * 
 */
- (NSString* _Nonnull)toString;

/**
 * 
 * Convert the Byte Array into a Java String formatted as UTF 8
 * 
 * @return A Java String with the content of the Byte Array encoded in UTF 8
 * 
 */
- (NSString* _Nonnull)toUtf8String;

/**
 * 
 * Gets the bytes.
 * 
 * @return the bytes
 * 
 */
- (NSData* _Nonnull)getBytes;

/**
 * 
 * Compare ByteArray_t objects.
 * 
 * @return true if each element of the internal representation matches, false otherwise.
 * 
 */
- (BOOL)isEqualTo:(ByteArray* _Nonnull)other;

/**
 * 
 * Gets the length.
 * 
 * @return the length
 * 
 */
- (int32_t)getLength;

/**
 * 
 * Check whether the Byte Array is empty
 * 
 * @return True if empty (i.e. zero elements), false otherwise
 * 
 */
- (BOOL)isEmpty;

/**
 * 
 * Calculate the bit wise AND between the Byte Array and the Byte Array provided as parameter
 * 
 * @param andMask The Byte Array to be used as AND Mask
 * @return A third ByteArray_t which is the logic AND between the mask and the ByteArray_t
 * 
 */
- (ByteArray* _Nonnull)bitWideAnd:(ByteArray* _Nonnull)andMask;

- (ByteArray* _Nullable)append:(ByteArray* _Nullable)input;

/**
 * 
 * Sets the byte.
 * 
 * @param offset    the offset
 * @param byteValue the byteValue
 * 
 */
- (void)setByte:(int32_t)offset
      byteValue:(uint8_t)byteValue;

/**
 * 
 * Sets the bytes starting from given offset.
 * 
 * @param offset the offset - starting position
 * @param bytes  the bytes to copy
 * 
 */
- (void)setBytes:(int32_t)offset
           bytes:(NSData* _Nonnull)bytes;

/**
 * 
 * Gets the byte.
 * 
 * @param offset the offset
 * @return the byte
 * 
 */
- (uint8_t)getByte:(int32_t)offset;

/**
 * 
 * Resize.
 * 
 * @param newLength the newLength
 * 
 */
- (void)resize:(int32_t)newLength;

/**
 * 
 * Append byte.
 * 
 * @param value the value
 * 
 */
- (ByteArray* _Nonnull)appendByte:(uint8_t)value;

/**
 * 
 * Fill all the elements of the Byte Array with the same value provided as input
 * 
 * @param val The value to be used to fill the ByteArray_t
 * 
 */
- (void)fill:(uint8_t)val;

/**
 * 
 * Securely clear the internal data by zeroing all the elements
 * 
 */
- (void)clear;

/**
 * 
 * Copies the specified range of the specified Byte Array into a new Byte Array.
 * The initial index of the range (<tt>from</tt>) must lie between zero
 * and <tt>original.length</tt>, inclusive.  The value at
 * <tt>original[from]</tt> is placed into the initial element of the copy
 * (unless <tt>from == original.length</tt> or <tt>from == to</tt>).
 * Values from subsequent elements in the original array are placed into
 * subsequent elements in the copy.  The final index of the range
 * (<tt>to</tt>), which must be greater than or equal to <tt>from</tt>,
 * may be greater than <tt>original.length</tt>, in which case
 * <tt>(byte)0</tt> is placed in all elements of the copy whose index is
 * greater than or equal to <tt>original.length - from</tt>.  The length
 * of the returned array will be <tt>to - from</tt>.
 * 
 * @param from the initial index of the range to be copied, inclusive
 * @param to   the final index of the range to be copied, exclusive.
 * (This index may lie outside the array.)
 * @return a new array containing the specified range from the original array,
 * truncated or padded with zeros to obtain the required length
 * @exception ArrayIndexOutOfBoundsException if {@code from < 0}
 * or {@code from > original.length}
 * @exception IllegalArgumentException       if <tt>from &gt; to</tt>
 * @exception NullPointerException           if <tt>original</tt> is null
 * 
 */
- (ByteArray* _Nonnull)copyOfRange:(int32_t)from
                                           to:(int32_t)to;

@end