// table2.cpp
// ����������� ������� ��� ���������������� ������������� 
// ���������
#include <iostream>
using namespace std;

//--------------------------------------------------------
// ����������� ������� starline()
void starline()
{
	for( int j = 0; j < 45; j++ )
	cout << '*';
	cout << endl;
}
//--------------------------------------------------------
int main()                   	// ������� main()
{
	starline();                	// ����� �������
	cout << "Data type   Range" << endl;
	starline();                	// ����� �������
	cout << "char        -128...127" << endl
		 << "short       -32,768...32,767" << endl
		 << "int         System-dependent" << endl
		 << "long        -2,147,483,648...2,147,483,647" << endl;
	starline();                	// ����� �������
	return 0;
}


