#include <math.h>

#include <cstdint>
#include <iostream>

#include "common/InputHandler.hpp"
#include "common/XMath.hpp"

const double X = 1.4;

int main() {
    try {
        auto p = InputHandler::GetPositiveNumber<double>("Введите число: ");

        double b = NaturalPow(X, 4) + log10(NaturalPow(p, 3));
        double a = log(abs(X));
        double y = NaturalPow(sin(a * X), 3) + sqrt(b) * cos(NaturalPow(X, 2));

        std::cout << "y: " << y << "\n";
        std::cout << "a: " << a << "\n";
        std::cout << "b: " << b << "\n";
    } catch (const std::exception &e) {
        std::cerr << "Непредвиденная ошибка: " << e.what() << "\n";
        return 1;
    }

    return 0;
}