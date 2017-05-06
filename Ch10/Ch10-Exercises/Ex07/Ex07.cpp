// persort.cpp
// сортировка объектов через массив указателей на них
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class person            // некоторый человек
{
  protected:
    string name;        // имя
	float salary;
  public:
    void setData ( )    // установка имени
	{ 
	  cout << "Enter name: "; 
	  cin >> name; 
	  cout << "Enter salary: ";
	  cin >> salary;
	}
    void printData ( )  // показ имени
    { 
		  cout << endl 
				 << setw(15) 
				 << left
				 << name 
				 << setiosflags ( ios::fixed )
				 << setiosflags ( ios::showpoint )
				 << setprecision ( 2 )
				 << setw ( 10 ) 
				 << right << salary; 
	}
    string getName ( )  // получение имени
    { return name; }
	float getSalary ( )
	{ return salary; }
};
///////////////////////////////////////////////////////////
int main ( )
{
  void bsort ( person**, int ); // прототип функции
  void salsort ( person**, int);
  person* persPtr [ 100 ];      // массив указателей на person
  int n = 0;                    // количество элементов в массиве
  char choice;                  // переменная для ввода символа
  int j;

  do
  {
    persPtr [ n ] = new person;       // создаем новый объект
    persPtr [ n ]->setData ( );       // вводим имя
    n++;                              // увеличиваем количество
    cout << "Continue (y/n)?"; // спрашиваем, закончен ли ввод
    cin >> choice;
  }
  while ( choice == 'y' );

  cout << "\nUnsorted list:";
  for ( int j = 0; j < n; j++ ) // покажем неотсортированный список
    persPtr [ j ]->printData ( );

  salsort ( persPtr, n );         // отсортируем указатели

  cout << "\n\nSorted list:";
  for ( j = 0; j < n; j++ )     // покажем отсортированный список
    persPtr [ j ]->printData ( );
  cout << endl;

  return 0;
}
///////////////////////////////////////////////////////////
void bsort ( person** pp, int n )
{
  void order ( person**, person** ); // прототип функции
  int j, k;                          // переменные для циклов

  for ( j = 0; j < n - 1; j++ )      // внешний цикл
    for ( k = j + 1; k < n; k++ )    // внутренний цикл
      order ( pp + j, pp + k );      // сортируем два элемента
}
///////////////////////////////////////////////////////////
void order ( person** pp1, person** pp2 )
{
  if( (*pp1)->getName ( ) > (*pp2)->getName ( ) ) // если первая строка больше второй,
  {
    person* tempptr = *pp1; // меняем их местами
    *pp1 = *pp2;
    *pp2 = tempptr;
  }
}
///////////////////////////////////////////////////////////
void salsort( person** pp, int n)
{
	int j,k;

  for ( j = 0; j < n - 1; j++ )      // внешний цикл
    for ( k = j + 1; k < n; k++ )    // внутренний цикл
	{
		if ( (*(pp+j))->getSalary() > (*(pp+k))->getSalary() )
		{
			person* tempptr = *(pp+j); // меняем их местами
			*(pp+j) = *(pp+k);
			*(pp+k) = tempptr;
		}
	}
}