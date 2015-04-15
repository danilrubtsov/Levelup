
// ������������� �����
// -------------------
// ����: ����� ���������
// �� ����� ���������, �����������
// �����: ������� ����� ���������,
//  + ��������� ����� �������
#include <iostream>
#include <cassert>
#include <climits>
#include <cstring>

using namespace std;

const double EPS = 1e-10;

// ��������� ��� - ���������� �������
class FoodItem {
 public:
  char* name = "";
  char* measureUnit = "";
  double amount;
};

// ������ ���������
class FoodList {
  struct Element {
    FoodItem item;
    Element* next = NULL;
  };
  // �������� ������� ������
  Element* root = NULL;
 public:
  // ������ ����?
  bool isEmpty() {
    return root == NULL;
  }
  // ��������� ������� � ������ ������
  void add(FoodItem item) {
    Element* e = new Element;
    e->item = item;
    // ��������� ������� � ������
    // ��� � ����
    e->next = root;//root = NULL - ������� �����
    root = e;
  }
  void add(char* name, double amount,
           char* measureUnit) {
    FoodItem item;
    item.name = name;
    item.amount = amount;
    item.measureUnit = measureUnit;

    add(item);
  }

  // ���������� ������� ����������
  double getAmount(char* name) {
    Element* cur = root;

    while(cur != NULL) {
      if(!strcmp(cur->item.name, name)) {
        // ����� ������ ���������
        return cur->item.amount;
      }

      cur = cur->next;
    }

    // ���� �� ����� ������ ��������?
    return 0;
  }

  int calc(FoodList& food) {
    // ������� �� ���� ���������
    int minComp = INT_MAX;

    Element* cur = food.root;

    while(cur != NULL) {
      // ������� � ��� ������� �������� ����?
      double weHave = getAmount(cur->item.name);

      if(weHave > EPS) {
        // ������� �� ����� �����������
        // �������� ������ ���� ���������
        int c = weHave / cur->item.amount;
        cout << weHave << " / " << cur->item.amount
             << " -> " << c << endl;

        if(c < minComp)
          minComp = c;
      }

      cur = cur->next;
    }

    return minComp;
  }
};

int main() {
    cout <<"EPS= "<<EPS<<endl;
  // ������ ������ ���������
  FoodList foodList;//�������� ��������� ������ FoodList
  assert(foodList.isEmpty());

  FoodItem milk;//�������� ��������� ������ FoodItem
  milk.name = "������";
  milk.amount = 1;
  milk.measureUnit = "�";

  foodList.add(milk);
  assert(!foodList.isEmpty());

  FoodItem m2;
  m2.name = "���� ���������";
  m2.amount = 400;
  m2.measureUnit = "�.";// ������� ���������
  foodList.add(m2);

  FoodItem s;
  s.name = "�����";
  s.amount = 3;
  s.measureUnit = "�������� �����";
  foodList.add(s);

  // ����� ������ - ������, ��� ����� ���
  // ������������� ������
  FoodList pancake;
  pancake.add("������", 0.1, "�");
  pancake.add("���� ���������", 100, "�.");

  cout << foodList.calc(pancake) << endl;

  return 0;
}
