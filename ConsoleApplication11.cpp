// ConsoleApplication8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void input(int* a, int* b, int* c)
{
	cout << "Найдем максимальное значение из трех чисел " << endl;

	cout << "Введите первое число" << endl;
	cin >> *a;

	cout << "Введите второе число" << endl;
	cin >> *b;

	cout << "Введите третье число" << endl;
	cin >> *c;
}

int solution(int a, int b, int c, int max)
{

	if ((a >= b) && (a >= c))
	{
		max = a;
	}

	if ((b >= a) && (b >= c))
	{
		max = b;
	}

	if ((c >= b) && (c >= a))
	{
		max = c;
	}

	return max;
}

void output(int max)
{
	cout << "Наибольшее число = " << max << endl;
	getchar();
	getchar();
}

int main()
{
	setlocale(LC_ALL, "rus");
	int a = 0, b = 0, c = 0, max = 0;
	input(&a, &b, &c);
	max = solution(a, b, c, max);
	output(max);

	return 0;
}