// ezprint.cpp
// ������� ����� �� �������
#include <fstream>             // ��� �������� �������
using namespace std;

int main()
  {
  char* s1 = "\nToday your happy number is ";
  int  n1 = 17982;

  ofstream outfile;            // ������� �������� ����
  outfile.open("PRN");         // ������� �������� ������ � ����
  outfile << s1 << n1 << endl; // ������� ������ �� �������
  outfile << '\x0C';           // �������� ���� �� �����
  return 0;
  }


