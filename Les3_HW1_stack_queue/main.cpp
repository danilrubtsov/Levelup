
#include <conio.h>
#include <string>

#include <fstream>
#include <iostream>
#include <math.h>
#include <assert.h>//���������� ��� ������ �-� assert
using namespace std;
//��� ������� - ���� ������ �������� (edit->mark) � ������
//������� ������� - ��������
//������� - �������� ����
//������ ����/�������� ������
//������ ������������
//fropen("main.txt", "w", stdout) - ��������������� ������  � ��� ����

struct QueueElement// ������� �������
{
int data; //������
QueueElement *NextElement; //��������� �� ���� �������
};

struct Queue //��������� �������
{
int N; //������ �������
QueueElement * QueueEnd; //��������� �� ����� �������
};

Queue* makeQueue() {//������� �������� ��������� ������� -���������� ��������� �� �������
Queue* Q = new Queue;
Q->N=0;//������ ������� ����� 0
return Q;
}

void addQueueElement(Queue* Q) {//������� ����������  �������� � �������
    int data;
 cout <<"input data element :";
  cin >> data;
if (Q->N==0) {//���� ��������� � ������� ��� ���
Q->N=1;
QueueElement* first_element=new QueueElement;;//������� ��������� �� ������ � �������
first_element->data=data;//����� ������
first_element->NextElement=NULL;//������� ������ (������� ��������)
Q->QueueEnd=first_element;//����� ��������� �� ������ �������
}
else //���� ������� �� ������
{
   Q->N++;//��������� �������� �������
    QueueElement* element= new QueueElement;//������� ����� �������
    element->NextElement=Q->QueueEnd;//����� ��������� �� ������
    element->data=data;//����� ������
    Q->QueueEnd=element;//����� ��������� �� ����� �����
}
}
void DeleteQueueElement(Queue* Q) {//������� �������� ������

if (Q->N==0) {//���� ��������� � ������� ��� ���
cout <<"queue is empty!"<<endl;
             }
else //���� ������� �� ������
{
Q->N=Q->N-1;//������ ��������� ������� ���������
}
}

void ShowQueue(Queue* Q) {
    if (Q->N!=0){
    int k=Q->N;

    QueueElement* temp= Q->QueueEnd;//������� ��������� ��������� �� ����� �������
  cout <<"Total elements= "<< (Q->N) << endl;
  // ��������� �� �������
  assert(temp!=0);
  //assert(temp->NextElement!=0);
  assert(k!=0);
for(k; k>=1 ;k--)
{
 cout <<"Element number "<<k<<" data= " << temp->data << endl;
 temp= temp->NextElement;//���� � ������ �������

}

    }
    else
    cout <<"Queue is empty! " << endl;
}
int main()
{
    Queue* Begin;//���������� ��������� �� �������
    Begin= makeQueue();//�������� �������
    int comanda;
    int data;
	do {
		cout << "\n1 - Input data element, 2 - Print Queue, 3 - Delete data element, 0 - Exit\n";
		cin >> comanda;
		switch (comanda){
		case 1: addQueueElement(Begin);  break;
		case 2: ShowQueue(Begin); break;
		case 3: DeleteQueueElement(Begin);  break;
		case 0: cout << "\n \n Exit programm..." << endl;  break;
		default: cout << "Wrong input! " << endl;
		}//  switch
		//_getch();
		//system("cls");
	} while (comanda != 0);


  return 0;
}
