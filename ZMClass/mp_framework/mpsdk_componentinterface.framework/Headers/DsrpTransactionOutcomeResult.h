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
// This file generated by Djinni from DsrpTransactionOutcomeResult.djinni

#import <Foundation/Foundation.h>

/**
 * Auto-generated Djinni interface for ::mpsdk::componentinterface::DsrpTransactionOutcomeResult_t
 * 
 * The result of the DSRP payment
 * 
 * 
 * 
 */
typedef NS_ENUM(NSInteger, DsrpTransactionOutcomeResult)
{
    DsrpTransactionOutcomeResult_OK,
    DsrpTransactionOutcomeResult_INTERNAL_ERROR,
    DsrpTransactionOutcomeResult_ERROR_UNEXPECTED_DATA,
    DsrpTransactionOutcomeResult_ERROR_INVALID_INPUT,
    DsrpTransactionOutcomeResult_ERROR_WRONG_STATE,
    DsrpTransactionOutcomeResult_ERROR_INCOMPATIBLE_PROFILE,
    DsrpTransactionOutcomeResult_DECLINED,
};
