﻿// ConsoleApplication10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введіть оцінку: ";
	cin >> x;
	switch (x)
	{
	case 1: cout << "Початковий рівень"; break;
	case 2: cout << "Початковий рівень"; break;
	case 3: cout << "Початковий рівень"; break;
	case 4: cout << "Середній рівень"; break;
	case 5: cout << "Середній рівень"; break;
	case 6: cout << "Середній рівень"; break;
	case 7: cout << "Достатній рівень"; break;
	case 8: cout << "Достатній рівень"; break;
	case 9: cout << "Достатній рівень"; break;
	case 10: cout << "Високий рівень"; break;
	case 11: cout << "Високий рівень"; break;
	case 12: cout << "Високий рівень"; break;
	default: cout << "Не існує"; break;
	}
	system("pause");
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
