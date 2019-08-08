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
// This file generated by Djinni from TlvEditor.djinni

#import <Foundation/Foundation.h>
@class TlvEditor;
@class TlvEditor;


/** Auto-generated Djinni interface for ::mpsdk::utils::TlvEditor_t */
@interface TlvEditor : NSObject

/**
 * 
 * Factory method to build a TLV Editor object based on the input data as byte[]
 * 
 * @param data The input data which is expected to be a valid TLV BER
 * @return The TlvEditor_t object representing the input data
 * 
 */
+ (TlvEditor* _Nullable)of:(NSData* _Nonnull)data;

/**
 * 
 * Get the value for a given tag, if present. Null if not tag can be found
 * 
 * @param tag The Tag for which the value should be returned as byte[]
 * @return The value of that tag, if found. Null otherwise.
 * 
 */
- (NSData* _Nullable)getValueByBinaryTag:(NSData* _Nonnull)tag;

/**
 * 
 * Get the value for a given tag, if present. Null if not tag can be found
 * 
 * @param tag The Tag for which the value should be returned as String
 * @return The value of that tag, if found. Null otherwise.
 * 
 */
- (NSData* _Nullable)getValueByStringTag:(NSString* _Nonnull)tag;

/**
 * 
 * Function to add a TLV. If the same tag is already present, the tag is updated
 * 
 * @param tag   The Tag to be added
 * @param value The value to be added
 * 
 */
- (void)addTlv:(NSData* _Nonnull)tag
         value:(NSData* _Nonnull)value;

/**
 * 
 * Rebuild each TLV entry and rebuild the entire TLV
 * 
 */
- (NSData* _Nonnull)rebuildByteArray;

@end
