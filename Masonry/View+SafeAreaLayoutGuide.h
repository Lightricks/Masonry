// Copyright (c) 2017 Lightricks. All rights reserved.
// Created by Neria Saada.

#import "MASUtilities.h"

@class MASViewAttribute;

/// Category which wraps Masonry's safe area methods. The category's methods return Masonary's safe
/// area \c MASViewAttribute if available, otherwise they return a \c MASViewAttribute of the
/// receiver with the corresponding \c NSLayoutAttribute.
@interface MAS_VIEW (SafeAreaLayoutGuide)

/// Returns the \c mas_safeAreaLayoutGuide of the view if exists and \c MASViewAttribute of the
/// receiver with \c NSLayoutAttributeNotAnAttribute otherwise.
@property (readonly, nonatomic) MASViewAttribute *mas_safeAreaLayoutGuideIfAvailable;

/// Returns the \c mas_safeAreaLayoutGuideLeft of the view if exists and \c MASViewAttribute of the
/// receiver with \c NSLayoutAttributeLeft otherwise.
@property (readonly, nonatomic) MASViewAttribute *mas_safeAreaLayoutGuideLeftIfAvailable;

/// Returns the \c mas_safeAreaLayoutGuideRight of the view if exists and \c MASViewAttribute of the
/// receiver with \c NSLayoutAttributeRight otherwise.
@property (readonly, nonatomic) MASViewAttribute *mas_safeAreaLayoutGuideRightIfAvailable;

/// Returns the \c mas_safeAreaLayoutGuideTop of the view if exists and \c MASViewAttribute of the
/// receiver with \c NSLayoutAttributeTop otherwise.
@property (readonly, nonatomic) MASViewAttribute *mas_safeAreaLayoutGuideTopIfAvailable;

/// Returns the \c mas_safeAreaLayoutGuideBottom of the view if exists and \c MASViewAttribute of
/// the receiver with \c NSLayoutAttributeBottom otherwise.
@property (readonly, nonatomic) MASViewAttribute *mas_safeAreaLayoutGuideBottomIfAvailable;

/// Returns the \c mas_safeAreaLayoutGuideHeight of the view if exists and \c MASViewAttribute of
/// the receiver with \c NSLayoutAttributeHeight otherwise.
@property (readonly, nonatomic) MASViewAttribute *mas_safeAreaLayoutGuideHeightIfAvailable;

/// Returns the \c mas_safeAreaLayoutGuideWidth of the view if exists and \c MASViewAttribute of the
/// receiver with \c NSLayoutAttributeWidth otherwise.
@property (readonly, nonatomic) MASViewAttribute *mas_safeAreaLayoutGuideWidthIfAvailable;

@end
