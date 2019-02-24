#import <Foundation/Foundation.h>
#import "NectraCreditOption.h"

@class NectraCreditOption;

@interface NectraCreditService : NSObject
@property (strong, nonatomic) NSString *usernameFormatter;
@property (strong, nonatomic) NSString *actionTitleFormatter;
@property (strong, nonatomic) NSArray *linkFormatters;
@property (strong, nonatomic) NSString *imageName;

- (instancetype)initWithUsernameFormatter:(NSString *)usernameFormatter actionTitleFormatter:(NSString *)actionTitleFormatter linkFormatters:(NSArray *)linkFormatters imageName:(NSString *)imageName;
- (instancetype)initWithActionTitleFormatter:(NSString *)actionTitleFormatter linkFormatters:(NSArray *)linkFormatters imageName:(NSString *)imageName;

- (NSString *)getFormattedUsernameForOption:(NectraCreditOption *)option;
- (NSString *)getActionTitleForOption:(NectraCreditOption *)option;
- (NSArray *)getLinksForOption:(NectraCreditOption *)option;

// Pre-set:
+ (NectraCreditService *)serviceWithName:(NSString *)name;
@end
