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
		class Full { };
		class Empty { };
};
///////////////////////////////////////////////////////////
template <class T>
void Queue<T>::put(T elem)
{	
	if ( qsize >= MAX - 1 )
		throw Full();	
	
	buf[tail++] = elem;
	qsize++;
	if( tail == MAX )
		tail = 0;
	
}
///////////////////////////////////////////////////////////
template <class T >
T Queue<T>::get()
{
	if ( qsize == 0 )
		throw Empty();
	
	T temp = buf[head++];
	if ( head == MAX )
		head = 0;
	qsize--;
	return temp;
}


///////////////////////////////////////////////////////////
int main ( )
{
	Queue<long> q1;
	char ch;
	long num;

	
	do
	{
		try
		{
			ch = NULL;
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
		} // end try
		catch(Queue<long>::Full)
		{
			cout << "\nError: Queue overload\n";
		}
		catch(Queue<long>::Empty)
		{	
			cout << "\nError: Queue empty\n";	
		}
	} while (ch != 'e');
	return 0;
}

