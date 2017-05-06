// ptrstr.cpp
// показ строки, определенной через указатель
#include <iostream>
using namespace std;

int main ( )
{
  void dispstr ( char* ); // прототип функции
  char str [ ] = "All my troubles seemed so far away.";

  dispstr ( str );

  return 0;
}
///////////////////////////////////////////////////////////
void dispstr ( char* ps )
{
  while( *ps )            // пока не встретим конец строки
    cout << *ps++;        // будем посимвольно выводить ее на экран
  cout << endl;
}


