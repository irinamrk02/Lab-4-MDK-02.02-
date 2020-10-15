// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double a, b;
    cout << "Ax = B\n";
    cout << "Введите числа a и b: ";
    cin >> a >> b;
    if (a == 0)
    {
        cout << "На ноль делить нельзя!" << endl;
    }
    double x = b / a;
    cout << "x = ";
    cout << x << endl;
    return 0;
}
