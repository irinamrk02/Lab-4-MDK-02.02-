// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");
	float a, b, c;
	cout << "Введите a, b и с: ";
	cin >> a >> b >> c;
	float D = b * b - 4 * a * c;
	cout << "D = " << D << endl;

	if (D == 0)
	{
		double x = -b / (2 * a);
		cout << "х =  ";
		cout << x << endl;
	}
	else if (D > 0)
	{
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);

		cout << "х1 =  " << x1 << endl;
		cout << "х2 =  " << x2 << endl;
	}
	else
	{
		cout << "Нет корней" << endl;
	}

}

