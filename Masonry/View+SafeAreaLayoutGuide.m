// Copyright (c) 2017 Lightricks. All rights reserved.
// Created by Neria Saada.

#import "View+SafeAreaLayoutGuide.h"

#import "View+MASAdditions.h"

@implementation MAS_VIEW (SafeAreaLayoutGuide)

- (MASViewAttribute *)mas_safeAreaLayoutGuideIfAvailable {
  if (@available(iOS 11.0, *)) {
    return self.mas_safeAreaLayoutGuide;
  }
  return [[MASViewAttribute alloc] initWithView:self
                                layoutAttribute:NSLayoutAttributeNotAnAttribute];
}

- (MASViewAttribute *)mas_safeAreaLayoutGuideLeftIfAvailable {
  if (@available(iOS 11.0, *)) {
    return self.mas_safeAreaLayoutGuideLeft;
  }
  return self.mas_left;
}

- (MASViewAttribute *)mas_safeAreaLayoutGuideRightIfAvailable {
  if (@available(iOS 11.0, *)) {
    return self.mas_safeAreaLayoutGuideRight;
  }
  return self.mas_right;
}

- (MASViewAttribute *)mas_safeAreaLayoutGuideTopIfAvailable {
  if (@available(iOS 11.0, *)) {
    return self.mas_safeAreaLayoutGuideTop;
  }
  return self.mas_top;
}

- (MASViewAttribute *)mas_safeAreaLayoutGuideBottomIfAvailable {
  if (@available(iOS 11.0, *)) {
    return self.mas_safeAreaLayoutGuideBottom;
  }
  return self.mas_bottom;
}

- (MASViewAttribute *)mas_safeAreaLayoutGuideHeightIfAvailable {
  if (@available(iOS 11.0, *)) {
    return self.mas_safeAreaLayoutGuideHeight;
  }
  return self.mas_height;
}

- (MASViewAttribute *)mas_safeAreaLayoutGuideWidthIfAvailable {
  if (@available(iOS 11.0, *)) {
    return self.mas_safeAreaLayoutGuideWidth;
  }
  return self.mas_width;
}

@end
