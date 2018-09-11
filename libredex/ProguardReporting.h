/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include "DexClass.h"
#include "DexUtil.h"
#include "ProguardMap.h"
#include <iostream>

namespace redex {

std::string dexdump_name_to_dot_name(const std::string& dexdump_name);

template <class Container>
void print_methods(std::ostream& output,
                          const ProguardMap& pg_map,
                          const std::string& class_name,
                          const Container& methods);

void print_method(std::ostream& output,
                  const ProguardMap& pg_map,
                  const std::string& class_name,
                  const DexMethod* methods);

template <class Container>
void print_fields(std::ostream& output,
                         const ProguardMap& pg_map,
                         const std::string& class_name,
                         const Container& fields);

void print_field(std::ostream& output,
                 const ProguardMap& pg_map,
                 const std::string& class_name,
                 const DexField* field);

void print_class(std::ostream& output,
                 const ProguardMap& pg_map,
                 const DexClass* cls);

void print_classes(std::ostream& output,
                   const ProguardMap& pg_map,
                   const Scope& classes);
}
