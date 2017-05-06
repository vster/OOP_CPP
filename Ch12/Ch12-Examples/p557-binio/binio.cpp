// binio.cpp
// �������� ����/����� ������������� ������
#include <fstream>         // ��� �������� �������
#include <iostream>
using namespace std;
const int MAX = 100;       // ������ ������
int buff[MAX];             // ����� ��� ����� �����

int main()
  {
  int j;
  for(int j=0; j<MAX; j++) // ��������� ����� �������
    buff[j] = j;           // (0, 1, 2, ...)
                           // ������� �������� �����
  ofstream os("edata.dat", ios::binary);
                           // �������� � ����
  os.write(reinterpret_cast<char*>(buff), MAX*sizeof(int) );
  os.close();              // ������ ������� ���

  for(j=0; j<MAX; j++)     // ������� �����
    buff[j] = 0;
                           // ������� ������� �����
  ifstream is("edata.dat", ios::binary);
                           // ������ �� ����
  is.read( reinterpret_cast<char*>(buff), MAX*sizeof(int) );

  for(j=0; j<MAX; j++)     // �������� ������
    if( buff[j] != j )
      { cerr << "Incorrect data!\n"; return 1; }
  cout << "Correct data\n";
  return 0;
  }


