// rewerr.cpp
// ��������� ������ �����/������
#include <fstream>            // ��� �������� �������
#include <iostream>
using namespace std;
#include <process.h>          // ��� exit()

const int MAX = 1000;
int buff[MAX];

int main()
  {
	int j;
	for(int j=0; j<MAX; j++)    // ��������� ����� �������
    buff[j] = j;
  ofstream os;                // ������� �������� �����
                              // ������� ���
  os.open("edata.dat", ios::trunc | ios::binary);
  if(!os)
    { cerr << "Error open input file\n"; exit(1); }

  cout << "Run writing...\n"; // �������� � ���� ����������
                              // ������
  os.write( reinterpret_cast<char*>(buff), MAX*sizeof(int) );
  if(!os)
    { cerr << "Writing to file is impossible\n"; exit(1); }
  os.close();                 // ���� ������� �����

  for(j=0; j<MAX; j++)        // �������� �����
    buff[j] = 0;

  ifstream is;                // ������� ������� �����
  is.open("edata.dat", ios::binary);
  if(!is)
    { cerr << "Error open input file\n";exit(1); }

  cout << "Run reading...\n"; // ������ �����
  is.read( reinterpret_cast<char*>(buff), MAX*sizeof(int) );
  if(!is)
    { cerr << "Error reading file\n"; exit(1); }

  for(j=0; j<MAX; j++)        // ��������� ������
    if( buff[j] != j )
      { cerr << "\nIncorrect data\n"; exit(1); }
  cout << "Correct data\n";
  return 0;
  }


