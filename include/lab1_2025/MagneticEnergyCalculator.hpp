#ifndef MAGNETICENERGYCALCULATOR_HPP
#define MAGNETICENERGYCALCULATOR_HPP

class MagneticEnergyCalculator {
public:
    template <typename T>
    static T CalculateMagneticEnergy(T inductance, T current);
};

template <typename T>
T MagneticEnergyCalculator::CalculateMagneticEnergy(T inductance, T current) {
    return 0.5 * inductance * current * current;
}

#endif  // MAGNETICENERGYCALCULATOR_HPP