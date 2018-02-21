#ifndef PagoPaSDK_h
#define PagoPaSDK_h

#import <UIKit/UIKit.h>

//! Project version number for PagoPaSDK.
FOUNDATION_EXPORT double PagoPaSDKVersionNumber;

//! Project version string for PagoPaSDK.
FOUNDATION_EXPORT const unsigned char PagoPaSDKVersionString[];

#import <PagoPaSDK/PagoPACore.h>

// Objc

#import <PagoPaSDK/PagoPABundle.h>
#import <PagoPaSDK/WALBundle.h>
#import <PagoPaSDK/PPAViewsBuilderObjc.h>
#import <PagoPaSDK/WALUiNativeRouterObjC.h>
#import <PagoPaSDK/PPAAppearance.h>

// Core

#import <PagoPaSDK/WALApiCallback.h>
#import <PagoPaSDK/WALApiListener.h>
#import <PagoPaSDK/WALAsyncTask.h>
#import <PagoPaSDK/WALBillingAddressCallback.h>
#import <PagoPaSDK/WALBillingAddressDetailAddPresenter.h>
#import <PagoPaSDK/WALBillingAddressDetailAddView.h>
#import <PagoPaSDK/WALBillingAddressDetailUpdatePresenter.h>
#import <PagoPaSDK/WALBillingAddressDetailUpdateView.h>
#import <PagoPaSDK/WALBillingAddressListPresenter.h>
#import <PagoPaSDK/WALBillingAddressListView.h>
#import <PagoPaSDK/WALBillingAddressVm.h>
#import <PagoPaSDK/WALCoreParamsInterface.h>
#import <PagoPaSDK/WALCoreRoutes.h>
#import <PagoPaSDK/WALCoreViewsBuilder.h>
#import <PagoPaSDK/WALCreditCardVm.h>
#import <PagoPaSDK/WALDeviceInformations.h>
#import <PagoPaSDK/WALDeviceOs.h>
#import <PagoPaSDK/WALEventLoop.h>
#import <PagoPaSDK/WALHttp.h>
#import <PagoPaSDK/WALHttpAction.h>
#import <PagoPaSDK/WALHttpCallback.h>
#import <PagoPaSDK/WALHttpError.h>
#import <PagoPaSDK/WALHttpSessionTokenType.h>
#import <PagoPaSDK/WALI18n.h>
#import <PagoPaSDK/WALLifecycle.h>
#import <PagoPaSDK/WALLogger.h>
#import <PagoPaSDK/WALPpaPaymentMethodVm.h>
#import <PagoPaSDK/WALPpaPaymentVm.h>
#import <PagoPaSDK/WALPpaWalletType.h>
#import <PagoPaSDK/WALPreferences.h>
#import <PagoPaSDK/WALRouteInformation.h>
#import <PagoPaSDK/WALRouterType.h>
#import <PagoPaSDK/WALThreadLauncher.h>
#import <PagoPaSDK/WALTransactionVm.h>
#import <PagoPaSDK/WALUiAlertCallback.h>
#import <PagoPaSDK/WALUiNativeRouter.h>
#import <PagoPaSDK/WALUiRouteAction.h>
#import <PagoPaSDK/WALUiRouteInformation.h>
#import <PagoPaSDK/WALUiRoutePresentationMode.h>
#import <PagoPaSDK/WALUiRouter.h>
#import <PagoPaSDK/WALUserVm.h>
#import <PagoPaSDK/WALWalletVm.h>
#import <PagoPaSDK/WALWebOperationVm.h>

// PagoPA

