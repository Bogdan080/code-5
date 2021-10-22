#include <iostream>
#include "math.h"
#include <cmath>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double f, a, b, c, x;
	cout << "Задайте a: ";
	cin >> a;
	cout << "Задайте b: ";
	cin >> b;
	cout << "Задайте c: ";
	cin >> c;
	cout << "Задайте x: ";
	cin >> x;
	if ((x + b < 10) && (b != 0)) // враховуемо ОДЗ
	{
		if (c == 0)
		{
			cout << "Неможливо ділити на 0 !";
		}
		else {
			f = pow(a, 3) * pow(x, 2) - b / c;
			printf("Вхідні дані: a = %lf, b = %lf, c = %lf, x = %lf\nРезультат обчислень: f = %lf", a, b, c, x, f);
		}
	}
	else if ((x + b > 10) && (b == 0))
	{
		if (x - c == 0)
		{
			cout << "Неможливо ділити на 0!";
		}
		else {
			f = a + (b - a) / (x - c);
			printf("Вхідні дані: a = %lf, b = %lf, c = %lf, x = %lf\nРезультат обчислень: f = %lf", a, b, c, x, f);
		}
	}
	else
	{
		if (pow(c, 3) == 0)
		{
			cout << "Неможливо ділити на 0!";
		}
		else {
			f = x / pow(c, 3);
			printf("Вхідні дані: a = %lf, b = %lf, c = %lf, x = %lf\nРезультат обчислень: f = %lf", a, b, c, x, f);
		}
	}
}
