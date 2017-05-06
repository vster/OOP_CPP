#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Queue
{
	private:
		enum { MAX = 5 };
		int buf [ MAX ];    
		int head, tail, qsize;           
	public:
		Queue ( ) // конструктор
			{ head = 0; tail = 0; qsize = 0; }
		void put(int elem);	
		int get();

};
///////////////////////////////////////////////////////////
int main ( )
{
	Queue q1;
	char ch;
	int num;

	do
	{
		cout << "\nQueue: (p)ut, (g)et or (e)xit? ";
		cin >> ch;
		switch (ch)
		{
			case 'p': 
				{
					cout << "Enter number: ";
					cin >> num;
					q1.put(num);
					break;
				}
			case 'g':
				{
					num = q1.get();
					cout << "Current number in head: " << num << endl;
					break;
				}
			default: break;
		}
	} while (ch != 'e');
	return 0;
}

void Queue::put(int elem)
{	
	if ( qsize < MAX - 1 )
	{
		buf[tail++] = elem;
		qsize++;
		if( tail == MAX )
			tail = 0;
	}
	else
		cout << "\nQueue buffer overload.\n";
}

int Queue::get()
{
	if ( qsize > 0 )
	{
		int temp = buf[head++];
		if ( head == MAX )
			head = 0;
		qsize--;
		return temp;
	}
	else
		return 0;
}