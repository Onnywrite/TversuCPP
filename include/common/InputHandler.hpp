#ifndef INPUTHANDLER_HPP
#define INPUTHANDLER_HPP

#include <iostream>
#include <limits>
#include <string>

class InputHandler {
public:
    template <typename T>
    static T GetPositiveNumber(const std::string &prompt);
    template <typename T>
    static T GetNumber(const std::string &prompt);
};

template <typename T>
T InputHandler::GetPositiveNumber(const std::string &prompt) {
    T value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Ошибка: введите числовое значение\n";
        } else if (value < 0) {
            std::cerr << "Ошибка: введите неотрицательное число\n";
        } else {
            break;
        }
    }
    return value;
}

template <typename T>
T InputHandler::GetNumber(const std::string &prompt) {
    T value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Ошибка: введите числовое значение\n";
        } else {
            break;
        }
    }
    return value;
}

#endif  // INPUTHANDLER_HPP