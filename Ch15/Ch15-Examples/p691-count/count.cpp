// count.cpp
// ������� ���������� ��������, ������� ������ ��������
#include <iostream>
#include <algorithm>               //��� count()
using namespace std;

int arr[] = { 33, 22, 33, 44, 33, 55, 66, 77 };

int main()
   {
   int n = count(arr, arr+8, 33);  //�������, ������� ���
                                   //����������� 33
   cout << "Number 33 met " << n << " times in array." << endl;
   return 0;
   }


