#include <iostream>

int main()
{
	setlocale(0, "");

	/*2�.�������� ���������, ������� ��������� �� ������������ ���������� ����� �
	����������, ������ �� ����� � �������������� �������.
    y <= -x & y >= x ^ 2 - 2
    y <= x & y >= x ^ 2 - 2*/
    float x, y, x1, y1;

    std::cout << "������� �������� x: ";
    std::cin >> x;
    std::cout << "������� �������� y: ";
    std::cin >> y;

    if (y <= -x & y >= x ^ 2 - 2 || y <= x & y >= x ^ 2 - 2) {
        std::cout << "����� ������ � �������������� �������.";
    }
    else {
        std::cout << "����� �� ������ � �������������� �������.";
    }

    /*3�.�������� ���������, ������� ��������� �� ������������ ���������� ����� �
    ����������, ������ �� ����� � �������������� �������.
    x ^ 2 + y ^ 2 = 1
    x * x + y * y >= 0.3 */

    std::cout << "\n������� �������� x: ";
    std::cin >> x1;
    std::cout << "������� �������� y: ";
    std::cin >> y1;
    
    if (y1 >= 0)
    {
        if (x1 <= 0)
        {
            if (sqrt(x1 * x1 + y1 * y1) < 1) {
                std::cout << "����� ������ � �������������� �������.";
            }
            else {
                std::cout << "����� �� ������ � �������������� �������.";
            }
        }
        else
        {
            if (sqrt(x1 * x1 + y1 * y1) < 1 && sqrt(x1 * x1 + y1 * y1) > 0.3) {
                std::cout << "����� ������ � �������������� �������.";
            }
            else {
                std::cout << "����� �� ������ � �������������� �������.";
            }
        }
    }
    else {
        std::cout << "����� �� ������ � �������������� �������.";
    }

}