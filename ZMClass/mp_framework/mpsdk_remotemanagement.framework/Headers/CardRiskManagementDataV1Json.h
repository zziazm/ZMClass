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
// This file generated by Djinni from CardRiskManagementDataV1Json.djinni

#import <Foundation/Foundation.h>


/**
 * Auto-generated Djinni interface for ::mpsdk::card::profile::v1::CardRiskManagementDataV1Json_t
 * 
 * Represents the card risk management data in card profile of mdes.
 * 
 */
@interface CardRiskManagementDataV1Json : NSObject

- (id _Nonnull)init;

@property(nonatomic, readwrite) NSString* _Nonnull crmCountryCode;
- (NSString* _Nonnull)crmCountryCode;
- (void)setCrmCountryCode:(NSString* _Nonnull)val;

@property(nonatomic, readwrite) NSString* _Nonnull additionalCheckTable;
- (NSString* _Nonnull)additionalCheckTable;
- (void)setAdditionalCheckTable:(NSString* _Nonnull)val;

@end