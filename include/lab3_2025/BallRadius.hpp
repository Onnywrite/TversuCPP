#ifndef BALLRADIUS_HPP
#define BALLRADIUS_HPP

#include <math.h>

// Calculates radius of a ball by its volume.
inline constexpr double BallRadius(double volume) {
    // V = 4/3 * R^3 =>
    // R = cbrt(3/4 * V)
    return cbrt(0.75 * volume);
}

#endif  // BALLRADIUS_HPP