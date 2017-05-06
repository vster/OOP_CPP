#include <iostream>
#include <ctime>
#include <algorithm>
// #include <functional>
#include <numeric> 
using namespace std;

int arr1[] = { 11, 22, 33, 44, 55, 66, 77, 88 };
int arr2[] = { 11, 13, 15, 17, 19, 21, 23, 25 };
int arr3[8];

// comp
bool int_comp( int n1, int n2)
{
	return ( n1 < n2 ) ? true : false;
}

// random generator function:
int myrandom (int i) 
{ 
	return std::rand()%i;
}

// op
int prod(int s, int x)
{
	return ( s * x);
}

int main()
{
	int* ptr;
	int j;
	
	/* initialize random seed: */
	srand (time(NULL));

	for (j = 0; j < 8; j++)
		cout << arr1[j] << ' ';
	cout << endl;

	random_shuffle(arr1, arr1+8);

	for (j = 0; j < 8; j++)
		cout << arr1[j] << ' ';
	cout << endl;	
	
	adjacent_difference (arr1, arr1+8, arr3);
	// partial_sum(arr1, arr1+8, arr3);

	for (j = 0; j < 8; j++)
		cout << arr3[j] << ' ';
	cout << endl;


/*	int sum = 0;
	sum = inner_product(arr1, arr1+2, arr2, sum);

	cout << "\nSum: " << sum << endl;	


/*	int prd = 1;

	prd = accumulate(arr2, arr2+5, prd, prod);

	cout << "\nProd: " << prd << endl;
	

/*	random_shuffle(arr2, arr2+8);

	for (j = 0; j < 8; j++)
		cout << arr2[j] << ' ';
	cout << endl;

	ptr = max_element( arr2, arr2+8 );

	int i = ptr-arr2;
	cout << "\nResult : " << i << " " << arr2[i] << endl;
		
/*	make_heap(arr1, arr1+8);

	for (j = 0; j < 8; j++)
		cout << arr1[j] << ' ';
	cout << endl;
	
	sort_heap(arr1, arr1+8);

	// push_heap(arr1, arr1+6);
	
	for (j = 0; j < 8; j++)
		cout << arr1[j] << ' ';
	cout << endl;

/*	
	for (j = 0; j < 8; j++)
		cout << arr2[j] << ' ';
	cout << endl;

	merge(arr1, arr1+8, arr2, arr2+8, arr3, int_comp);

	for (j = 0; j < 16; j++)
		cout << arr3[j] << ' ';
	cout << endl;

/*
	random_shuffle(arr2, arr2+8);

	for (j = 0; j < 8; j++)
		cout << arr2[j] << ' ';
	cout << endl;


	// nth_element(arr2, arr2+3, arr2+8);
	// partial_sort_copy(arr2, arr2+5, arr3, arr3+8);
	// partial_sort(arr2, arr2+5, arr2+8);
	// stable_sort(arr2, arr2+8, int_comp);
	// sort(arr2, arr2+8, int_comp);

	for (j = 0; j < 8; j++)
		cout << arr2[j] << ' ';
	cout << endl;
*/
	return 0;
}
