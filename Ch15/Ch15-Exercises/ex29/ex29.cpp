#include <iostream>
#include <ctime>
#include <algorithm>
#include <list>
#include <numeric> 
using namespace std;

int arr1[] = { 11, 22, 33, 44, 55, 66, 77, 88 };
//int arr2[] = { 22, 33, 44 };
int arr2[] = { 15, 17, 19, 21, 23, 25, 27, 29 };
int arr3[8];

// predicate
bool pred(int x)
{
	return ( (x%2) == 0 );
}


// operator
void op( int x )
{
	cout << (x * 2) << " ";
}

int op1( int x  )
{
	return ( x * 2  );
}



int trans( int x, int y )
{
	return ( (x + y)  );
}

// gen
int gen( )
{
	// static int k=0;
	// return ( (k++)*10 );
	return ( rand()%100 );
}

// comp
bool int_comp( int n1, int n2)
{
	return ( n1 > n2 ) ? true : false;
}
int main()
{
	int j;
	list<int> list1;
	list<int> list2;
	list<int> list3(8);

	list<int>::iterator iter1; 
	list<int>::iterator iter2;
	list<int>::iterator iter3;

	for(j=0; j<8; j++)
		list1.push_back ( arr1[j] );
	

	int init = 0;
	// init = accumulate(list1.begin(), list1.end(), init);
	init = accumulate(list1.begin(), list1.end(), init, trans);

	for(iter1 = list1.begin(); iter1 != list1.end(); iter1++)
		cout << *iter1 << ' ';          //вывести список
	cout << endl;

	cout << init << endl;


	return 0;
}