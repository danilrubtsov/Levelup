// Решение квадратного уравнения
// -------------------------------
// Задание:
// Написать программу, которое решает квадратное уравнение.
// Пользователь вводит (с клавиатуры) три действительных коэффициента a, b, c.
// Программа выводит все решения уравнения (два, одно), "решений нет",
// если их нет или "бесконечно много решений", если подходит любое значение x (a = 0, b = 0, c = 0).
// Обработать все варианты исходных данных.
#include <iostream>
#include <math.h>
#include <cstdlib>
#define show(x) cout << #x <<" = "<<x<<endl;//макрос вывода
using namespace std;

//символ переноса строки - обратный слеш /
//выход их консоли выполнеия проги =ctrl+break
void handle_user_data(double a) {
if (! cin.good() )
{
    cout << "incorrect a = "<<a<<endl;

}
}
void solve_equation(double a, double b, double c) {
    const long double DBL_EPSILON = 1e-10;//точность сравнения с нулем
    cout << "DBL_EPSILON = "<<DBL_EPSILON<<endl;

    double D;//discriminant
    double x1,x2;
    //коэффициенты  проверяем на технический ноль
if (fabs(a)<DBL_EPSILON && fabs(b)<DBL_EPSILON && fabs(c)<DBL_EPSILON) {
        cout << "Equation is have infinite set real roots!";
        system("pause");
        return;//выход из проги
}
    D=b*b - 4*a*c;//вычисляем дискриминант

if (D<0) {//случай мнимых корней, проверяем на абсолютный ноль
        cout << "Equation is not have real ROOTS!"<<endl;
        cout << "D = "<<D<<endl;
        system("pause");
        return;
}
if (fabs(D)<DBL_EPSILON  ) {//случай когда Д равен нулю,проверяем на "свой" ноль (технический ноль)
        //может быть вариант когда D попадет между "технический ноль" и абсолютным нулем - но "эти случаи редки" (С)
    x1 = - b/(2*a);
    //x2=x1;
        cout << "Equation is  have two equal real roots!"<<endl;
        cout << "D = "<<D<<endl;
        cout << "x1 = "<<x1<<endl;
        cout << "x2 = "<<x1<<endl;
        system("pause");
        return;
}
if (fabs(a)<DBL_EPSILON) {//случай когда один действительный корень и а=0
        x1 = - c/b;
        cout << "Equation is have one real root!"<<endl;
        cout << "D = "<<D<<endl;
        cout << "x1 = "<<x1<<endl;
        system("pause");
        return;
}
//случай 2х действительных корней
    x1 = ( - b+sqrt(D) )/(2*a);
    x2 = ( - b-sqrt(D) )/(2*a);
    //x2=x1;
        cout << "Equation is  have two different real roots!"<<endl;
        cout << "x1 = "<<x1<<endl;
        cout << "x2 = "<<x2<<endl;
        system("pause");

}
//<--
int main() {

while (1) {
// Коэффициенты квадратного уравнения
double a, b, c;
cout << "Input factors for equation: a*x^2 + b*x + c = 0"<<endl;
// a*x^2 + b*x + c = 0
cout << "a = ";
cin >> a;
if (! cin.good() )//вызов функции обработки данных введенных пользователем
    break;
cout << "b = ";
cin >> b;
cout << "c = ";
cin >> c;
cout << endl;
show(a);//вывод макросом
show(b);//вывод макросом
show(c);//вывод макросом
// Вызов функции решения квадратного уравнения
solve_equation(a, b, c);
}
return 0;
}
