// binio.cpp
// �������� ����/����� ������������� ������
#include <fstream>         // ��� �������� �������
#include <iostream>
using namespace std;
const int MAX = 100;       // ������ ������
unsigned long buff[MAX];             // ����� ��� ����� �����
unsigned long buffin[MAX]; 

int main()
  {
  int j;
  for(int j=0; j<MAX; j++) // ��������� ����� �������
    buff[j] = rand();           // (0, 1, 2, ...)
                           // ������� �������� �����
  ofstream os("edata.dat", ios::binary);
                           // �������� � ����
  os.write(reinterpret_cast<char*>(buff), MAX*sizeof(unsigned long) );
  os.close();              // ������ ������� ���

  //for(j=0; j<MAX; j++)     // ������� �����
  // buff[j] = 0;
                           // ������� ������� �����
  ifstream is("edata.dat", ios::binary);
                           // ������ �� ����
  is.read( reinterpret_cast<char*>(buffin), MAX*sizeof(unsigned long) );

  for(j=0; j<MAX; j++)     // �������� ������
    if( buff[j] != buffin[j] )
      { cerr << "Incorrect data!\n"; return 1; }
  cout << "Correct data\n";
  return 0;
  }