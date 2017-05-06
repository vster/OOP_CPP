// vectcon.cpp
// ������������ �������������, swap(), empty(), back(), pop_back()
#include <iostream>
#include <vector>
using namespace std;

int main()
   {                                 // ������ ���� double
   double arr[] = { 1.1, 2.2, 3.3, 4.4 };

   vector<double> v1(arr, arr+4);    // ������������� �������
                                     //��������
   vector<double> v2(4);             // ������ ������. ������ = 4

   v1.swap(v2);                      // �������� ���������� v1 � v2

   while( !v2.empty() )         // ���� ������ �� ����� ����,
      {
      cout << v2.back() << ' '; // ������� ��������� �������
      v2.pop_back();            // � ������� ���
      }                         // �����: 4.4 3.3 2.2 1.1
   cout << endl;
   return 0;
   }


