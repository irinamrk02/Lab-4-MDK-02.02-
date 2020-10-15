// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "iostream"
#include "cmath"
using namespace std;

int main()
{
	setlocale(0, "");
	double x, e, p, s;
	cout << "Введите х и e: ";
	cin >> x >> e;
	s = p = x;
	for (int n = 1; abs(p) > e; n++) s += p = -p * x * x / (2 * n) / (2 * n + 1);
	cout << "sin(" << x << ")=" << s;
	cin.get();
}
