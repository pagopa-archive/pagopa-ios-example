# Example iOS application for PagoPA

This is an example application for PagoPA which uses the binary iOS SDK.

[![Join the #pagopa channel](https://img.shields.io/badge/Slack%20channel-%23pagopa-blue.svg?logo=slack)](https://developersitalia.slack.com/messages/C8HC6FVE0)
[![Get invited](https://slack.developers.italia.it/badge.svg)](https://slack.developers.italia.it/)
[![PagoPA on forum.italia.it](https://img.shields.io/badge/Forum-PagoPA-blue.svg)](https://forum.italia.it/c/pagopa)

# Running the example

This example should run out of the box, if you open the project files with XCode.


## Using the SDK

While we are working to open up the source code of the SDK, you can already use its binary version.

To initialize the SDK instance:

```.objc
PagoPACore * pagoPACore = [[PagoPACore alloc] init];
```

To initialize a payment, it is necessary to use the following method, from a `viewController`:

```.objc
[pagoPACore startPaymentSessionWithPaymentId:paymentId presentingViewController:self delegate:self];
```

The delegate will receive the payment events: completed, failed, or canceled by the user.

```.objc
-(void) pagoPACore:(PagoPACore *) pagoPACore didCompletePayment:

(PagoPAPayment *) payment;
{
  // payment completed with success
}

-(void) pagoPACorePaymentFailed:(PagoPACore *) pagoPACore;
{
  // payment failed
}

-(void) pagoPACorePaymentAbortedByUser:(PagoPACore *) pagoPACore; {
  // payment canceled by the user
}
```

**Warning**: while all of the source code of the SDK is available under an open license, we advise you NOT to change the workflow of the payment for the user, as it is implemented this way for security reasons. All changes to this workflow will result in your application not being approved by AgID for the production environment.

# Licensing

Licensed under the BSD-3-Clause license agreement. See [`LICENSE`](LICENSE) for further details.
The `PagoPaSDK` library, interacting with the core data of a card, is not part of this repository and is not licensed under BSD-3-Clause, and it is only distributed under binary form, in order to be compliant with the PCI certification. You can use and redistribute the binary component as you wish, but with no warranty whatsoever. Please see [its license](licenza_PagoPaSDK.md) (in Italian) for further details and the full text of the license.
