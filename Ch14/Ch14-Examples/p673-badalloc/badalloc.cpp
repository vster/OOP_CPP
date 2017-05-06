// badalloc.cpp
// Демонстрация исключения bad_alloc 
#include <iostream>
using namespace std;

int main()
  {
  const unsigned long SIZE = 10000; //объем памяти
  char* ptr;              //указатель на адрес в памяти

  try
    {
    ptr = new char[SIZE]; //разместить в памяти SIZE байт
    }
  catch(bad_alloc)        //обработчик исключений
    {
    cout << "\n Exception bad_alloc: impossible locate data in memory.\n";
    return(1);
    }
  delete[] ptr;           //освободить память
  cout << "\nMemory used without errors.\n";
  return 0;
  }


