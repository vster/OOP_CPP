// ptrtostr.cpp
// массив указателей на строки
#include <iostream>
using namespace std;
const int DAYS = 7;

int main ( )
{
  // массив указателей на строки
  char* arrptrs [ DAYS ] = 
	{
		"Monday", "Tuesday", "Wednesday", "Thursday",
		"Fryday", "Saturday", "Sunday"
	};

  for ( int j = 0; j < DAYS; j++ ) // покажем все строки
    cout << arrptrs [ j ] << endl;

  return 0;
}


