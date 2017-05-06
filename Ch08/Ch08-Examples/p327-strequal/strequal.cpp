// strequal.cpp
// ���������� �������� ==
#include <iostream>
using namespace std;
#include <string.h> // ��� ������� strcmp
///////////////////////////////////////////////////////////
class String            // ��� ����� ��� �����
{
	private:
		enum { SZ = 80 };   // ������������ ������ ������
		char str [ SZ ];    // ������ ��� ������
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
		// ��������� ������
		void getstr ( )
		{ cin.get ( str, SZ ); }
		// �������� ���������
		bool operator == ( String ss ) const
		{
			return ( strcmp ( str, ss.str ) == 0 ) ? true : false;
		}
};
///////////////////////////////////////////////////////////
int main ( )
{
	String s1 = "yes";
	String s2 = "no";
	String s3;

	cout << "\nEnter 'yes' or 'no': ";
	s3.getstr ( );        // �������� ������ �� ������������

	if ( s3 == s1 )       // ���������� �� ������� '��'
		cout << "You enter 'yes'\n";
	else if ( s3 == s2 )       // ���������� �� ������� '���'
		cout << "You enter 'no'\n";
	else
		cout << "Follow instructions!\n";

	return 0;
}

