#include <iostream>
#include <fstream>
#include <process.h>    // для exit()
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
	void writefile ( );
	void readfile ( );
	void cleanlist ( );
};
///////////////////////////////////////////////////////////
void linklist::additem ( int d ) // добавление элемента
{
  link* newlink = new link;      // выделяем память
  newlink->data = d;             // запоминаем данные
  newlink->next = first;         // запоминаем значение first
  first = newlink;               // first теперь указывает на новый элемент
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
void linklist::writefile ( )
{
	ofstream outfile("list.txt");
	link* current = first;
	while ( current )
	{
		outfile << ' ' <<  current->data;
		current = current->next;
	}
	cout << "\nRunning writing to file." << endl;
	outfile.close();
}
///////////////////////////////////////////////////////////
void linklist::readfile ( )
{
	int n;
	ifstream infile("list.txt");
	first = NULL;
	while ( infile )
	{
		infile >> n;
		additem(n);
	}
	cout << "\nRunning reading from file." << endl;
	infile.close();
}
///////////////////////////////////////////////////////////
void linklist::cleanlist ( )
{
	first = NULL;
}
///////////////////////////////////////////////////////////
int main ( )
{
	linklist li;       // создаем переменную-список
	int n;
	char ch;
	while (true)
	{
		cout << "\n'a' - adding data to list"
				"\n'd' - display data from list"
				"\n'c' - clean list"
				"\n'w' - write data to file"
				"\n'r' - read data from file"
				"\n'x' - exit"
				"\nYour choice: ";
		cin >> ch;
		switch(ch)
		{
		case 'a':
			cout << "\nEnter number: ";
			cin >> n;
			li.additem(n);
			break;
		case 'd':
			li.display();
			break;
		case 'c':
			li.cleanlist();
			break;
		case 'w':
			li.writefile();
			break;
		case 'r':
			li.readfile();
			break;
		case 'x':
			exit(0);
		} // end switch
	} // end while


/*
  li.additem ( 25 ); // добавляем туда несколько чисел
  li.additem ( 36 );
  li.additem ( 49 );
  li.additem ( 64 );

  li.display ( );    // показываем список
*/
  return 0;
}
