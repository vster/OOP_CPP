// twostr.cpp
// описание строк через массивы и через указатели
#include <iostream>
using namespace std;

int main ( )
{
  char str1 [ ] = "Definition through the massif";
  char* str2 = "Definition through the pointer";

  cout << str1 << endl; // покажем наши строки
  cout << str2 << endl;

//	str1++;               // так делать нельзя
  str2++;               // а так можно

  cout << str2 << endl; // значение str2 немного изменилось

  return 0;
}


