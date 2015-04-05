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
#define show(x) cout << #x <<" = "<<x<<endl;//������ ������
using namespace std;

//������ �������� ������ - �������� ���� /
//����� �� ������� ��������� ����� =ctrl+break
void handle_user_data(double a) {
if (! cin.good() )
{
    cout << "incorrect a = "<<a<<endl;

}
}
void solve_equation(double a, double b, double c) {
    const long double DBL_EPSILON = 1e-10;//�������� ��������� � �����
    cout << "DBL_EPSILON = "<<DBL_EPSILON<<endl;

    double D;//discriminant
    double x1,x2;
    //������������  ��������� �� ����������� ����
if (fabs(a)<DBL_EPSILON && fabs(b)<DBL_EPSILON && fabs(c)<DBL_EPSILON) {
        cout << "Equation is have infinite set real roots!";
        system("pause");
        return;//����� �� �����
}
    D=b*b - 4*a*c;//��������� ������������

if (D<0) {//������ ������ ������, ��������� �� ���������� ����
        cout << "Equation is not have real ROOTS!"<<endl;
        cout << "D = "<<D<<endl;
        system("pause");
        return;
}
if (fabs(D)<DBL_EPSILON  ) {//������ ����� � ����� ����,��������� �� "����" ���� (����������� ����)
        //����� ���� ������� ����� D ������� ����� "����������� ����" � ���������� ����� - �� "��� ������ �����" (�)
    x1 = - b/(2*a);
    //x2=x1;
        cout << "Equation is  have two equal real roots!"<<endl;
        cout << "D = "<<D<<endl;
        cout << "x1 = "<<x1<<endl;
        cout << "x2 = "<<x1<<endl;
        system("pause");
        return;
}
if (fabs(a)<DBL_EPSILON) {//������ ����� ���� �������������� ������ � �=0
        x1 = - c/b;
        cout << "Equation is have one real root!"<<endl;
        cout << "D = "<<D<<endl;
        cout << "x1 = "<<x1<<endl;
        system("pause");
        return;
}
//������ 2� �������������� ������
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
// ������������ ����������� ���������
double a, b, c;
cout << "Input factors for equation: a*x^2 + b*x + c = 0"<<endl;
// a*x^2 + b*x + c = 0
cout << "a = ";
cin >> a;
if (! cin.good() )//����� ������� ��������� ������ ��������� �������������
    break;
cout << "b = ";
cin >> b;
cout << "c = ";
cin >> c;
cout << endl;
show(a);//����� ��������
show(b);//����� ��������
show(c);//����� ��������
// ����� ������� ������� ����������� ���������
solve_equation(a, b, c);
}
return 0;
}
