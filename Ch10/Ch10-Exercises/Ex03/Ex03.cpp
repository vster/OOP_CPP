// ptrtostr.cpp
// ������ ���������� �� ������
#include <iostream>
#include <cstring>
using namespace std;
const int DAYS = 7;

int main ( )
{
  void bsort ( char**, int ); // �������� �������
	// ������ ���������� �� ������
  char* arrptrs [ DAYS ] = 
	{
		"Monday", "Tuesday", "Wednesday", "Thursday",
		"Fryday", "Saturday", "Sunday"
	};

  for ( int j = 0; j < DAYS; j++ ) // ������� ��� ������
    cout << *(arrptrs + j) << endl;

  bsort (arrptrs, DAYS);

  cout << endl;
  cout << "Sorted array:" << endl;
  for ( int j = 0; j < DAYS; j++ ) // ������� ��� ������
    cout << *(arrptrs + j) << endl;

  return 0;
}

///////////////////////////////////////////////////////////
void bsort ( char** ptr, int n )
{
  void order ( char**, char** );        // �������� �������
  int j, k;								// ������� � ����� �������

  for ( j = 0; j < n - 1; j++ )			// ������� ����
    for ( k = j + 1; k < n; k++ )		// ���������� ����
      order ( ptr + j, ptr + k );		// ��������� ��������
}
///////////////////////////////////////////////////////////
void order ( char** pp1, char** pp2 )	// ���������� ���� �����
{
  if (strcmp (*pp1, *pp2)>0)			// ���� ������ ������	                                   
										// ������, �� ������ �� �������
  {
    char* tempptr = *pp1;
    *pp1 = *pp2;
    *pp2 = tempptr;
  }
}
