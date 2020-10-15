// 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int fact(int f)
{
    int k = 1;
    for (int i = 1; i <= f; i++)
    {
        k *= i;
    }
    return k;
}

int main()
{
    setlocale(0, "");
    int n;
    cout << "Введите любое число. Когда введете цифру 0, программа остановится!\n";
    cin >> n;

    while (n != 0)
    {
        int a = fact(n);
        cout << a;
        cout << "\nВведите следующее число: ";
        cin >> n;
    }
    return 0;

}