#import <PagoPaSDK/WALPpaAccessPresenter.h>
#import <PagoPaSDK/WALPpaAccessView.h>
#import <PagoPaSDK/WALPpaAddCreditCardPresenter.h>
#import <PagoPaSDK/WALPpaAddCreditCardView.h>
#import <PagoPaSDK/WALPpaChangePhoneNumberPresenter.h>
#import <PagoPaSDK/WALPpaChangePhoneNumberView.h>
#import <PagoPaSDK/WALPpaConfirmCreditCardPaymentPresenter.h>
#import <PagoPaSDK/WALPpaConfirmCreditCardPaymentView.h>
#import <PagoPaSDK/WALPpaConfirmResetPasswordPresenter.h>
#import <PagoPaSDK/WALPpaConfirmResetPasswordView.h>
#import <PagoPaSDK/WALPpaCreditCardSelectAcquirerPresenter.h>
#import <PagoPaSDK/WALPpaCreditCardSelectAcquirerView.h>
#import <PagoPaSDK/WALPpaExternalPaymentPresenter.h>
#import <PagoPaSDK/WALPpaExternalPaymentView.h>
#import <PagoPaSDK/WALPpaExternalPaymentVm.h>
#import <PagoPaSDK/WALPpaInsertEmailPresenter.h>
#import <PagoPaSDK/WALPpaInsertEmailView.h>
#import <PagoPaSDK/WALPpaInsertOtpPresenter.h>
#import <PagoPaSDK/WALPpaInsertOtpView.h>
#import <PagoPaSDK/WALPpaInsertPasswordPresenter.h>
#import <PagoPaSDK/WALPpaInsertPasswordView.h>
#import <PagoPaSDK/WALPpaInsertSecretCodePresenter.h>
#import <PagoPaSDK/WALPpaInsertSecretCodeView.h>
#import <PagoPaSDK/WALPpaLoadingPresenter.h>
#import <PagoPaSDK/WALPpaLoadingStatus.h>
#import <PagoPaSDK/WALPpaLoadingView.h>
#import <PagoPaSDK/WALPpaOtherPaymentMethodTypesPresenter.h>
#import <PagoPaSDK/WALPpaOtherPaymentMethodTypesView.h>
#import <PagoPaSDK/WALPpaPasswordStrengthVm.h>
#import <PagoPaSDK/WALPpaPaymentCompletedPresenter.h>
#import <PagoPaSDK/WALPpaPaymentCompletedView.h>
#import <PagoPaSDK/WALPpaPaymentMethodTypesPresenter.h>
#import <PagoPaSDK/WALPpaPaymentMethodTypesView.h>
#import <PagoPaSDK/WALPpaPaymentMethodTypeVm.h>
#import <PagoPaSDK/WALPpaPaymentStatus.h>
#import <PagoPaSDK/WALPpaRecoveryChangePasswordPresenter.h>
#import <PagoPaSDK/WALPpaRecoveryChangePasswordView.h>
#import <PagoPaSDK/WALPpaRecoveryInsertPasswordPresenter.h>
#import <PagoPaSDK/WALPpaRecoveryInsertPasswordView.h>
#import <PagoPaSDK/WALPpaRecoveryResultPresenter.h>
#import <PagoPaSDK/WALPpaRecoveryResultView.h>
#import <PagoPaSDK/WALPpaRegistrationCompletedBankPresenter.h>
#import <PagoPaSDK/WALPpaRegistrationCompletedBankView.h>
#import <PagoPaSDK/WALPpaRegistrationCompletedCreditCardPresenter.h>
#import <PagoPaSDK/WALPpaRegistrationCompletedCreditCardView.h>
#import <PagoPaSDK/WALPpaRegistrationCompletedDataVm.h>
#import <PagoPaSDK/WALPpaRegistrationMethodBankSavedPresenter.h>
#import <PagoPaSDK/WALPpaRegistrationMethodBankSavedView.h>
#import <PagoPaSDK/WALPpaRegistrationMethodCreditCardSavedPresenter.h>
#import <PagoPaSDK/WALPpaRegistrationMethodCreditCardSavedView.h>
#import <PagoPaSDK/WALPpaRegistrationMethodDefaultPresenter.h>
#import <PagoPaSDK/WALPpaRegistrationMethodDefaultView.h>
#import <PagoPaSDK/WALPpaRegistrationStep1Presenter.h>
#import <PagoPaSDK/WALPpaRegistrationStep1View.h>
#import <PagoPaSDK/WALPpaRegistrationStep2Presenter.h>
#import <PagoPaSDK/WALPpaRegistrationStep2View.h>
#import <PagoPaSDK/WALPpaRegistrationStep3Presenter.h>
#import <PagoPaSDK/WALPpaRegistrationStep3View.h>
#import <PagoPaSDK/WALPpaRoutes.h>
#import <PagoPaSDK/WALPpaSavedPaymentMethodsPresenter.h>
#import <PagoPaSDK/WALPpaSavedPaymentMethodsView.h>
#import <PagoPaSDK/WALPpaSelectBankPaymentMethodPresenter.h>
#import <PagoPaSDK/WALPpaSelectBankPaymentMethodView.h>
#import <PagoPaSDK/WALPpaSelectedBankPaymentMethodPresenter.h>
#import <PagoPaSDK/WALPpaSelectedBankPaymentMethodView.h>
#import <PagoPaSDK/WALPpaSession.h>
#import <PagoPaSDK/WALPpaSessionCallback.h>
#import <PagoPaSDK/WALPpaTermsPresenter.h>
#import <PagoPaSDK/WALPpaTermsView.h>
#import <PagoPaSDK/WALPpaTopBarButton.h>
#import <PagoPaSDK/WALPpaTopBarPresenter.h>
#import <PagoPaSDK/WALPpaTopBarView.h>
#import <PagoPaSDK/WALPpaTopBarVm.h>
#import <PagoPaSDK/WALPpaTransactionDetailPresenter.h>
#import <PagoPaSDK/WALPpaTransactionDetailView.h>
#import <PagoPaSDK/WALPpaTransactionsListPresenter.h>
#import <PagoPaSDK/WALPpaTransactionsListView.h>
#import <PagoPaSDK/WALPpaUnregisteredPaymentCompletedPresenter.h>
#import <PagoPaSDK/WALPpaUnregisteredPaymentCompletedView.h>
#import <PagoPaSDK/WALPpaUserMenuPresenter.h>
#import <PagoPaSDK/WALPpaUserMenuView.h>
#import <PagoPaSDK/WALPpaViewsBuilder.h>
#import <PagoPaSDK/WALPpaWaitingForPaymentPresenter.h>
#import <PagoPaSDK/WALPpaWaitingForPaymentView.h>
#import <PagoPaSDK/WALPpaWebOperationPresenter.h>
#import <PagoPaSDK/WALPpaWebOperationView.h>


#endif /* PagoPaSDK_h */
