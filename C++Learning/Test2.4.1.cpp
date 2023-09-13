﻿/*
* Требуется разработать программу, имитирующую стрельбу по мишени.
* Пользователь вводит данные о выстреле в виде пары чисел – координат x и y
* заранее известное количество раз.
* Повтор ввода следует организовать в цикле. После «стрельбы» пользователю
* выводится информация о сумме очков и его уровень как стрелка (например,
* снайпер, просто стрелок, новичок).
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	system("chcp 1251");

	// Сумма очков, количество выстрелов, координаты x и y
	double s = 0, n = 5, x, y;
	for (int i = 1; i <= n; i++)
	{
		// Информационная панель
		cout << "Ваш " << i << "й выстрел" << endl;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << endl;


		if (x * x + y * y <= 1)
		{
			s += 10;
		}
		else if (x * x + y * y <= 2)
		{
			s += 5;
		}
		else if (x * x + y * y <= 9)
		{
			s += 1;
		}
	}
	cout << "Ваше количество очков: " << s << endl;


	if (s >= 45)
	{
		cout << "Вы снайпер!" << endl;
	}
	else if (s >= 30)
	{
		cout << "Вы просто стрелок" << endl;
	}
	else
	{
		cout << "Вы новичок" << endl;
	}
	
}
