#include "common/XMath.hpp"

constexpr double NaturalPow(double x, uint8_t pow) {
    for (uint8_t i = 1; i < pow; ++i) {
        x *= x;
    }

    return x;
}