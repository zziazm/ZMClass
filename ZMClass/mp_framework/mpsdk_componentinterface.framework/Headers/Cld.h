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
// This file generated by Djinni from Cld.djinni

#import <Foundation/Foundation.h>
@class Cld;
@class CardSide;
@class ByteArray;
@class ByteArray;
@class CardSide;
@class Cld;

extern int8_t const Cld_VERSION_TAG;
extern int8_t const Cld_FORM_FACTOR_TAG;
extern int8_t const Cld_FRONT_SIDE_TAG;
extern int8_t const Cld_BACK_SIDE_TAG;
extern int8_t const Cld_DEFAULT_VERSION;
extern int8_t const Cld_ID1_FORMAT;

/** Auto-generated Djinni interface for ::mpsdk::utils::payment_cld::Cld_t */
@interface Cld : NSObject

- (id _Nonnull)initWithCardLayoutDescription:(ByteArray* _Nonnull)cardLayoutDescription;

+ (Cld* _Nonnull)createWithCardLayoutDescription:(ByteArray* _Nonnull)cardLayoutDescription;

- (uint8_t)getVersion;

- (CardSide* _Nullable)getFrontSide;

- (CardSide* _Nullable)getBackSide;

- (void)clear;

+ (NSString* _Nonnull)getDefaultCldWithCardArt:(int32_t)cardArtIndex;

@end
