// linklist.cpp
// ������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
struct link   // ���� ������� ������
{
	int index;
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
//	linklist ( linklist& );
	void additem ( int, int ); // ���������� ��������
    void display ( );       // ����� ������
	void showfirstitem ( );
	void showlastitem ( );
	int countlist ( );
	void invertlist ( );
	void copytoarray ( int *arr );
	void copyfromarray ( int *arr, int n );
	linklist copytolist ( );
	void copytolist2 ( linklist ll );
	void operator = ( linklist& );
	void nulllist ();
};
/*
linklist::linklist ( linklist& slist )
{
	link* scurrent = slist.first;
	while ( scurrent )
	{
		link* newlink = new link;      // �������� ������
		newlink->data = scurrent->data;             // ���������� ������
		newlink->index = scurrent->index;
		newlink->next = first;         // ���������� �������� first
		first = newlink;               // first ������ ��������� �� ����� �������

		scurrent = scurrent->next;
	}
}
*/

///////////////////////////////////////////////////////////
void linklist::additem ( int d, int i ) // ���������� ��������
{
  link* newlink = new link;      // �������� ������
  newlink->data = d;             // ���������� ������
  newlink->index = i;
  newlink->next = first;         // ���������� �������� first
  first = newlink;               // first ������ ��������� �� ����� �������
}
///////////////////////////////////////////////////////////
void linklist::showfirstitem (  ) 
{
	link* current = first;
    cout << current << '\t' << current->index << 
		 '\t' << current->data << '\t' << first << endl; // �������� ������
}
void linklist::showlastitem ( )
{
	link* current = first;
	link* last;
	while ( current )
	{
		last = current;
		current = current->next;	
	}
	cout << last << '\t' << last->index << 
		 '\t' << last->data << endl; // �������� ������
};
///////////////////////////////////////////////////////////
void linklist::display ( )
{
  link* current = first;           // �������� � ������� ��������
  while( current )                 // ���� ���� ������
  {
    cout << current << '\t' << current->index << 
		 '\t' << current->data << endl; // �������� ������
    current = current->next;       // ��������� � ���������� ��������
  }
}
///////////////////////////////////////////////////////////
void linklist::copytoarray ( int *arr )
{
	link* current = first;
	int i = 0;
	while ( current )
	{
		arr[i++] = current->data;
		current = current->next;	
	}
}
///////////////////////////////////////////////////////////
void linklist::copyfromarray ( int *arr, int n )
{
	for (int i = 0; i<n; i++)
	{
		link* newlink = new link;      // �������� ������
		newlink->data = arr[i];             // ���������� ������
		newlink->index = i;
		newlink->next = first;         // ���������� �������� first
		first = newlink;               // first ������ ��������� �� ����� �������
	}
}
///////////////////////////////////////////////////////////
linklist linklist::copytolist ( )
{
	linklist tlist;
	link* newlink;
	link* current = first;

//	link* tcurrent = tlist.first;
	while ( current )
	{
//		tlist.additem( current->data , current->index );
		newlink = new link;      // �������� ������
		newlink->data = current->data;             // ���������� ������
		newlink->index = current->index;
		newlink->next = tlist.first;         // ���������� �������� first
		tlist.first = newlink;               // first ������ ��������� �� ����� �������

		current = current->next;	
	}

	return tlist;
}
///////////////////////////////////////////////////////////
void linklist::copytolist2 ( linklist slist )
{
	link* scurrent = slist.first;
	while ( scurrent )
	{
		link* newlink = new link;      // �������� ������
		newlink->data = scurrent->data;             // ���������� ������
		newlink->index = scurrent->index;
		newlink->next = first;         // ���������� �������� first
		first = newlink;               // first ������ ��������� �� ����� �������

		scurrent = scurrent->next;
	}
}
///////////////////////////////////////////////////////////
void linklist::operator = ( linklist& slist )
{
	link* scurrent = slist.first;
	while ( scurrent )
	{
		link* newlink = new link;      // �������� ������
		newlink->data = scurrent->data;             // ���������� ������
		newlink->index = scurrent->index;
		newlink->next = first;         // ���������� �������� first
		first = newlink;               // first ������ ��������� �� ����� �������

		scurrent = scurrent->next;
	}
}

///////////////////////////////////////////////////////////
void linklist::invertlist ( )
{
	int arr[100];
	link* current = first;
	int i = 0, n;
	while ( current )
	{
		arr[i++] = current->data;
		current = current->next;	
	}
	n = i;
	
	first = NULL;
	link* newlink;
	for (int i = 0; i < n; i++)
	{
		newlink = new link;      // �������� ������
		newlink->data = arr[i];             // ���������� ������
		newlink->index = i;
		newlink->next = first;         // ���������� �������� first
		first = newlink;               // first ������ ��������� �� ����� �������
	}
}

///////////////////////////////////////////////////////////
int linklist::countlist ( )
{
	int n = 0;
	link* current = first;           // �������� � ������� ��������
	while( current )                 // ���� ���� ������
	{
		n++;
		current = current->next;       // ��������� � ���������� ��������
	}
	return n;
}
///////////////////////////////////////////////////////////
void linklist::nulllist ()
{
	first = NULL;
}

///////////////////////////////////////////////////////////
int main ( )
{
	linklist li;       // ������� ����������-������
	linklist list1;
	linklist list2;
	linklist list3;
	linklist list4;
	int a[10];
//	int b[10];

	for (int i = 0; i < 10; i++)
		a[i] = i * 10;
  
/*
	for (int i = 0; i < 10; i++)
	{
		li.additem( a[i], i );
		li.showfirstitem();
	}
	cout << endl;
*/
	list1.copyfromarray( a, 10 );

//	cout << "Last item ";
//	li.showlastitem();

	cout << endl;
/*	 
	li.additem ( 25 ); // ��������� ���� ��������� �����
	li.additem ( 36 );
	li.additem ( 49 );
	li.additem ( 64 );
*/

/*
	cout << "Number of elements: " << li.countlist() << endl;

	li.copytoarray(b);
*/
	cout << "list1" << endl;
	list1.display ( );    // ���������� ������

/*
	list1.invertlist();

	cout << "list1" << endl;
	list1.display ( );
*/

	list2 = list1;
	cout << "list2" << endl;
	list2.display ( );

	list3.copytolist2(list1);
	cout << "list3" << endl;
	list3.display ( );

	list4 = list1.copytolist();
	cout << "list4" << endl;
	list4.display ( );

	linklist list5(list1);
	cout << "list5" << endl;
	list5.display ( );

	list1.nulllist();

	cout << "list1" << endl;
	list1.display ( );
	cout << "list2" << endl;
	list2.display ( );
	cout << "list3" << endl;
	list3.display ( );
	cout << "list4" << endl;
	list4.display ( );
	cout << "list5" << endl;
	list5.display ( );

	return 0;
}


