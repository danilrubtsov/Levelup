// ������� ����������� ���������
// -------------------------------
// �������:
// �������� ���������, ������� ������ ���������� ���������.
// ������������ ������ (� ����������) ��� �������������� ������������ a, b, c.
// ��������� ������� ��� ������� ��������� (���, ����), "������� ���",
// ���� �� ��� ��� "���������� ����� �������", ���� �������� ����� �������� x (a = 0, b = 0, c = 0).
// ���������� ��� �������� �������� ������.
#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
//������ �������� ������

void handle_user_data(double a) {
if (! cin.good() )
{
    cout << "incorrect a = "<<a<<endl;
//    break;
}
}
void solve_equation(double a, double b, double c) {
    const long double DBL_EPSILON = 0.0000000001;
    const long double Zero =0;
    double D;//discriminant
    double x1,x2;
if (a<DBL_EPSILON && b<DBL_EPSILON && c<DBL_EPSILON) {
        cout << "Equation is have infinite set real roots!";
        system("pause");
}
    D=b*b - 4*a*c;//��������� ������������

if (D<DBL_EPSILON) {
        cout << "Equation is not have real ROOTS!"<<endl;
        cout << "D = "<<D<<endl;
        system("pause");
}
if (fabs(D)<DBL_EPSILON && (fabs(D) !=0) ) {
    x1 = - b/(2*a);
    //x2=x1;
        cout << "Equation is  have two equal real roots!"<<endl;
        cout << "x1 = "<<x1<<endl;
        cout << "x2 = "<<x1<<endl;
        system("pause");
}
if (fabs(D)>DBL_EPSILON) {
    x1 = ( - b+sqrt(D) )/(2*a);
    x2 = ( - b-sqrt(D) )/(2*a);
    //x2=x1;
        cout << "Equation is  have two different real roots!"<<endl;
        cout << "x1 = "<<x1<<endl;
        cout << "x2 = "<<x2<<endl;
        system("pause");
}
}
//<--
int main() {
//-->
// ������������ ����������� ���������
double a, b, c;
cout << "Input factors for equation: a*x^2 + b*x + c = 0"<<endl;
// a*x^2 + b*x + c = 0
cout << "a = ";
cin >> a;
handle_user_data(a);//����� ������� ��������� ������ ��������� �������������
cout << "b = ";
cin >> b;
cout << "c = ";
cin >> c;
cout << endl;
// ����� ������� ������� ����������� ���������
solve_equation(a, b, c);
//<--
return 0;
}
