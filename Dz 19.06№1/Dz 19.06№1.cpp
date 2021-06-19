#include <iostream>
#include <string>
#include <type_traits>
#include <typeinfo>

using namespace std;

void a1() // Если пользователь введет отрицательное значение, то программа выдаст ошибку
{
    setlocale(LC_ALL, "rus");
    double a; string a1;
    cout << "Введите число:  ";
    
    cin >> a;

    try 
    {
       
        if (a < 0.0)
            throw "Вы ввели отрицательное число!!!\n"; 
        cout << "Квадрат " << a << " равен " << sqrt(a) << '\n';
    }
    catch (const char* exception) 
    {
        cerr << "Ошибка: " << exception << '\n';
    }
}

void a2()// Входит или не входит, вот в чем вопрос.
{
    int  a,b,d, c =0;
    cout << "Введите начало диапозона:  ";  cin >> a;
    cout << "Введите конец диапозона: ";  cin >> b;
    cout << "Введите число для поиска: "; cin >> d;
    for (int i = a; i < b + 1; i++)
    {
        if (i == d) c = 1;
    }
    try
    {
        cout << "Входит ли число "<<d<<" в диапозон чисел?\nОтвет: ";
        if (c == 1)
            throw d;
        cout << " число " << d << " не входит в диапозон чисел\n";
       
    }
    catch (int d) 
    {
        cerr << " число "<< d << " входит в диапозон чисел\n";
    }
}

void main()
{
    setlocale(LC_ALL, "rus");
    int f;
    do {
        cout << "1 - 2 >>> "; cin >> f;
        switch (f)
        {
        case 1:
            a1();
            break;
        case 2:
            a2();
            break;
        }
    } while (f != 0);
}