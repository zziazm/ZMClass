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
// This file generated by Djinni from HttpManager.djinni

#import "mpsdk_componentinterface/HttpMethod.h"
#import "mpsdk_componentinterface/HttpMethod.h"
#import <Foundation/Foundation.h>
@protocol HttpResponse;
@protocol HttpResponse;


/** Auto-generated Djinni interface for ::mpsdk::componentinterface::http::HttpManager_t */
@protocol HttpManager

/**
 * 
 * Executes a web request
 * 
 * @param httpMethod        HttpMethod_t of the request to make
 * @param url               URL to send request to
 * @param requestedData     Data to accompany request
 * @param requestProperties Any request properties to accompany the request
 * @return an HttpResponse_t object
 * @exception HttpException If something goes wrong during Http communication
 * 
 * 
 */
- (id<HttpResponse> _Nullable)execute:(HttpMethod)httpMethod
                                           url:(NSString* _Nonnull)url
                                 requestedData:(NSString* _Nullable)requestedData
                             requestProperties:(NSDictionary<NSString*, NSString*>* _Nonnull)requestProperties error:(NSError* _Nullable __autoreleasing * _Nullable)error;

@end
