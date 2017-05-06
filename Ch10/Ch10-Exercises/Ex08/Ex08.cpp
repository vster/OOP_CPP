// linklist.cpp
// список
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
struct link   // один элемент списка
{
  int data;   // некоторые данные
  link* next; // указатель на следующую структуру
};
///////////////////////////////////////////////////////////
class linklist // список
{
  private:
    link* first;
  public:
    linklist ( )            // конструктор без параметров
      { first = NULL; }     // первого элемента пока нет
    void additem ( int d ); // добавление элемента
    void display ( );       // показ данных
};
///////////////////////////////////////////////////////////
void linklist::additem ( int d ) // добавление элемента
{
	link* newlink = new link;		// выделяем память
	newlink->data = d;				// запоминаем данные
  
	if (first != NULL)				// Это создается первый элемент?
	{
		link* last = first;			// Если не первый 
		while (last->next)			// Найти хвост
			last = last->next;
		last->next = newlink;		// В хвост добавить новый элемент
	}
	else	
		first = newlink;			// Создаем первый элемент

	newlink->next = NULL;			// Новый элемент замыкает список
}
///////////////////////////////////////////////////////////
void linklist::display ( )
{
  link* current = first;           // начинаем с первого элемента
  while( current )                 // пока есть данные
  {
    cout << current->data << endl; // печатаем данные
    current = current->next;       // двигаемся к следующему элементу
  }
}
///////////////////////////////////////////////////////////
int main ( )
{
  linklist li;       // создаем переменную-список

  li.additem ( 25 ); // добавляем туда несколько чисел
  li.additem ( 36 );
  li.additem ( 49 );
  li.additem ( 64 );

  li.display ( );    // показываем список

  return 0;
}


