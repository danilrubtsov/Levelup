
#include <conio.h>
#include <string>

#include <fstream>
#include <iostream>
#include <math.h>
#include <assert.h>//библиотека для работы ф-и assert
using namespace std;
//при отладке - коды ошибок копируем (edit->mark) и гуглим
//вариант отладки - отладцик
//вариант - модуьный тест
//писать логи/протокол работы
//ручное тестирование
//fropen("main.txt", "w", stdout) - перенаправление вывода  в лог файл

struct QueueElement// элемент очереди
{
int data; //данные
QueueElement *NextElement; //указатель на след элемент
};

struct Queue //структура очередь
{
int N; //размер очереди
QueueElement * QueueEnd; //указатель на хвост очереди
};

Queue* makeQueue() {//функция счетчика элементов очереди -возвращает указатель на очередь
Queue* Q = new Queue;
Q->N=0;//размер очереди равен 0
return Q;
}

void addQueueElement(Queue* Q) {//функция добавления  элемента в очередь
    int data;
 cout <<"input data element :";
  cin >> data;
if (Q->N==0) {//если элементов в очереди еще нет
Q->N=1;
QueueElement* first_element=new QueueElement;;//заводим указатель на голову в очереди
first_element->data=data;//пишем данные
first_element->NextElement=NULL;//признак головы (первого элемента)
Q->QueueEnd=first_element;//пишем указатель на голову очереди
}
else //если очередь не пустая
{
   Q->N++;//инкремент счетчика очереди
    QueueElement* element= new QueueElement;//создаем новый элемент
    element->NextElement=Q->QueueEnd;//пишем указатель на голову
    element->data=data;//пишем данные
    Q->QueueEnd=element;//пишем указатель на новый хвост
}
}
void DeleteQueueElement(Queue* Q) {//функция удаления головы

if (Q->N==0) {//если элементов в очереди еще нет
cout <<"queue is empty!"<<endl;
             }
else //если очередь не пустая
{
Q->N=Q->N-1;//просто уменьшаем счетчик элементов
}
}

void ShowQueue(Queue* Q) {
    if (Q->N!=0){
    int k=Q->N;

    QueueElement* temp= Q->QueueEnd;//создаем временный указатель на хвост очереди
  cout <<"Total elements= "<< (Q->N) << endl;
  // Извлекаем из очереди
  assert(temp!=0);
  //assert(temp->NextElement!=0);
  assert(k!=0);
for(k; k>=1 ;k--)
{
 cout <<"Element number "<<k<<" data= " << temp->data << endl;
 temp= temp->NextElement;//идем к началу очереди

}

    }
    else
    cout <<"Queue is empty! " << endl;
}
int main()
{
    Queue* Begin;//глобальный указатель на очередь
    Begin= makeQueue();//создание очереди
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
