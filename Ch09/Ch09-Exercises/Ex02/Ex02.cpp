#include <iostream>
using namespace std;
#include <string.h>          // ��� ������� str*
///////////////////////////////////////////////////////////
class String
{
	protected:
		enum { SZ = 40 };        // ������ �������
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

class Pstring : public String
{
public:
	Pstring ( char s[]);
};
Pstring::Pstring( char s[])
{
	int j;
	if ( strlen(s) > SZ - 1 )
	{
		for ( j = 0; j < SZ - 1; j++ )
			str [j] = s [j];
		str[j] = '\0';
	}
	else
		String ( s );
}

int main()
{
	Pstring p1 = "fgsdg sf sfgdsf gsdfg fgds sadfu aspdf asdf pasdf asdpf asdfuasdfa sdfpdsa fpaosdf asdpfoaudsfasdfasd";
	cout << "\ns1 = ";
	p1.display();

	Pstring p2 = "dasfadsfads adsfasd asfasdf asd";
	cout << "\ns2 = ";
	p2.display();

	return 0;
}


