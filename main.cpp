#include <iostream>
#include <cmath>

using namespace std;

// Метод для треугольника
double calculateCircumscribedRadiusTriangle(double a) {
    return (a * sqrt(3)) / 3;
}

// Метод для пятиугольника
double calculateCircumscribedRadiusPentagon(double a) {
    return a * sqrt((1.0 / 2) + (sqrt(5) / 10));
}

// Метод для восьмиугольника
double calculateCircumscribedRadiusOctagon(double a) {
    return a * sqrt(1 + (sqrt(2) / 2));
}

// Метод для десятиугольника
double calculateCircumscribedRadiusDecagon(double a) {
    return (a / 2) * (1 + sqrt(5));
}

// Метод для произвольных сторон
double calculateCircumscribedRadiusPolygon(double a, int n) {
    return a / (2 * sin(M_PI / n));
}

int main() {

    setlocale(LC_ALL,"rus");

    int n = 0;  // Количество сторон
    double a = 16.74;  // Заданная длина стороны
    double R3 = calculateCircumscribedRadiusTriangle(a);
    double R5 = calculateCircumscribedRadiusPentagon(a);
    double R8 = calculateCircumscribedRadiusOctagon(a);
    double R10 = calculateCircumscribedRadiusDecagon(a);

    std::cout << "Радиус описанной окружности для треугольника: " << R3 << std::endl;
    std::cout << "Радиус описанной окружности для пятиугольника: " << R5 << std::endl;
    std::cout << "Радиус описанной окружности для восьмиугольника: " << R8 << std::endl;
    std::cout << "Радиус описанной окружности для десятиугольника: " << R10 << std::endl;

    std::cout << "Введите количество сторон многоугольника: ";
    std::cin >> n;

    double Rn = calculateCircumscribedRadiusPolygon(a, n);

    std::cout << "Радиус описанной окружности для многоугольника с " << n << " сторонами: " << Rn << std::endl;

    return 0;

}
