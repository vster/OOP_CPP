// ptrtostr.cpp
// массив указателей на строки
#include <iostream>
#include <cstring>
using namespace std;
const int DAYS = 7;

int main ( )
{
  void bsort ( char**, int ); // прототип функции
	// массив указателей на строки
  char* arrptrs [ DAYS ] = 
	{
		"Monday", "Tuesday", "Wednesday", "Thursday",
		"Fryday", "Saturday", "Sunday"
	};

  for ( int j = 0; j < DAYS; j++ ) // покажем все строки
    cout << *(arrptrs + j) << endl;

  bsort (arrptrs, DAYS);

  cout << endl;
  cout << "Sorted array:" << endl;
  for ( int j = 0; j < DAYS; j++ ) // покажем все строки
    cout << *(arrptrs + j) << endl;

  return 0;
}

///////////////////////////////////////////////////////////
void bsort ( char** ptr, int n )
{
  void order ( char**, char** );        // прототип функции
  int j, k;								// индексы в нашем массиве

  for ( j = 0; j < n - 1; j++ )			// внешний цикл
    for ( k = j + 1; k < n; k++ )		// внутренний цикл
      order ( ptr + j, ptr + k );		// сортируем элементы
}
///////////////////////////////////////////////////////////
void order ( char** pp1, char** pp2 )	// сортировка двух строк
{
  if (strcmp (*pp1, *pp2)>0)			// если первая строка	                                   
										// больше, то меняем их местами
  {
    char* tempptr = *pp1;
    *pp1 = *pp2;
    *pp2 = tempptr;
  }
}
