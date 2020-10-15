// 10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int n;
    cout << "Введите число: ";
    cin >> n;
    for (int i = 1; i <= 25; i++)
    {
        cout << i << " х " << n << " = " << i * n << endl;
    }
    return 0;
    
}
