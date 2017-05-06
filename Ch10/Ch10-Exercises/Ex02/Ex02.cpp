#include <iostream>
#include <cstring>
#include <Cctype>
using namespace std;
///////////////////////////////////////////////////////////
class String
{
  private:
    char* str;          // ��������� �� ������
  public:
    String ( char* s )  // ����������� � ����� ����������
      {
        int length = strlen ( s );     // ��������� ����� ������
        str = new char [ length + 1 ]; // �������� ����������� ������
        strcpy ( str, s );             // �������� ������
      }
    ~String ( )         // ����������
      {
        cout << "Delete string\n";
        delete [ ] str; // ����������� ������
      }
    void display ( )    // ������� ������ �� ������
      {
        cout << str << endl;
      }
	void upit ( )
	{
		char*ptchar = str;
		while (*ptchar)
		{
			*ptchar = toupper(*ptchar);
			ptchar++;
		}
	}
};
///////////////////////////////////////////////////////////
int main ( )
{
  String s1 = "Tishe edesh - dalshe budish.";
  cout << "s1 = ";
  s1.display ( );

  s1.upit();

  cout << endl;
  s1.display ( );

  return 0;
}

