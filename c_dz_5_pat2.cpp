#include<iostream>

using namespace std;

//Задание №5
/*Функция принимает два числа иделит первое на второе и возврощает
результат деления*/
short int del( unsigned short int, unsigned short int);

int main()
{
    //Задание №6
    short int c;
    unsigned short int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    c = del(a,b);

    if (c == -1)
    {
        cout << "You can't divide by zero!";
    }
    else
    {
        cout << "c = " << c;
    }

    return 0;
}

//описание функции
short int del(unsigned short int a, unsigned short int b)
{
    if(b == 0)
    {
        return -1;
    }

    return a / b;
}