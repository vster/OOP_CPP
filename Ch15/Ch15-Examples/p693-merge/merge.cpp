// merge.cpp
// ���������� ���� ����������� � ������
#include <iostream>
#include <algorithm>          //��� merge()
using namespace std;

int src1[] = { 2, 3, 4, 6, 8 };
int src2[] = { 1, 3, 5 };
int dest[8];

int main()
   {                          //��������� src1 � src2 � dest
   merge(src1, src1+5, src2, src2+3, dest);
   for(int j=0; j<8; j++)     // ������� dest
      cout << dest[j] << ' ';
   cout << endl;
   return 0;
   }


