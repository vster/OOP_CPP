#include <iostream>
#include <algorithm>            //для find()
using namespace std;

int arr1[] = { 11, 22, 33, 44, 55, 66, 77, 88 };
int arr2[] = { 11, 13, 15, 17, 19, 21, 23, 25 };
int arr3[8];

// predicate
bool pred(int x)
{
	return ( x == 17 );
}

// operator
int trans( int x , int y)
{
	return ( (x - y) * 2  );
}


// gen
int gen( )
{
	static int k=0;
	return ( (k++)*10 );
}

int main()
{
	int j;
	
	for (j = 0; j < 8; j++)
		cout << arr2[j] << ' ';
	cout << endl;

	stable_partition(arr2, arr2+8, pred);

	//random_shuffle(arr2, arr2+8, rand);
	// rotate_copy (arr2, arr2+3, arr2+5, arr3);
	// rotate (arr2, arr2+3, arr2+5);

	// reverse_copy(arr2, arr2+8, arr3);

	for (j = 0; j < 8; j++)
		cout << arr2[j] << ' ';
	cout << endl;


/*	unique_copy(arr2, arr2+8, arr3, pred);	
	// unique(arr2, arr2+8, pred);

	for (j = 0; j < 8; j++)
		cout << arr3[j] << ' ';
	cout << endl;

	

/*	remove_copy_if (arr1, arr1+8, arr3, pred);	
	// remove_copy (arr1, arr1+8, arr3, 55);
	// remove_if (arr2, arr2+8, pred);
	// remove(arr2, arr2+8, 21);
	// generate_n(arr3, 8, gen );

	for (j = 0; j < 8; j++)
		cout << arr3[j] << ' ';
	cout << endl;

/*
	replace_copy_if(arr2, arr2+8, arr3, isSame, 100 );
	// replace_copy (arr1, arr1+8, arr3, 33, 100);

	for (j = 0; j < 8; j++)
		cout << arr3[j] << ' ';
	cout << endl;


/*	replace_if(arr1, arr1+8, isSame, 20);

	for (j = 0; j < 8; j++)
		cout << arr1[j] << ' ';
	cout << endl;


/*	replace (arr1, arr1+8, 11, 75);

	for (j = 0; j < 8; j++)
		cout << arr1[j] << ' ';
	cout << endl;


/*	for (j = 0; j < 8; j++)
		cout << arr2[j] << ' ';
	cout << endl;
	
	transform(arr1, arr1+8, arr2, arr3, trans);
	
	for (j = 0; j < 8; j++)
		cout << arr3[j] << ' ';
	cout << endl;

/*	swap_ranges(arr,arr+2,arr+6);

	for (j = 0; j < 8; j++)
		cout << arr[j] << ' ';
	cout << endl;

/*
	for (j = 0; j < 4; j++)
		swap(arr[j], arr[7-j]);

	// iter_swap(arr, arr+7);

	for (j = 0; j < 8; j++)
		cout << arr[j] << ' ';
	cout << endl;

/*
	swap(arr[0], arr[7]);

	for (j = 0; j < 8; j++)
		cout << arr[j] << ' ';
	cout << endl;

/*	
	
	copy_backward(arr, arr+8, arr1+8);

	for (j = 0; j < 8; j++)
		cout << arr1[j] << ' ';
	cout << endl;



/*
	copy(arr, arr+8, arr1);

	for (j = 0; j < 8; j++)
		cout << arr1[j] << ' ';
	cout << endl;
*/
	return 0;
}
