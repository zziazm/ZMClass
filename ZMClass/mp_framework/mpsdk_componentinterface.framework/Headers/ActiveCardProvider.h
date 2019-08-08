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
// This file generated by Djinni from ActiveCardProvider.djinni

#import "mpsdk_componentinterface/PaymentContext.h"
#import "mpsdk_componentinterface/PaymentContext.h"
#import <Foundation/Foundation.h>
@protocol Card;
@protocol CardManager;
@protocol Card;
@protocol CardManager;


/**
 * Auto-generated Djinni interface for ::mpsdk::componentinterface::ActiveCardProvider_t
 * 
 * Should be implemented by the UI to provide the SDK with the card to use.
 * <p/>
 * This is required by the HCE service so the SDK knows which card to process the transaction
 * against.
 * 
 * 
 * 
 */
@protocol ActiveCardProvider

/**
 * 
 * Returns the card the SDK should use for processing a payment.
 * 
 * @param paymentContext the context of the payment
 * @param cardManager    Instance of CardManager_t to give Card_t Provider ability to retrieve
 * default card
 * @return the card that the SDK should use to process the payment. If no card is available then
 * this should return null.
 * 
 * 
 */
- (id<Card> _Nullable)getActiveCard:(PaymentContext)paymentContext
                                 cardManager:(id<CardManager> _Nonnull)cardManager;

@end