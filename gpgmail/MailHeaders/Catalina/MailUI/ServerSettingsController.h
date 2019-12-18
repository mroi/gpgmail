//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSViewController.h>

#import "AccountStatusDataSourceDelegate-Protocol.h"

@class ACAccount, AccountStatusDataSource, NSError, NSMutableSet, NSNumber, NSPopUpButton, NSStackView, NSString, NSView, VerifyingServerSettingsController;

@interface ServerSettingsController : NSViewController <AccountStatusDataSourceDelegate>
{
    NSMutableSet *_accountsBeingVerified;
    NSError *_lastVerificationError;
    ACAccount *_lastAccountWithError;
    BOOL _accountNeedsSaving;
    BOOL _accountNeedsVerification;
    NSStackView *_serverSettings;
    NSView *_dynamicallyManagedProperties;
    AccountStatusDataSource *_outgoingAccountDataSource;
    NSPopUpButton *_outgoingAccountPopUp;
    VerifyingServerSettingsController *_verifyingServerSettingsController;
}

+ (id)keyPathsForValuesAffectingAccountDisablesDynamicConfiguration;
+ (id)keyPathsForValuesAffectingAccountPassword;
+ (id)keyPathsForValuesAffectingAccountUsername;
@property(retain, nonatomic) VerifyingServerSettingsController *verifyingServerSettingsController; // @synthesize verifyingServerSettingsController=_verifyingServerSettingsController;
@property(nonatomic) BOOL accountNeedsVerification; // @synthesize accountNeedsVerification=_accountNeedsVerification;
@property(nonatomic) BOOL accountNeedsSaving; // @synthesize accountNeedsSaving=_accountNeedsSaving;
@property(nonatomic) __weak NSPopUpButton *outgoingAccountPopUp; // @synthesize outgoingAccountPopUp=_outgoingAccountPopUp;
@property(retain, nonatomic) AccountStatusDataSource *outgoingAccountDataSource; // @synthesize outgoingAccountDataSource=_outgoingAccountDataSource;
@property(nonatomic) __weak NSView *dynamicallyManagedProperties; // @synthesize dynamicallyManagedProperties=_dynamicallyManagedProperties;
@property(nonatomic) __weak NSStackView *serverSettings; // @synthesize serverSettings=_serverSettings;
//- (void).cxx_destruct;
- (void)editServerList:(id)arg1 selectedAccount:(id)arg2;
@property(readonly, copy, nonatomic) NSString *advancedSettingsControllerIdentifier;
@property(readonly, copy, nonatomic) NSString *advancedSettingsSegueIdentifier;
- (void)accountDidFailToVerify:(id)arg1;
- (id)getAccountsNeedingVerification;
//- (void)_verifyAndSaveAccounts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
//- (void)verifyAndSaveAccounts:(CDUnknownBlockType)arg1;
- (void)saveAccounts:(id)arg1;
- (void)outgoingAccountDidChange:(id)arg1;
@property(retain, nonatomic) NSNumber *accountDisablesDynamicConfiguration;
@property(copy, nonatomic) NSString *accountPassword;
@property(copy, nonatomic) NSString *accountUsername;
- (void)setUpUIForAccount:(id)arg1;
- (void)dismissViewController:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
@property(retain) ACAccount *representedObject;
- (void)viewDidLoad;
- (id)willPresentError:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)_serverSettingsControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

