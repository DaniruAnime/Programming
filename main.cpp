#include <iostream>
#include <cmath>

double calculateCircumscribedRadiusTriangle(double a) {

    return (a * sqrt(3)) / 3;

}

int main() {

    double a = 16.74;  // Заданная длина стороны
    double R3 = calculateCircumscribedRadiusTriangle(a);

    std::cout << "Радиус описанной окружности для треугольника: " << R3 << std::endl;

    return 0;

}
