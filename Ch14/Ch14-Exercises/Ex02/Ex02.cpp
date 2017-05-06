#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
template <class T>
class Queue
{
	private:
		enum { MAX = 5 };
		T buf [ MAX ];    
		long head, tail, qsize;           
	public:
		Queue ( ) // конструктор
			{ head = 0; tail = 0; qsize = 0; }
		void put(T elem);	
		T get();

};
///////////////////////////////////////////////////////////
template <class T>
void Queue<T>::put(T elem)
{	
	if ( qsize < MAX - 1 )
	{
		buf[tail++] = elem;
		qsize++;
		if( tail == MAX )
			tail = 0;
	}
	else
	{
		cout << "\nQueue buffer overload.\n";
		exit (1);
	}
}
///////////////////////////////////////////////////////////
template <class T >
T Queue<T>::get()
{
	if ( qsize > 0 )
	{
		T temp = buf[head++];
		if ( head == MAX )
			head = 0;
		qsize--;
		return temp;
	}
	else
		return 0;
}


///////////////////////////////////////////////////////////
int main ( )
{
	Queue<long> q1;
	char ch;
	long num;

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

