#include <math.h>

#include <iostream>
#include <string>

#include "common/InputHandler.hpp"
#include "common/XMath.hpp"
#include "lab3_2025/BallRadius.hpp"

const std::string ordinalNumbers[3] = {"первого", "второго", "третьего"};

void realMain() {
    double z = 0.0;

    for (int i = 0; i < 3; ++i) {
        auto volume = InputHandler::GetPositiveNumber<double>("Введите объём " + ordinalNumbers[i] +
                                                              " шара: ");
        z += BallRadius(volume);
    }

    std::cout << "z: " << z / 3.0 << "\n";
}

int main() {
    try {
        realMain();
    } catch (const std::exception& e) {
        std::cerr << "Непредвиденная ошибка: " << e.what() << "\n";
        return 1;
    }

    return 0;
}