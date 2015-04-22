#include <iostream>
#include <assert.h>

using namespace std;

typedef long long ll;

// ��� - ���������� ����� ��������
ll GCD(ll a, ll b) {
  return (b == 0) ? a : GCD(b, a % b);
}

// ������������ �����: p/q
class Rational {
  ll p, q; // p - ���������, q - �����������
  // ���������� �����
  void normalize() {
    ll d = GCD(p, q); // ��������� ���������� ����� ��������
    p /= d; // ����� �� ���� ���������
    q /= d; // ����� �� ���� �����������
  }
 public:
  // TODO: �����������
  Rational(ll pi, ll qi) {
  };
  // TODO: ���� � ����������
  Rational(const char* message) {
  }
  // TODO: �������� ����� �� ����� (� �������)
  void show() {
  };
  // TODO: �������� ������
  // a + b
  Rational operator+(Rational& right) {
    // this - ��������� �� ������� ������
    // *this - ������� ������
  }

  // TODO: ��������� � ����� ����� �����
  Rational operator+(int right) {
  }

  // TODO: ��������� � ������ ����� �����
  friend Rational
  operator+(long left, Rational& right) {
  }

  // TODO: ���������
  Rational operator-(Rational& right);

  // ����������� �����������
  Rational(const Rational& r);

  // cout - ���� ostream
  friend ostream& operator << (ostream& os, Rational& r) {
    os << r.p << " / " << r.q << " ";
    return os;
  }

  // stream - �����
  // thread - �����/����
};

int main() {
  Rational a(4, 6), b(11, 2);
  a.show();
  b.show();

  // Rational c = b + a;

  int i = 2, j = 3;
  int tt = i + j;
  Rational c1 = i + b;

  b.show();
  c1.show();

  /* Rational x(4,6), y(1,3);
   x.add(y);
   x.show();
   Rational yy("Vvedite:");
   yy.show(); */

  return 0;

