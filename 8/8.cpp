// 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
	int a[10] = {};
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < a.length - 1; ++i)
	{
		int j = i;
		for (int k = i + 1; k < a.length; ++k)
		{
			if (a[10] > a[j])
				j = k;
		}
		std::swap(a[10], a[j]);
	}
	for (int index = 0; index < a.length; ++index)
		std::cout << a[index] << " ";
	return 0;
}
