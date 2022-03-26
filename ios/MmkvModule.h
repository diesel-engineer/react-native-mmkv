#import <React/RCTBridgeModule.h>

@interface MmkvModule : NSObject <RCTBridgeModule>

- (instancetype)init:(NSString *)appID bundleURL:(NSURL *)bundleURL;

@end
