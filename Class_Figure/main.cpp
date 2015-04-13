#include <iostream>
using namespace std;

struct Shape { // struct -> public:
  virtual void show() = 0; // ����������� �����
};

struct Square : public Shape {
  double side;
  Square(double s) : side(s) { }
  void show() {
    // TODO: �����������
  }
};

struct Rectangle : public Shape {
  double height, width;
  Rectangle(double h, double w) :
    height(h), width(w) { }
  void show() {
    // TODO: �����������
  }
};

int main()
{
    Shape* s[] = {
    new Square(10),
    new Rectangle(2, 3),
    new Square(15),
  };
/*
  for(int i = 0; i < 3; ++i)
    s[i]->show();
*/
  return 0;
}
