#include <iostream>
#include <ctime>
#include <algorithm>
#include <list>
// #include <vector>
// #include <functional>
#include <numeric> 
using namespace std;

int arr1[] = { 11, 22, 33, 44, 55, 66, 77, 88 };
int arr2[] = { 22, 33, 44 };
// int arr2[] = { 11, 17, 19, 21, 23, 25, 27, 29 };
int arr3[8];

// predicate
bool pred(int x)
{
	return ( (x%11) == 0 );
}


// operator
void op( int x )
{
	cout << (x * 2) << " ";
}

int trans( int x, int y )
{
	return ( (x + y)/2  );
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

	list<int>::iterator iter1; 
	list<int>::iterator iter2;

	for(j=0; j<8; j++)
		list1.push_back( arr1[j] );

	for(j=0; j<3; j++)
		list2.push_back( arr2[j] );

	for(iter1 = list1.begin(); iter1 != list1.end(); iter1++)
		cout << *iter1 << ' ';          //вывести список
	cout << endl;

	for(iter2 = list2.begin(); iter2 != list2.end(); iter2++)
		cout << *iter2 << ' ';          //вывести список
	cout << endl;

	iter1 = search( list1.begin(), list1.end(), list2.begin(), list2.end());
	cout << *iter1 << endl;


/*	pair<list<int>::iterator,list<int>::iterator> pair1;
	
	pair1 = mismatch (list1.begin(), list1.end(), list2.begin());
	cout << "First mismatching elements: " << *pair1.first;
	cout << " and " << *pair1.second << '\n';
	

/*
	if ( equal(list1.begin(), list1.end(), list2.begin()) )
		cout << "OK" << endl;
	else
		cout << ":(" << endl;
	

/*	pair<int[],int[]> pair1;
	// pair<list<int>::iterator,list<int>::iterator> pair1;
	
	pair1 = mismatch (arr1[0], arr1[7], arr2[0]);
	// pair1 = mismatch (list1.begin(), list1.end(), list2.begin());
	cout << "First mismatching elements: " << *pair1.first;
	cout << " and " << *pair1.second << '\n';
	

/*
	int n = 0;
	n = count(list1.begin(), list1.end(), 22);

	cout << n << endl;

/*	int data = 15;
	for(iter2 = list2.begin(); iter2 != list2.end(); iter2++)
		*iter2 = data += 3;

	for(iter1 = list1.begin(); iter1 != list1.end(); iter1++)
		cout << *iter1 << ' ';          //вывести список
	cout << endl;
	for(iter2 = list2.begin(); iter2 != list2.end(); iter2++)
		cout << *iter2 << ' ';          //вывести список
	cout << endl;
	
	
	iter1 = adjacent_find (list1.begin(), list1.end());

	cout << *iter1 << endl;
	//cout << (iter1-list1.begin()) << endl;

/*	iter1 = find( list1.begin(), list1.end(), 44);
	
	cout << *iter1 << endl;

	// for_each(list1.begin(), list1.end(), op);
*/

	return 0;
}

