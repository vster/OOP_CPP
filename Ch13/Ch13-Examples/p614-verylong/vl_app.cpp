// vl_app.cpp
// ��������� ���������� ������� �����
#include "verylong.h"    //������������ ���� verylong

int main()
  {
  unsigned long numb, j;
  verylong fact=1;       //���������������� verylong

  cout << "\n\nEnter number: ";
  cin >> numb;           //���� ����� ���� long int

  for(j=numb; j>0; j--)  //��������� � ��� numb *
    fact = fact * j;     //  numb-1 * numb-2 *
  cout << "Factorial = "; //  numb-3 � �. �.
  fact.putvl();          //������� �������� ����������
  cout << endl;
  return 0;
  }

