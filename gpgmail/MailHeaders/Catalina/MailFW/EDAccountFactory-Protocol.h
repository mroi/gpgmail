//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ACAccount, NSString;
@protocol EDAccount;

@protocol EDAccountFactory
- (id /*<EDAccount>*/)accountWithSystemAccount:(ACAccount *)arg1;
- (id /*<EDAccount>*/)accountWithIdentifier:(NSString *)arg1;
@end

