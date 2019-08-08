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
// This file generated by Djinni from CardDsrpDataJson.djinni

#import <Foundation/Foundation.h>


/** Auto-generated Djinni interface for ::mpsdk::card::profile::sdk::CardDsrpDataJson_t */
@interface CardDsrpDataJson : NSObject

- (id _Nonnull)init;

@property(nonatomic, readwrite) NSString* _Nonnull cvrMaskAnd;
- (NSString* _Nonnull)cvrMaskAnd;
- (void)setCvrMaskAnd:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull ciacDecline;
- (NSString* _Nonnull)ciacDecline;
- (void)setCiacDecline:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull par;
- (NSString* _Nonnull)par;
- (void)setPar:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull ucafVersion;
- (NSString* _Nonnull)ucafVersion;
- (void)setUcafVersion:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull umdGeneration;
- (NSString* _Nonnull)umdGeneration;
- (void)setUmdGeneration:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull cvmModel;
- (NSString* _Nonnull)cvmModel;
- (void)setCvmModel:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull issuerApplicationData;
- (NSString* _Nonnull)issuerApplicationData;
- (void)setIssuerApplicationData:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull track2EquivalentData;
- (NSString* _Nonnull)track2EquivalentData;
- (void)setTrack2EquivalentData:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull panSequenceNumber;
- (NSString* _Nonnull)panSequenceNumber;
- (void)setPanSequenceNumber:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull expiryDate;
- (NSString* _Nonnull)expiryDate;
- (void)setExpiryDate:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull aip;
- (NSString* _Nonnull)aip;
- (void)setAip:(NSString* _Nonnull)val;

@end