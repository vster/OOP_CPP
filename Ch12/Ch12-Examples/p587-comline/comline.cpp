// comline.cpp
// ������������ ������ � ����������� ��������� ������
#include <iostream>
using namespace std;

int main(int argc, char* argv[] )
  {
  cout << "\nargc = " << argc << endl; // ����� ���������� 

  for(int j=0; j<argc; j++)            // ������� ���������
    cout << "Argument " << j << " = " << argv[j] << endl;
  return 0;
  }
/*
� ��� ������ ������ ���� ���������:
C:\C++BOOK\Chap12>comline uno dos tres
argc = 4
�������� 0 = C:\C++BOOK\CHAP12>COMLINE.exe
�������� 1 = uno
�������� 2 = dos
�������� 3 = tres
*/

