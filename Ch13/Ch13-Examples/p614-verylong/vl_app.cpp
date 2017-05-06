// vl_app.cpp
// вычисляет факториалы больших чисел
#include "verylong.h"    //заголовочный файл verylong

int main()
  {
  unsigned long numb, j;
  verylong fact=1;       //инициализировать verylong

  cout << "\n\nEnter number: ";
  cin >> numb;           //ввод числа типа long int

  for(j=numb; j>0; j--)  //факториал — это numb *
    fact = fact * j;     //  numb-1 * numb-2 *
  cout << "Factorial = "; //  numb-3 и т. д.
  fact.putvl();          //вывести значение факториала
  cout << endl;
  return 0;
  }

