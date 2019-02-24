#import <Foundation/Foundation.h>
#import "NectraCreditService.h"
@class NectraCreditService;
@interface NectraCreditOption : NSObject
@property (strong, nonatomic) NSString *username;
@property (strong, nonatomic) NectraCreditService *service;
@property (strong, nonatomic) NSString *forcedFormattedUsername;

- (instancetype)initWithUsername:(NSString *)username service:(NectraCreditService *)service;
- (instancetype)initWithUsername:(NSString *)username service:(NectraCreditService *)service forcedFormattedUsername:(NSString *)forcedFormattedUsername;

- (NSString *)getActionTitle;
- (NSArray *)getLinks;
- (void)open;
@end
