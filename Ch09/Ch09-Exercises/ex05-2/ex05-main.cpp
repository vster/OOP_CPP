#include <iostream>
#include "ex05-func.h"

using namespace std;

int main ( )
{
  manager m1;
  scientist s1;
  laborer l1;

  // введем информацию о нескольких сотрудниках
  cout << endl;
  cout << "\nInfo input about 1st manager";
  m1.getdata ( );

  cout << "\nInfo input about 1st scientist";
  s1.getdata ( );

  cout << "\nInfo input about 1st laborer";
  l1.getdata ( );

  // выведем полученную информацию на экран
  cout << "\nInfo about 1st manager";
  m1.putdata ( );

  cout << "\nInfo about 1st scientis";
  s1.putdata ( );

  cout << "\nInfo about 1st laborer";
  l1.putdata ( );

  cout << endl;
  return 0;
}