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
// This file generated by Djinni from DigitizedCardJson.djinni

#import <Foundation/Foundation.h>
@protocol DigitizedCard;
@class CardWalletRelatedDataJson;
@class CardContactlessPaymentDataJson;
@class CardDsrpDataJson;
@class CardDsrpDataJson;
@class CardContactlessPaymentDataJson;
@class CardWalletRelatedDataJson;
@protocol DigitizedCard;


/** Auto-generated Djinni interface for ::mpsdk::card::profile::sdk::DigitizedCardJson_t */
@interface DigitizedCardJson : NSObject

- (id _Nonnull)init;

@property(nonatomic, readwrite) CardDsrpDataJson* _Nonnull dsrpData;
- (CardDsrpDataJson* _Nonnull)dsrpData;
- (void)setDsrpData:(CardDsrpDataJson* _Nonnull)val;

@property(nonatomic, readwrite) CardContactlessPaymentDataJson* _Nonnull contactlessPaymentData;
- (CardContactlessPaymentDataJson* _Nonnull)contactlessPaymentData;
- (void)setContactlessPaymentData:(CardContactlessPaymentDataJson* _Nonnull)val;

@property(nonatomic, readwrite) CardWalletRelatedDataJson* _Nonnull walletRelatedData;
- (CardWalletRelatedDataJson* _Nonnull)walletRelatedData;
- (void)setWalletRelatedData:(CardWalletRelatedDataJson* _Nonnull)val;

@property(nonatomic, readwrite) BOOL isTransactionIdRequired;
- (BOOL)isTransactionIdRequired;
- (void)setIsTransactionIdRequired:(BOOL)val;

@property(nonatomic, readwrite) NSString* _Nonnull productType;
- (NSString* _Nonnull)productType;
- (void)setProductType:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull accountType;
- (NSString* _Nonnull)accountType;
- (void)setAccountType:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull pan;
- (NSString* _Nonnull)pan;
- (void)setPan:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull cardCountryCode;
- (NSString* _Nonnull)cardCountryCode;
- (void)setCardCountryCode:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull digitizedCardId;
- (NSString* _Nonnull)digitizedCardId;
- (void)setDigitizedCardId:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull profileVersion;
- (NSString* _Nonnull)profileVersion;
- (void)setProfileVersion:(NSString* _Nonnull)val;

- (NSData* _Nonnull)getContent:(id<DigitizedCard> _Nonnull)digitizedCard;

- (id<DigitizedCard> _Nonnull)getCard:(NSData* _Nonnull)content;

@end
