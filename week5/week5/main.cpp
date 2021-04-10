#include <iostream>
#include <fstream>

int main() 
{
	setlocale(0, "");

    float x1, y1, x2, y2;

    /*1d.Дана функция y = f(x).Найти значение функции по x :
    y = 3x - 7, если x > 1
    y = 3, если x = 1
    y = 3 * | x + 2 | -7, если x < 1*/
    std::cout << "Введите значение x: ";
    std::cin >> x1;
    if (x1 > 1)
        y1 = 3 * x1 - 7;
    if (x1 == 1)
        y1 = 3;
    if (x1 < 1)
        y1 = 3 * abs(x + 2) - 7;
    std::cout << "y= " << y1;

    /*1g.Дана функция y = f(x).Найти значение функции по x :
    y = (2 + x)2 + 7, если x > -8
    y = 5, если x = -8
    y = | 2 * x - 1 | -1, если x < -8*/
    std::cout << "\nВведите значение x: ";
    std::cin >> x2;
    if (x2> -8)
        y2 = (2 + x2) * 2 + 7;
    if (x2 == -8)
        y2 = 5;
    if (x2 < -8)
        y2 = abs(2 * x2 - 1) - 1;
    std::cout << "y= " << y2;

}