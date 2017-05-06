// strconv.cpp
// ������� ������� ����� � ����� String
#include <iostream>
using namespace std;
#include <string.h>          // ��� ������� str*
///////////////////////////////////////////////////////////
class String
{
	private:
		enum { SZ = 80 };        // ������ �������
		char str [ SZ ];         // ������ ��� �������� ������
	public:
		// ����������� ��� ����������
		String ( )
		{ str [ 0 ] = '\x0'; }
		// ����������� � ����� ����������
		String ( char s [ ] )
		{ strcpy_s ( str, s ); } // ��������� ������ � �������
		// ����� ������
		void display ( ) const
		{ cout << str; }
		// ������� ������ � �������� ����
		operator char* ( )
		{ return str; }
};
///////////////////////////////////////////////////////////
int main ( )
{
	String s1;                 // ���������� ����������� ��� ����������

	char xstr [ ] = "Gip-gip-ura, camrads! "; // ������� ������� ������

	s1 = xstr;                 // ������ ���������� ����������� � ����� ����������

	s1.display ( );            // ���������� ������

	String s2 = "We'll win!"; // ����� ���������� ����������� � ����������

	cout << static_cast<char*>( s2 ); // ���������� �������� �������� ����
	cout << endl;

	return 0;
}


