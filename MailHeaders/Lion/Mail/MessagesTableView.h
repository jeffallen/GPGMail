/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSTableView.h"

@class NSTableRowView, PaddingView;

@interface MessagesTableView : NSTableView
{
    PaddingView *_paddingView;
    NSTableRowView *_rowToPin;
    double _pinnedMessageVisiblePosition;
    double _verticalScrollDuringUpdate;
    long long _rowIndexToSelectAfterUpdate;
    long long _messageIndexToPin;
    long long _updateCount;
    BOOL _preventPinning;
    BOOL _userIsChangingSelection;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_commonInit;
- (void)_setMessageIndexToPin:(long long)arg1;
- (void)_scrollToPinnedMessage;
- (BOOL)_isRowViewVisible:(id)arg1;
- (void)_pinVisibleMessage;
- (void)setRowToPin:(id)arg1;
- (void)noteHeightOfRowsWithIndexesChanged:(id)arg1;
- (void)insertRowsAtIndexes:(id)arg1 withAnimation:(unsigned long long)arg2;
- (void)removeRowsAtIndexes:(id)arg1 withAnimation:(unsigned long long)arg2;
- (void)beginUpdates;
- (void)endUpdates;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2 isUserAction:(BOOL)arg3;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
@property(nonatomic) BOOL userIsChangingSelection; // @synthesize userIsChangingSelection=_userIsChangingSelection;
@property PaddingView *paddingView; // @synthesize paddingView=_paddingView;

@end

