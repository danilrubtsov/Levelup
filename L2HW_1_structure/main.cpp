// �������� ������� - ��������� ������
#include <iostream>
#include <math.h>
using namespace std;
struct Point {double x;double y;};
double sqr(double x) {return x * x;}//������� ���������� ������� �����

double dist(Point a, Point b) {//������� ���������� ���������� ����� ������� � � b
return
sqrt( sqr(a.x - b.x) +
      sqr(a.y - b.y)  );
}
typedef Point Vector;//������ ������-��� ��� Point


// ������� �����
Point sum(Vector A, Vector B) {

Point R;
R.x = A.x + B.x;
R.y = A.y + B.y;
return R;
}
// ������� ��������
Point sub(Vector A, Vector B) {

Point R;
R.x = A.x - B.x;
R.y = A.y - B.y;
return R;
}
// ��������� ������������ ��������
double dotProduct(Vector A, Vector B) {
double dist;
//dist= dist(A, B);//���������� ���������� ����� ����

return A.x * B.x + A.y * B.y;
}

int main()
{
Point a = {1.2, 1.3},
      b = {10.2, 3.3};
cout <<"dist= "<< dist(a, b) << endl;
Point a_plus_b;
Point a_minus_b;
double scalar_mult;//��������� ������������

a_plus_b=sum(a, b);//"�������� �������"
cout <<"sum.x= "<<a_plus_b.x<<endl;
cout <<"sum.y= "<<a_plus_b.y<<endl;

a_minus_b=sub(a, b);//"�������� �������"
cout <<"sub.x= "<<a_minus_b.x<<endl;
cout <<"sub.y= "<<a_minus_b.y<<endl;

//scalar_mult= dotProduct(a,b);//��������� ������������
return 0;
}
