// vectins.cpp
// ������������ ������� insert(), erase()
#include <iostream>
#include <vector>
using namespace std;

int main()
   {
   int arr[] = { 100, 110, 120, 130 };  //������ ���� int

   int j;
   vector<int> v(arr, arr+4);           // ���������������� ������
                                        //��������

   cout << "\nBefore insert: ";
   for(j=0; j<v.size(); j++)        // ������� ��� ��������
      cout << v[j] << ' ';

   v.insert( v.begin()+2, 115);         // �������� 115 � ������� 2

   cout << "\nAfter insert:  ";
   for(j=0; j<v.size(); j++)            // ������� ��� ��������
      cout << v[j] << ' ';

   v.erase( v.begin()+2 );              // ������� ������� �� 2 �������

   cout << "\nAfter delete:    ";
   for(j=0; j<v.size(); j++)            // ������� ��� ��������
      cout << v[j] << ' ';
   cout << endl;
   return 0;
   }


