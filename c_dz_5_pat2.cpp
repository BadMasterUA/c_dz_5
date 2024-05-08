#include<iostream>

using namespace std;

//Задание №5
/*Функция принимает два числа иделит первое на второе и возврощает
результат деления*/
unsigned short int del( unsigned short int, unsigned short int);

int main()
{
    //Задание №6
    unsigned short int a, b, c;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    c = del(a,b);

    if (c > -1)
    {
        cout << "c = " << c;
    }
    else
    {
        cout << "b is equal to 0 or less than 0, but you cannot divide by 0!";
    }

    return 0;
}

//описание функции
unsigned short int del(unsigned short int a, unsigned short int b)
{
    if(b > 0)
    {
        return a / b;
    }
    else
    {
        return -1;
    }
}