// (c) Copyright 2019 Xilinx Inc. All Rights Reserved.
#pragma once

#include <memory>

namespace mlir {
class Pass;
} // namespace mlir

namespace xilinx {
namespace aten {

std::unique_ptr<mlir::Pass> createATenLayerNamePass();
void registerATenLayerNamePass();

} // namespace aten
} // namespace xilinx
