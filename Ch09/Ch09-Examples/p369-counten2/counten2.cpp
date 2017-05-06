// counten2.cpp
// ������������ � ����������� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Counter
{
  protected:                         // ��������, ��� ��� �� ������� ������������ private
    unsigned int count;              // �������
  public:
    Counter ( ) : count ( )          // ����������� ��� ����������
      { }
    Counter ( int c ) : count ( c )  // ����������� � ����� ����������
      { }
    unsigned int get_count ( ) const // ��������� ��������
      { return count; }
    Counter operator++ ( )           // �������� ����������
      { return Counter ( ++count ); }
};
///////////////////////////////////////////////////////////
class CountDn : public Counter
{
  public:
    CountDn ( ) : Counter ( )        // ����������� ��� ����������
      { }
    CountDn ( int c ) : Counter ( c )// ����������� � ����� ����������
      { }
    CountDn operator-- ( )           // �������� ����������
      { return CountDn ( --count ); }
};
///////////////////////////////////////////////////////////
int main ( )
{
	CountDn c1;                            // ���������� ������ CountDn
	CountDn c2 ( 100 );

	cout << "\nc1 = " << c1.get_count ( ); // ������� �������� �� �����
	cout << "\nc2 = " << c2.get_count ( );

	++c1; ++c1; ++c1;                      // ����������� c1
	cout << "\nc1 = " << c1.get_count ( ); // ���������� ���������

	--c2; --c2;                            // ��������� c2
	cout << "\nc2 = " << c2.get_count ( );   // ���������� ���������

	CountDn c3 = --c2;                     // ������� ���������� c3 �� ������ c2
	cout << "\nc3 = " << c3.get_count ( ); // ���������� ��������

	cout << endl;

	return 0;
}

