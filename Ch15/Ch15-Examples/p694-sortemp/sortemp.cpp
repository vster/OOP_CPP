// sortemp.cpp
// ���������� ������� ���� double �� ��������,
// ������������ �������������� ������ greater<>()
#include <iostream>
#include <algorithm>                  //��� sort()
#include <functional>                 //��� greater<>
using namespace std;
                                      // ������ double
double fdata[] = { 19.2, 87.4, 33.6, 55.0, 11.5, 42.2 };

int main()
   {                       // ���������� �������� double
   sort( fdata, fdata+6, greater<double>() );

   for(int j=0; j<6; j++)  // ������� ��������������� ������
      cout << fdata[j] << ' ';
   cout << endl;
   return 0;
   }


