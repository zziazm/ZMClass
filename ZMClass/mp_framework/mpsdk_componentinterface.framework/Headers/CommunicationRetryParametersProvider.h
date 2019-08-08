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
// This file generated by Djinni from CommunicationRetryParametersProvider.djinni

#import <Foundation/Foundation.h>


/**
 * Auto-generated Djinni interface for ::mpsdk::componentinterface::remotemanagement::CommunicationRetryParametersProvider_t
 * 
 * Interface allows to provide custom MDES communication retry parameters, i.e.,
 * <Li>Maximum number of retries.</Li>
 * <Li>Retry intervals.</Li>
 * 
 */
@protocol CommunicationRetryParametersProvider

/**
 * 
 * Maximum retry counts must be less than or equal to 5 and greater than 0
 * 
 * @return Maximum number of retries
 * 
 * 
 */
- (int32_t)getRetryCount;

/**
 * 
 * Returns retry intervals, If maximum retries are 3 then retries intervals can be  2 3 and 5
 * seconds respectively
 * Value of each retry interval must be greater than or equal to 2 seconds and less than 60
 * seconds
 * 
 * @return an array of retry intervals in seconds.
 * 
 * 
 */
- (NSArray<NSNumber*>* _Nonnull)getRetryIntervals;

@end
