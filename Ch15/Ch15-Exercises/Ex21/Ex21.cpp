#include <iostream>
#include <algorithm>            //для find()
// #include <vector>
using namespace std;

int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88 };
int arr1[] = { 33, 44 };


bool isSame(int x)
{
	return ( x == 77);
}

int main()
{
	int* ptr;
	int j;
	
	for (j = 0; j < 8; j++)
		cout << arr[j] << ' ';
	cout << endl;

	ptr = search (arr, arr+8, arr1, arr1+2);

	cout << "\nResult: " << (ptr-arr) << endl;

/*
	if ( equal(arr, arr+4, arr1) )
	{
		cout << "\nResult: OK" << endl;
	}
	else
		cout << "\nFailed\n";

	//cout << "\nResult: " << (ptr-arr) << endl;

/*
	int n = count_if (arr, arr+8, isSame);

	cout << "\nResult: " << n << endl;

/*
	ptr = adjacent_find(arr, arr+8, isSame);

	cout << "\nResult: " << (ptr-arr) << endl;


/*
	ptr = find_if(arr, arr+8, isSame);

	cout << "\nResult: " << (ptr-arr) << endl;
	
/*

	int n = count (arr, arr+8, 55);

	cout << "\nResult: " << n << endl;

/*

	//	ptr = adjacent_find(arr, arr+8);
	
	cout << "\nResult: " << (ptr-arr) << endl;
/*

	for_each(arr, arr+8, sum);

/*
	for (j = 0; j < 8; j++)
		cout << arr[j] << ' ';
	cout << endl;
	
	for_each(arr, arr+8, sum);



/*
	ptr = find(arr, arr+8, 33);   //найти первое вхождение 33
	cout << "First object with value 33 found in position "
		<< (ptr-arr) << endl; 
 */ 
	return 0;
}

