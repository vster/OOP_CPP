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
	list<int> list3(8);

	list<int>::iterator iter1; 
	list<int>::iterator iter2;
	list<int>::iterator iter3;

	for(j=0; j<8; j++)
		list1.push_back ( arr1[j] );

	generate(list1.begin(), list1.end(), gen);
	list1.sort();

	//list1.clear();

	// reverse (list1.begin(), list1.end());
	// unique(list1.begin(), list1.end());
	// unique_if(list1.begin(), list1.end(), pred);

	for(iter1 = list1.begin(); iter1 != list1.end(); iter1++)
		cout << *iter1 << ' ';          //вывести список
	cout << endl;


/*	generate(list1.begin(), list1.end(), gen);

	for(iter1 = list1.begin(); iter1 != list1.end(); iter1++)
		cout << *iter1 << ' ';          //вывести список
	cout << endl;	
	
	remove_if(list1.begin(), list1.end(), pred);

	// remove (list1.begin(), list1.end(), 33);

	// generate_n(list1.begin(), list1.size(), gen);
	// generate(list1.begin(), list1.end(), gen);

	// fill_n(list1.begin(), list1.size(), 50);

	for(iter1 = list1.begin(); iter1 != list1.end(); iter1++)
		cout << *iter1 << ' ';          //вывести список
	cout << endl;
	
	/*
	// replace_if (list1.begin(), list1.end(), pred, 100);
	// replace (list1.begin(), list1.end(), 33, 100);

	// replace_copy (list1.begin(), list1.end(), list3.begin(), 33, 100);
	replace_copy_if (list1.begin(), list1.end(), list3.begin(), pred, 100);

	for(iter1 = list1.begin(); iter1 != list1.end(); iter1++)
		cout << *iter1 << ' ';          //вывести список
	cout << endl;

	for(iter3 = list3.begin(); iter3 != list3.end(); iter3++)
		cout << *iter3 << ' ';          //вывести список
	cout << endl;

/*	for(j=0; j<8; j++)
		list2.push_back( arr2[j] );

	// transform(list1.begin(), list1.end(), list3.begin(), op1 );
	transform(list1.begin(), list1.end(), list2.begin(), list3.begin(), trans );

	for(iter1 = list1.begin(); iter1 != list1.end(); iter1++)
		cout << *iter1 << ' ';          //вывести список
	cout << endl;

	for(iter2 = list2.begin(); iter2 != list2.end(); iter2++)
		cout << *iter2 << ' ';          //вывести список
	cout << endl;

	for(iter3 = list3.begin(); iter3 != list3.end(); iter3++)
		cout << *iter3 << ' ';          //вывести список
	cout << endl;

/*
	for(j=0; j<8; j++)
		list2.push_back( arr2[j] );

	swap_ranges(list1.begin(), list1.end(), list2.begin());


	for(iter1 = list1.begin(); iter1 != list1.end(); iter1++)
		cout << *iter1 << ' ';          //вывести список
	cout << endl;
	
	for(iter2 = list2.begin(); iter2 != list2.end(); iter2++)
		cout << *iter2 << ' ';          //вывести список
	cout << endl;

/*
	iter1 = list1.begin();
	iter2 = list1.end();
	--iter2;

	// swap(*iter1, *iter2);
	iter_swap(iter1, iter2);

	++iter1;
	--iter2;
	iter_swap(iter1, iter2);


	for(iter1 = list1.begin(); iter1 != list1.end(); iter1++)
		cout << *iter1 << ' ';          //вывести список
	cout << endl;


/*	copy_backward (list1.begin(), list1.end(), list3.end());

	for(iter1 = list1.begin(); iter1 != list1.end(); iter1++)
		cout << *iter1 << ' ';          //вывести список
	cout << endl;

	for(iter3 = list3.begin(); iter3 != list3.end(); iter3++)
		cout << *iter3 << ' ';          //вывести список
	cout << endl;

/*
	for(j=0; j<8; j++)
		list2.push_back( arr2[j] );

	for(iter1 = list1.begin(); iter1 != list1.end(); iter1++)
		cout << *iter1 << ' ';          //вывести список
	cout << endl;

	for(iter2 = list2.begin(); iter2 != list2.end(); iter2++)
		cout << *iter2 << ' ';          //вывести список
	cout << endl;
*/
return 0;
}