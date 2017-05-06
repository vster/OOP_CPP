#include <iostream>
#include <fstream>
#include <process.h>    // ��� exit()
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
	void writefile ( );
	void readfile ( );
	void cleanlist ( );
};
///////////////////////////////////////////////////////////
void linklist::additem ( int d ) // ���������� ��������
{
  link* newlink = new link;      // �������� ������
  newlink->data = d;             // ���������� ������
  newlink->next = first;         // ���������� �������� first
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
void linklist::writefile ( )
{
	ofstream outfile("list.txt");
	link* current = first;
	while ( current )
	{
		outfile << ' ' <<  current->data;
		current = current->next;
	}
	cout << "\nRunning writing to file." << endl;
	outfile.close();
}
///////////////////////////////////////////////////////////
void linklist::readfile ( )
{
	int n;
	ifstream infile("list.txt");
	first = NULL;
	while ( infile )
	{
		infile >> n;
		additem(n);
	}
	cout << "\nRunning reading from file." << endl;
	infile.close();
}
///////////////////////////////////////////////////////////
void linklist::cleanlist ( )
{
	first = NULL;
}
///////////////////////////////////////////////////////////
int main ( )
{
	linklist li;       // ������� ����������-������
	int n;
	char ch;
	while (true)
	{
		cout << "\n'a' - adding data to list"
				"\n'd' - display data from list"
				"\n'c' - clean list"
				"\n'w' - write data to file"
				"\n'r' - read data from file"
				"\n'x' - exit"
				"\nYour choice: ";
		cin >> ch;
		switch(ch)
		{
		case 'a':
			cout << "\nEnter number: ";
			cin >> n;
			li.additem(n);
			break;
		case 'd':
			li.display();
			break;
		case 'c':
			li.cleanlist();
			break;
		case 'w':
			li.writefile();
			break;
		case 'r':
			li.readfile();
			break;
		case 'x':
			exit(0);
		} // end switch
	} // end while


/*
  li.additem ( 25 ); // ��������� ���� ��������� �����
  li.additem ( 36 );
  li.additem ( 49 );
  li.additem ( 64 );

  li.display ( );    // ���������� ������
*/
  return 0;
}
