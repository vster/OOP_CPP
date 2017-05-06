// parse.cpp
// ��������� ������� �������������� ���������
#include <iostream>
#include <cstring>
using namespace std;
const int LEN = 80;       // ������������ ����� ���������
const int MAX = 40;       //

///////////////////////////////////////////////////////////
class Token
{
public:
	virtual float getNumber() = 0;
	virtual char getOperator() = 0;
};
///////////////////////////////////////////////////////////
class Operator : public Token
{
private:
	char oper;
public:
	Operator(char);
	char getOperator();
	float getNumber();
};
///////////////////////////////////////////////////////////
class Number : public Token
{
private:
	float fnum;
	Number(float);
	float getNumber();
	char getOperator();
};

///////////////////////////////////////////////////////////
class Stack
{
  private:
    char st [ MAX ];      // ������ ������
    int top;              // ���������� ����������� ������
  public:
    Stack ( )              // �����������
      { top = 0; }
    void push ( char var ) // ��������� � ����
      { st [ ++top ] = var; }
    char pop ( )           // ����� �� �����
      { return st [ top-- ]; }
    int gettop ( )         // ������ ���������� ���������
      { return top; }
};
///////////////////////////////////////////////////////////
class express
{
  private:
    Stack s;                   // ���� ������
    char* pStr;                // ������ ��� �����
    int len;                   // ����� ������
  public:
    express ( char* ptr )      // �����������
      {
        pStr = ptr;            // ���������� ��������� �� ������
        len = strlen ( pStr ); // ������������� �����
      }
    void parse ( );            // ������ ���������
    int solve ( );             // ��������� ����������
};
///////////////////////////////////////////////////////////
void express::parse ( ) // ��������� ������ � ����
{
  char ch;              // ������ �� ������
  char lastval;         // ��������� ��������
  char lastop;          // ��������� ��������

  for ( int j = 0; j < len; j++ ) // ��� ���� �������� � ������
  {
    ch = pStr [ j ];    // �������� ������

    if ( ch >= '0' && ch <= '9' ) // ���� ��� �����,
      s.push ( ch - '0' );        // �� ��������� �� ��������
    else
    if ( ch == '+' || ch == '-' || ch == '*' || ch == '/' )
    {
      if ( s.gettop ( ) == 1 ) // ���� ��� ������ ��������,
        s.push ( ch );         // �������� ��� � ����
      else // �����
      {
        lastval = s.pop ( ); // �������� ���������� �����
        lastop = s.pop ( );  // �������� ���������� ��������
        // ���� ��� * ��� /, � ���������� ��� + ��� -, ��
        if ( ( ch == '*' || ch == '/' ) && ( lastop == '+' || lastop == '-' ) )
        {
          s.push ( lastop ); // �������� ��������� ��� ������ �� �����
          s.push ( lastval );
        }
        else
        {
          // �������� � ���� ��������� ��������
          switch ( lastop )
          {
            case '+': s.push ( s.pop ( ) + lastval ); break;
            case '-': s.push ( s.pop ( ) - lastval ); break;
            case '*': s.push ( s.pop ( ) * lastval ); break;
            case '/': s.push ( s.pop ( ) / lastval ); break;
            default: cout << "\nUnknown operator"; exit ( 1 );
          }
        }
        s.push ( ch ); // �������� � ���� ������� ��������
      }
    }
    else               // �����-�� ������...
    {
      cout << "\nUnknown symbol";
      exit ( 1 );
    }
  }
}
///////////////////////////////////////////////////////////
int express::solve ( ) // ������� ������ �� �����
{
  char lastval;        // ���������� ��������

  while ( s.gettop ( ) > 1 )
  {
    lastval = s.pop ( ); // �������� ���������� ��������
    switch ( s.pop ( ) ) // �������� ���������� ��������
    {
      case '+': s.push ( s.pop ( ) + lastval ); break;
      case '-': s.push ( s.pop ( ) - lastval ); break;
      case '*': s.push ( s.pop ( ) * lastval ); break;
      case '/': s.push ( s.pop ( ) / lastval ); break;
      default: cout << "\n����������� ��������"; exit ( 1 );
    }
  }
  return int ( s.pop ( ) ); // ��������� �������� � ����� � ��� ���������
}
///////////////////////////////////////////////////////////
int main ( )
{
  char ans;            // '�' ��� '�'
  char string [ LEN ]; // ������ ��� �������

  cout << "\nEnter ariphmetic expression in such manner 2+3*4/3-2"
          "\nNumbers must be from one digit"
          "\nDon't use spaces and braces";

  do
  {
    cout << "\nExpression: ";
    cin >> string;                          // ������ ������
    express* eptr = new express ( string ); // ������� ������ ��� �������
    eptr->parse ( );                        // ���������
    cout << "\nResult: "
         << eptr->solve ( );                // ������
    delete eptr;                            // ������� ������
    cout << "\nOne more (y/n)? ";
    cin >> ans;
  }
  while ( ans == 'y' );
  return 0;
}


