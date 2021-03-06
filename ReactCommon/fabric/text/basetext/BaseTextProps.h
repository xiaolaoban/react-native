/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <fabric/attributedstring/TextAttributes.h>
#include <fabric/core/Props.h>
#include <fabric/graphics/Color.h>
#include <fabric/graphics/Geometry.h>

namespace facebook {
namespace react {

/*
 * `Props`-like class which is used as a base class for all Props classes
 * that can have text attributes (such as Text and Paragraph).
 */
class BaseTextProps {
public:

  /*
   * Same semantic as `Props::apply(...)`.
   */
  void apply(const RawProps &rawProps);

#pragma mark - Getters

  /*
   * Returns all props values as `TextAttributes` object.
   */
  TextAttributes getTextAttributes() const;

#pragma mark - DebugStringConvertible (partially)

  SharedDebugStringConvertibleList getDebugProps() const;

private:

  TextAttributes textAttributes_;
};

} // namespace react
} // namespace facebook

