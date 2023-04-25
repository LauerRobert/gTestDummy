#pragma once
#include <cstdint>

/// \brief This is a saturation function that maps all negative inputs to -1, zero to zero and all positive inputs to 1.
///
/// \param [in] input The input value to be mapped.
/// \note allowed value range [-2147483648, 2147483647]
/// \return The mapped value
/// \note possible values [-1, 0, 1]
std::int32_t myFunction(const std::int32_t input);