#include <math.h>

#include <iostream>

struct Point {
    double X, Y;
};

bool isInRectangle(Point p) {
    return abs(p.X) <= 2 && p.Y >= 0 && p.Y <= 2;
}

bool isInTriangle(Point p) {
    return p.Y < p.X + 2 && p.Y < -p.X + 2;
}

void realMain() {
    double x, y;
    std::cout << "Введите координаты точки: ";
    std::cin >> x >> y;

    if (isInRectangle({x, y}) && !isInTriangle({x, y})) {
        std::cout << "Точка в фигуре\n";
    } else {
        std::cout << "Точка вне фигуры\n";
    }

    if (x > 0 && y > 0) {
        std::cout << "Точка в 1 четверти\n";
    } else if (x < 0 && y > 0) {
        std::cout << "Точка во 2 четверти\n";
    } else if (x < 0 && y < 0) {
        std::cout << "Точка в 3 четверти\n";
    } else if (x > 0 && y < 0) {
        std::cout << "Точка в 4 четверти\n";
    } else if (x == 0 && y > 0) {
        std::cout << "Точка на оси Oy+\n";
    } else if (x == 0 && y < 0) {
        std::cout << "Точка на оси Oy-\n";
    } else if (x > 0 && y == 0) {
        std::cout << "Точка на оси OX+\n";
    } else if (x < 0 && y == 0) {
        std::cout << "Точка на оси OX-\n";
    } else {
        std::cout << "Точка в начале координат\n";
    }
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