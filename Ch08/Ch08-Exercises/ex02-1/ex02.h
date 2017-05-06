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