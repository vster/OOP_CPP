// staken.cpp
// ���������� ������� �������� � ������������ �������
#include <iostream>
using namespace std;
#include <process.h>      // ��� exit ( )



///////////////////////////////////////////////////////////
class Stack
{
  protected:              // ���������: ������������ private ������
    enum { MAX = 20 };     // ������ �����
    int st[ MAX ];        // ������, ���������� � �����
    int top;              // ������ ���������� �������� � �����
  public:
    Stack ( )            // �����������
      { top = -1; }
    void push ( int var ) // ��������� ����� � ����
      { st[ ++top ] = var; }
    int pop ( )           // ���������� ����� �� �����
      { return st[ top-- ]; }
};
///////////////////////////////////////////////////////////
class Stack2 : public Stack
{
  public:
    void push ( int var )      // ��������� ����� � ����
      {
        if ( top >= MAX - 1 )  // ���� ���� �����, �� ������
          { cout << "\nError: stack full"; exit ( 1 ); }
        Stack::push ( var );   // ����� ������� push ������ Stack
      }
    int pop ( )                // ���������� ����� �� �����
      {
        if ( top < 0 )         // ���� ���� ����, �� ������
          { cout << "\nError: stack empty\n"; exit ( 1 ); }
        return Stack::pop ( ); // ����� ������� pop ������ Stack
      }
};

struct pairxy
{
	int x;
	int y;
};

class pairStack : public Stack2
{
public:
	void push ( pairxy pp )
	{
		Stack2::push(pp.x);
		Stack2::push(pp.y);
	}
	pairxy pop ( )
	{
		pairxy tp;
		tp.y = Stack2::pop ();
		tp.x = Stack2::pop ();
		return tp;
	}
};

///////////////////////////////////////////////////////////
int main ( )
{
	pairStack ps1;
	pairxy p1 ={1,1}, p2 ={2,2}, p3 ={3,3};	
	pairxy p4, p5, p6, p7;
  
  ps1.push ( p1 ); // �������� � ���� ��������� �����
  ps1.push ( p2 );
  ps1.push ( p3 );

  p4 = ps1.pop ( ); // ������� ����� �� �����
  p5 = ps1.pop ( );
  p6 = ps1.pop ( );
  p7 = ps1.pop ( ); // ��, � ������-�� ������ ���
  return 0;
}


