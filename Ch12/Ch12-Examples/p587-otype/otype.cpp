// otype.cpp
// �������� ������� TYPE
#include <fstream>        // ��� �������� �������
#include <iostream>
using namespace std;
#include <process.h>      // ��� exit()

int main(int argc, char* argv[] )
  {
  if( argc != 2 )
    {
    cerr << "\nFormat of commnad: otype filename";
    exit(-1);
    }
  char ch;                // ������ ��� ����������
  ifstream infile;        // ������� ������� ����
  infile.open( argv[1] ); // ������� ����
  if( !infile )           // ��������� �� ������� ������
    {
    cerr << "\nImpossible open " << argv[1];
    exit(-1);
    }
  while( infile.get(ch) != 0 ) // ������� ������
    cout << ch;                // ���������� ������
  return 0;
  }


