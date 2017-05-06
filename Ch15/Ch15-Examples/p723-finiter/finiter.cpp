// finiter.cpp
// ������������ ������ istream_iterator � �������
#include <iostream>
#include <list>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
   {
   list<int> iList;               // ������ ������
   ifstream infile("ITER.DAT");   // ������� ������� �������� ������
                                  // (���� ITER.DAT ������ ��� ������������)
                                  // ��������� istream
   istream_iterator<int> file_iter(infile);  // ����
   istream_iterator<int> end_of_stream;      // eos (����� ������)
                                  // ���������� ������ �� �������� ����� � iList
   copy( file_iter, end_of_stream, back_inserter(iList) );

   cout << endl;                  // ������� iList
   ostream_iterator<int> ositer(cout, "--");
   copy(iList.begin(), iList.end(), ositer);
   cout << endl;
   return 0;
   }


