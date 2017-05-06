// badalloc.cpp
// ������������ ���������� bad_alloc 
#include <iostream>
using namespace std;

int main()
  {
  const unsigned long SIZE = 10000; //����� ������
  char* ptr;              //��������� �� ����� � ������

  try
    {
    ptr = new char[SIZE]; //���������� � ������ SIZE ����
    }
  catch(bad_alloc)        //���������� ����������
    {
    cout << "\n Exception bad_alloc: impossible locate data in memory.\n";
    return(1);
    }
  delete[] ptr;           //���������� ������
  cout << "\nMemory used without errors.\n";
  return 0;
  }


