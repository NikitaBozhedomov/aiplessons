#include <iostream>

struct sens {
	float min, max, obserr, maxsp;
};


int main() {
	setlocale(0, "");

	/*6.������� ���������� � �������� : �������� ���������� ��������(min, max),
	�����������, ������������ ��������.������� ������ � ����� ������ �������.*/
	sens a, b, c;

	std::cout << "������ �\n������� �������� �� �� - "; 
	std::cin >> a.min >> a.max;
	std::cout << "������� ����������� - "; 
	std::cin >> a.obserr;
	std::cout << "������� ������������ �������� - "; 
	std::cin >> a.maxsp;

	std::cout << "������ B\n������� �������� �� �� - ";
	std::cin >> b.min >> b.max;
	std::cout << "������� ����������� - ";
	std::cin >> b.obserr;
	std::cout << "������� ������������ �������� - ";
	std::cin >> b.maxsp;

	std::cout << "������ C\n������� �������� �� �� - ";
	std::cin >> c.min >> c.max;
	std::cout << "������� ����������� - ";
	std::cin >> c.obserr;
	std::cout << "������� ������������ �������� - ";
	std::cin >> c.maxsp;

	if ((a.obserr < b.obserr) && (a.obserr < c.obserr)) {
		std::cout << "������ � �������� ������������ ���������";
		std::cout << "\n����� �������� �� " << a.min << " �� " << a.max << "\n����������� ���������� " << a.obserr << "\n������������ �������� ����� " << a.maxsp;
	}
	if ((b.obserr < a.obserr) && (b.obserr < c.obserr)) {
		std::cout << "������ B �������� ������������ ���������";
		std::cout << "\n����� �������� �� " << b.min << " �� " << b.max << "\n����������� ���������� " << b.obserr << "\n������������ �������� ����� " << b.maxsp;
	}
	if ((c.obserr < a.obserr) && (c.obserr < b.obserr)) {
		std::cout << "������ C �������� ������������ ���������";
		std::cout << "\n����� �������� �� " << c.min << " �� " << c.max << "\n����������� ���������� " << c.obserr << "\n������������ �������� ����� " << c.maxsp;
	}
	
	return 0;
}