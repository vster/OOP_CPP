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
	~linklist ( );
};
///////////////////////////////////////////////////////////
void linklist::additem ( int d ) // ���������� ��������
{
  link* newlink = new link;      // �������� ������

  newlink->data = d;             // ���������� ������
  newlink->next = first;         // ���������� �������� first
  cout << "Create " << newlink << endl;
  first = newlink;               // first ������ ��������� �� ����� �������
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
linklist::~linklist()
{
	link*current = first;
	while(current != NULL)
	{
		cout << "Destruct " << current << endl;
		link*temp = current;
		current = current->next;
		delete temp;
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


