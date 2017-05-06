#include <iostream>
using namespace std;
#include "ex09.h"

Queue::Queue ( ) // конструктор
	{ head = 0; tail = 0; qsize = 0; }

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