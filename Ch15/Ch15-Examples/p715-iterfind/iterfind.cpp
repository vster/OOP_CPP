// iterfind.cpp
// find() ���������� �������� ������
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
   {
   list<int> theList(5);      // ������ ������ ��� 5 �������� int
   list<int>::iterator iter;  // ��������
   int data = 0;
                              // ���������� ������ �������
   for(iter = theList.begin(); iter != theList.end(); iter++)
      *iter = data += 2;      //2, 4, 6, 8, 10
                              // ����� ����� 8
   iter = find(theList.begin(), theList.end(), 8);
   if( iter != theList.end() )
      cout << "\nFound number 8.\n";
   else
      cout << "\nNumber 8 not found.\n";
   return 0;
   }


