// newstr.cpp
// ������������� ��������� new ��� ��������� ������ ��� ������
#include <iostream>
#include <cstring>
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
        cout << "������� ������\n";
        delete [ ] str; // ����������� ������
      }
    void display ( )    // ������� ������ �� ������
      {
        cout << str << endl;
      }
};
///////////////////////////////////////////////////////////
int main ( )
{
  String s1 = "Tishe edesh - dalshe budish.";
  cout << "s1 = ";
  s1.display ( );

  return 0;
}


