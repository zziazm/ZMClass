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
// This file generated by Djinni from CommandFailureAction.djinni

#import <Foundation/Foundation.h>

/**
 * Auto-generated Djinni interface for ::mpsdk::remotemanagement::queue::CommandFailureAction_t
 * 
 * Represents the actions which a command can recommend to be performed when a failure occurs.
 * 
 */
typedef NS_ENUM(NSInteger, CommandFailureAction)
{
    /**
     * 
     * The command should be executed again
     * 
     */
    CommandFailureAction_RETRY,
    /**
     * 
     * The command should be left in the queue, but processing should stop
     * 
     */
    CommandFailureAction_INVALIDATE_SESSION_AND_TRY_AGAIN,
    /**
     * 
     * All commands should be removed from the queue. Failure callbacks should be called
     * 
     */
    CommandFailureAction_CLEAR_QUEUE,
    /**
     * 
     * The command should be removed from the queue and the next command will be executed
     * 
     */
    CommandFailureAction_REMOVE_FROM_QUEUE,
    CommandFailureAction_UNKNOWN,
};