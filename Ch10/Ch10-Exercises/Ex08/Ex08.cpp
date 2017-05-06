// linklist.cpp
// ������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
struct link   // ���� ������� ������
{
  int data;   // ��������� ������
  link* next; // ��������� �� ��������� ���������
};
///////////////////////////////////////////////////////////
class linklist // ������
{
  private:
    link* first;
  public:
    linklist ( )            // ����������� ��� ����������
      { first = NULL; }     // ������� �������� ���� ���
    void additem ( int d ); // ���������� ��������
    void display ( );       // ����� ������
};
///////////////////////////////////////////////////////////
void linklist::additem ( int d ) // ���������� ��������
{
	link* newlink = new link;		// �������� ������
	newlink->data = d;				// ���������� ������
  
	if (first != NULL)				// ��� ��������� ������ �������?
	{
		link* last = first;			// ���� �� ������ 
		while (last->next)			// ����� �����
			last = last->next;
		last->next = newlink;		// � ����� �������� ����� �������
	}
	else	
		first = newlink;			// ������� ������ �������

	newlink->next = NULL;			// ����� ������� �������� ������
}
///////////////////////////////////////////////////////////
void linklist::display ( )
{
  link* current = first;           // �������� � ������� ��������
  while( current )                 // ���� ���� ������
  {
    cout << current->data << endl; // �������� ������
    current = current->next;       // ��������� � ���������� ��������
  }
}
///////////////////////////////////////////////////////////
int main ( )
{
  linklist li;       // ������� ����������-������

  li.additem ( 25 ); // ��������� ���� ��������� �����
  li.additem ( 36 );
  li.additem ( 49 );
  li.additem ( 64 );

  li.display ( );    // ���������� ������

  return 0;
}


