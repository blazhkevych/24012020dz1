/*
Задачи по теме «Оператор выбора»
1. Написать программу, которая по номеру дня недели(целому числу от 1 до 7) выдает в качестве результата количество уроков в вашем классе в этот день.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int a;
	cout << "Введите день недели: ";
	cin >> a;
	switch (a) {
	case 1:cout << "Понедельник - 7 уроков"; break;
	case 2:cout << "Вторник - 6 уроков"; break;
	case 3:cout << "Среда - 5 уроков"; break;
	case 4:cout << "Четвер - 4 уроков"; break;
	case 5:cout << "Пятница - 3 уроков"; break;
	case 6:cout << "Суббота - 2 уроков"; break;
	case 7:cout << "Воскресенье - 1 уроков"; break;
	default: cout << "Ошибка";
	}
}
