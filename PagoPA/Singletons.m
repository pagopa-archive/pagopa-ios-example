#import "Singletons.h"

@implementation Singletons

static PagoPACore * s_pagoPACore = nil;

+(void) configurePagoPACore:(PagoPACore *) pagoPACore;
{
    s_pagoPACore = pagoPACore;
}

+(PagoPACore *) pagoPACore;
{
    return s_pagoPACore;
}

@end
