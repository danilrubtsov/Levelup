
#include <conio.h>
#include <string>
#include <map>
#include <fstream>
#include <iostream>
using namespace std;

struct QueueElement// ������� �������
{
int data; //������
QueueElement * NextElement; //��������� �� ���� �������
};

struct Queue //��������� �������
{
int N; //������ �������
QueueElement * QueueBegin; //��������� �� ������ �������
QueueElement * QueueEnd; //��������� �� ����� �������
};
Queue* Begin;//���������� ��������� �� �������

void makeQueue() {
Begin = new Queue;
Begin->N=0;
Begin->QueueBegin=NULL;
Begin->QueueEnd=NULL;
}

void addQueueElement(int data) {
if (Begin->N==0) {
Begin->N=1;
QueueElement * first_element;
first_element->data=data;
first_element->NextElement=NULL;

Begin->QueueBegin=first_element;
Begin->QueueEnd=first_element;//
}

}
void ShowQueue(Queue* Q) {
  cout <<"total element"<<Begin->N << endl;
  // ��������� �� �������
  while(Begin->QueueBegin != NULL)
    cout << "data " << Begin-> << endl;
}
int main()
{
    makeQueue();//�������� �������
    int comanda = 6;
    int data;
	do {
		cout << "\n1 - Input data element, 2 - Print Queue, 3 - Under constraction, 0 - Exit\n";
		cin >> comanda;
		switch (comanda){
		case 1: addQueueElement(data);  break;
		case 2: ShowQueue(Begin); break;
		case 3: cout << "\n \n Under constraction..." << endl;  break;
		case 0: cout << "\n \n Exit programm..." << endl;  break;
		case 6: cout << "\n1 - Input data element, 2 - Print Queue, 3 - Under constraction, 0 - Exit\n";
		default: cout << "Wrong input! " << endl;
		}//  switch
		_getch();
		//system("cls");
	} while (comanda != 0);


  return 0;
}
