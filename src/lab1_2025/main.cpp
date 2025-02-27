#include <iostream>

#include "common/InputHandler.hpp"
#include "lab1_2025/MagneticEnergyCalculator.hpp"

int main() {
    try {
        auto inductance = InputHandler::GetNumber<double>("Введите индуктивность L (Гн): ");
        auto current = InputHandler::GetNumber<double>("Введите силу тока I (А): ");

        auto magneticEnergy =
            MagneticEnergyCalculator::CalculateMagneticEnergy(inductance, current);
        std::cout << "Магнитная энергия W = " << magneticEnergy << " Дж\n";
    } catch (const std::exception &e) {
        std::cerr << "Непредвиденная ошибка: " << e.what() << "\n";
        return 1;
    }

    return 0;
}