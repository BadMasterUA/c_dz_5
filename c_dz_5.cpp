#include<iostream>

using namespace std;

//задание №1 прототип функции Perimetr
/*Функция для вычисление периметра прямоугольника
на вход пренимает два параметра: первый length (длина)
второй widthy (ширина) и возвращает значение периметра.*/ 
unsigned short int Perimeter( unsigned short int x, unsigned short int y);

int main()
{
    unsigned short int lengthRect, widthyRect;

    //ввод данных
    cout << "Enter length: ";
    cin >> lengthRect;

    cout << "Enter widthy: ";
    cin >> widthyRect;

    cout << endl;

    cout << "Perimeter of a rectangle is: " << Perimeter(lengthRect, widthyRect);
}

//задание №2 определение функции Perimetr
unsigned short int Perimeter( unsigned short int length, unsigned short int widthy)
{
    unsigned short int PerimeterRec; //локальная переменная для хранения значения периметра

    PerimeterRec = (length + widthy) * 2;

    return PerimeterRec;
}