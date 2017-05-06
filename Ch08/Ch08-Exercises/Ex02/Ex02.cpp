// strplus.cpp
// ���������� �������� + ��� �����
#include <iostream>
using namespace std;
#include <string.h>   // ��� ������� strcpy, strcat
#include <stdlib.h>   // ��� ������� exit
///////////////////////////////////////////////////////////
class String          // ��� ����� ��� �����
{
	private:
		enum { SZ = 80 }; // ������������ ������ ������
		char str [ SZ ];  // ������ ��� ������
	public:
		// ����������� ��� ����������
		String ( )
		{ strcpy_s ( str, "" ); }
		// ����������� � ����� ����������
		String ( char s [ ] )
		{ strcpy_s ( str, s ); }
		// ����� ������
		void display ( ) const
		{ cout << str; }
		// �������� ����������
		String operator += ( String ss ) 
		{
			if ( strlen ( str ) + strlen ( ss.str ) < SZ )
			{
					strcat_s ( str, ss.str ); // ��������� ���������� ������ ������
			}
			else
			{
				cout << "\nOverload!";
				exit ( 1 );
			}
			return str;  // ���������� ���������
		}
};
///////////////////////////////////////////////////////////
int main ( )
{
	String s1 = "\nMerry Crysmas! "; 	// ���������� ����������� � ����������
	String s2 = "Happy New Year!";   	// ���������� ����������� � ����������
	String s3;                      	// ���������� ����������� ��� ����������

	// ���������� ������
	s1.display ( );
	s2.display ( );
	s3.display ( );

	s1 += s2;

	// s3 = s1 + s2;       // ����������� ������ s3 ��������� �������� ����� s1 � s2

	s1.display ( );     // ���������� ���������
	cout << endl;

	return 0;
}


