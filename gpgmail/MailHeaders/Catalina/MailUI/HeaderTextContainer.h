//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSTextContainer.h>

@class NSMutableSet;

@interface HeaderTextContainer : NSTextContainer
{
    NSMutableSet *_views;
}

//- (void).cxx_destruct;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 sweepDirection:(unsigned long long)arg2 movementDirection:(unsigned long long)arg3 remainingRect:(struct CGRect *)arg4;
- (BOOL)isSimpleRectangularTextContainer;
@property(readonly, nonatomic) double lineWidth;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1;
- (void)_headerTextContainerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;

@end

