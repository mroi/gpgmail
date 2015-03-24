/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



#import "NSAnimationDelegate-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class BookmarksManager, MailboxUid, MailboxesOutlineView, NSArrayController, NSMatrix, NSString, NSTableView, NSTextField, NSTreeController, NSView, NSViewAnimation, NSWindow, RSSFeedSubscriber;

@interface RSSAddFeedController : NSObject <NSAnimationDelegate, NSOutlineViewDelegate, NSTableViewDelegate>
{
    NSWindow *_window;
    NSMatrix *_viewChoice;
    NSView *_searchSection;
    NSView *_containerView;
    NSView *_safariBookmarksView;
    NSTextField *_customURLView;
    BookmarksManager *_bookmarksManager;
    NSTableView *_feeds;
    MailboxesOutlineView *_sidebar;
    NSTreeController *_sidebarController;
    NSArrayController *_feedController;
    BOOL _isSpinning;
    BOOL _isShowingCustomField;
    BOOL _showInInbox;
    BOOL _showAlert;
    NSString *_statusMessage;
    BOOL _rememberViewChanges;
    struct CGSize _safariBookmarksSize;
    struct CGSize _customURLSize;
    NSViewAnimation *_currentAnimation;
    RSSFeedSubscriber *_subscriber;
    MailboxUid *_parentMailbox;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (void)dealloc;
- (void)_setContainerSubview:(id)arg1;
- (void)_setShowCustomFeedField:(BOOL)arg1 animate:(BOOL)arg2 forFirstTime:(BOOL)arg3;
- (float)animation:(id)arg1 valueForProgress:(float)arg2;
- (void)animationDidEnd:(id)arg1;
- (void)_orderWindowFront;
- (void)_orderWindowOutWithCode:(unsigned long long)arg1;
- (void)_sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_showAndRememberViewChanges:(BOOL)arg1 customURLString:(id)arg2;
- (void)show;
- (void)showWithParentMailbox:(id)arg1;
- (void)showWithCustomURLString:(id)arg1;
- (void)addClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)changeView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_subscribeToCustomURL;
- (void)controlTextDidChange:(id)arg1;
- (void)_setupBookmarks;
- (void)_activateBookmarks;
- (void)_deactivateBookmarks;
- (void)_updateContextFromNotification:(id)arg1;
- (void)_bookmarksDidChange:(id)arg1;
- (void)_subscribeToSafariBookmarks;
- (id)_bookmarkAtRow:(long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableViewSingleClick:(id)arg1;
- (void)tableViewDoubleClick:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
@property(retain) RSSFeedSubscriber *subscriber;
@property(retain) MailboxUid *parentMailbox; // @synthesize parentMailbox=_parentMailbox;
@property struct CGSize customURLSize; // @synthesize customURLSize=_customURLSize;
@property struct CGSize safariBookmarksSize; // @synthesize safariBookmarksSize=_safariBookmarksSize;
@property BOOL rememberViewChanges; // @synthesize rememberViewChanges=_rememberViewChanges;
@property(retain) NSViewAnimation *currentAnimation; // @synthesize currentAnimation=_currentAnimation;
@property(retain) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property BOOL showAlert; // @synthesize showAlert=_showAlert;
@property BOOL showInInbox; // @synthesize showInInbox=_showInInbox;
@property BOOL isShowingCustomField; // @synthesize isShowingCustomField=_isShowingCustomField;
@property BOOL isSpinning; // @synthesize isSpinning=_isSpinning;
@property(retain) BookmarksManager *bookmarksManager; // @synthesize bookmarksManager=_bookmarksManager;

@end
