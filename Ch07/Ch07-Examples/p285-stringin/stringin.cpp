// stringin.cpp
// простая переменная строка
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
  const int MAX = 80; // максимальный размер строки
  char str [ MAX ];   // сама строка

  cout << "Enter string: ";          // ввод строки
  cin >> str;

  cout << "You enter: " << str << endl; // показ результата

  return 0;
}


