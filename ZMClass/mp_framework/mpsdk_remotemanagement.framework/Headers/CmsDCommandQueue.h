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
// This file generated by Djinni from CmsDCommandQueue.djinni

#import "mpsdk_remotemanagement/CommandStatus.h"
#import "mpsdk_remotemanagement/CommandStatus.h"
#import <Foundation/Foundation.h>
@protocol CommandQueueHelper;
@protocol SessionContextProvider;
@class RemoteManagementCommand;
@protocol CommandQueueHelper;
@class RemoteManagementCommand;
@class RemoteManagementCommand;



#import "mpsdk_remotemanagement/CommandQueue.h"

/**
 * Auto-generated Djinni interface for ::mpsdk::remotemanagement::queue::CmsDCommandQueue_t
 * 
 * The default implementation of the Command Queue
 * 
 */
@interface CmsDCommandQueue : NSObject<CommandQueue>

- (id _Nonnull)initWithQueueHelperAndSessionContextProvider:(id<CommandQueueHelper> _Nonnull)queueHelper sessionContextProvider:(id<SessionContextProvider> _Nonnull)sessionContextProvider;

@property(nonatomic, readwrite) id<CommandQueueHelper> _Nonnull mCommandQueueHelper;
- (id<CommandQueueHelper> _Nonnull)mCommandQueueHelper;
- (void)setMCommandQueueHelper:(id<CommandQueueHelper> _Nonnull)val;

@property(nonatomic, readwrite) NSArray<RemoteManagementCommand*>* _Nonnull mCommandHistory;
- (NSArray<RemoteManagementCommand*>* _Nonnull)mCommandHistory;
- (void)setMCommandHistory:(NSArray<RemoteManagementCommand*>* _Nonnull)val;

/**
 * 
 * Adds a command to the back of the queue iff same command for same token unique reference is not
 * already present in queue
 * @param command the command to add
 * 
 */
- (NSString* _Nonnull)add:(RemoteManagementCommand* _Nonnull)command;

/**
 * 
 * when a new session is arrived this method can be called to tell the queue that a new session has arrived
 * 
 */
- (void)onSessionArrived;

- (BOOL)isValidSession;

/**
 * 
 * Adds a command to the history stack
 * 
 * @param command the command itself
 * 
 */
- (void)addToHistory:(RemoteManagementCommand* _Nonnull)command;

/**
 * 
 * Clears all commands from the queue. Failure events should be triggered for all commands currently in queue.
 * 
 */
- (void)clearQueue;

/**
 * 
 * @return current executing command
 * 
 */
- (RemoteManagementCommand* _Nonnull)getCurrentCommand;

/**
 * 
 * Retrieves the status of a command identified by the given ID. This will only check the status
 * of the queue, the remote status should not be checked.
 * @param requestId the ID of the request to check
 * @returns the local status of the command
 * 
 */
- (CommandStatus)getCommandStatus:(NSString* _Nonnull)requestId;

- (NSString* _Nullable)getCommandTaskId:(NSString* _Nonnull)requestId;

/**
 * 
 * Helper method to find Command in Queue
 * @param requestId Request Id of the command to find
 * @returns the command
 * 
 */
- (RemoteManagementCommand* _Nonnull)getCommandFromQueue:(NSString* _Nonnull)requestId;

/**
 * 
 * Helper method to find command in history
 * @param requestId Request Id of the command to find
 * @returns the command
 * 
 */
- (RemoteManagementCommand* _Nonnull)getCommandFromHistory:(NSString* _Nonnull)requestId;

- (NSString* _Nonnull)getInProgressRequestId;

- (int32_t)getSize;

- (NSString* _Nullable)getQueueStoppedReason;

- (BOOL)isCommandExecuting;

- (RemoteManagementCommand* _Nonnull)getFirst;

@end