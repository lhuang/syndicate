
#import <Foundation/Foundation.h>
#import "ServiceProvider.h"
#import "Account.h"
#import "GoogleReaderSync.h"
#import "GoogleReaderAuthController.h"

@interface GoogleReader : Account
{
    @private
    GoogleReaderAuthController* _authenticate;
    GoogleReaderSync* _synchronize;
}

- (id) initWithServiceProvider:(id<ServiceProvider>)serviceProvider;

@end
