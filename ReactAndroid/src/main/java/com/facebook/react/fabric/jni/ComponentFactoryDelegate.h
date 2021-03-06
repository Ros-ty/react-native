/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <fbjni/fbjni.h>
#include <jsi/jsi.h>
#include <react/componentregistry/ComponentDescriptorRegistry.h>
#include <react/scheduler/Scheduler.h>
#include <react/utils/ContextContainer.h>
#include <mutex>
#include <unordered_set>

using namespace facebook::jsi;

namespace facebook {
namespace react {

class Instance;

class ComponentFactoryDelegate
    : public jni::HybridClass<ComponentFactoryDelegate> {
 public:
  constexpr static const char *const kJavaDescriptor =
      "Lcom/facebook/react/fabric/ComponentFactoryDelegate;";

  static void registerNatives();

  ComponentRegistryFactory buildRegistryFunction;

 private:
  static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jclass>);
};

} // namespace react
} // namespace facebook
