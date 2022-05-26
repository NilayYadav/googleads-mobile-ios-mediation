//
//  GADPangleRTBNativeRenderer.h
//  Adapter
//
//  Created by bytedance on 2022/5/25.
//

#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

NS_ASSUME_NONNULL_BEGIN

@interface GADPangleRTBNativeRenderer : NSObject<GADMediationNativeAd>

/// Asks the receiver to render the ad configuration.
- (void)renderNativeAdForAdConfiguration:(nonnull GADMediationNativeAdConfiguration *)adConfiguration
                       completionHandler:(nonnull GADMediationNativeLoadCompletionHandler)completionHandler;

@end

NS_ASSUME_NONNULL_END
