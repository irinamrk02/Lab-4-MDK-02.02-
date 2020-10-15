// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int a;
    cout << "Введите число: ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    if (!(a % i)) cout << i << '\t';
    return 0;
}

 