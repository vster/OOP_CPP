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
		enum { SZ = 10 }; // ������������ ������ ������
		char str [ SZ ];  // ������ ��� ������
	public:
		// ����������� ��� ����������
		String ( )
		{ strcpy_s ( str, "" ); }
		// ����������� � ����� ����������
		String ( char s [ ] )
		{ strcpy_s ( str, s ); }
		void get ( )
		{
			cin >> str;
		}
		// ����� ������
		void display ( ) const
		{ 
			cout << str; 
		}
		// �������� ��������
		String operator+ ( String ss ) const
		{
			String temp;  // ��������� ����������
			if ( strlen ( str ) + strlen ( ss.str ) < SZ )
			{
				strcpy_s ( temp.str, str );    // �������� ���������� ������ ������
				strcat_s ( temp.str, ss.str ); // ��������� ���������� ������ ������
			}
			else
			{
				throw StringEx();
				//cout << "\nOverload!";
				//exit ( 1 );
			}
			return temp;  // ���������� ���������
		}
		class StringEx { };
};
///////////////////////////////////////////////////////////
int main ( )
{
	String s1;	// = "\nMerry Crysmas! "; 	// ���������� ����������� � ����������
	String s2;	// = "Happy New Year!";   	// ���������� ����������� � ����������
	String s3;                      	// ���������� ����������� ��� ����������

	
	try
	{
	cout << "Enter S1 : ";
	s1.get();
	cout << "Enter S2 : ";
	s2.get();
	
	// ���������� ������
	s1.display ( );
	cout << endl;
	s2.display ( );
	cout << endl;
	s3.display ( );
	cout << endl;

	
	s3 = s1 + s2;       // ����������� ������ s3 ��������� �������� ����� s1 � s2
	}
	catch(String::StringEx)
	{
		cout << "\nOverload!";
	}
	
	
	s3.display ( );     // ���������� ���������
	cout << endl;

	return 0;
}


