#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>
// #include <functional>
#include <numeric> 
using namespace std;

int arr1[] = { 11, 22, 33, 44, 55, 66, 77, 88 };
int arr2[] = { 15, 17, 19, 21, 23, 25, 27, 29 };
int arr3[8];

// predicate
bool pred(int x)
{
	return ( (x%11) == 0 );
}


// operator
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

int main()
{
	int j;
	vector<int> v1(arr1, arr1+8);
	vector<int> v2(arr2, arr2+8);
	vector<int> v3(8);

	/* initialize random seed: */
	srand (time(NULL));
	
	for(j=0; j<v1.size(); j++)
		cout << v1[j] << ' ';     
	cout << endl;
	for(j=0; j<v2.size(); j++)
		cout << v2[j] << ' ';     
	cout << endl<< endl;

	random_shuffle(v1.begin(), v1.end());

	// rotate_copy( v1.begin(), v1.begin()+1, v1.begin()+4, v3.begin() );
	// rotate( v1.begin(), v1.begin()+3, v1.begin()+5 );
	// reverse_copy(v1.begin(), v1.end(), v3.begin());
	// reverse(v1.begin(), v1.end());

	// unique_copy(v1.begin(), v1.end(), v3.begin());

	for(j=0; j<v1.size(); j++)
		cout << v1[j] << ' ';     
	cout << endl;

/*	remove_copy_if(v1.begin(), v1.end(), v3.begin(), pred);
	// remove_copy(v1.begin(), v1.end(), v3.begin(), 35);
	// remove_if( v1.begin(), v1.end(), pred);	
	// remove( v1.begin(), v1.end(), 44);
	// generate_n(v3.begin(), 8, gen);
	// generate(v3.begin(), v3.end(), gen);

	for(j=0; j<v3.size(); j++)
		cout << v3[j] << ' ';     
	cout << endl;

/*
	// vector<int>::iterator it1;
	
	fill_n(v3.begin(), 5, 20);
	// fill(v3.begin(), v3.end(), 20);

	// replace_copy_if(v1.begin(), v1.end(), v3.begin(), pred, 10);
	// replace_copy(v1.begin(), v1.end(), v3.begin(), 55, 100);
	// replace(v1.begin(), v1.end(), 33, 100);
	// replace_if(v1.begin(), v1.end(), pred, 10);

	for(j=0; j<v3.size(); j++)
		cout << v3[j] << ' ';     
	cout << endl;

		
/*	transform (v1.begin(), v1.end(), v2.begin(), v3.begin(), trans);
	// transform (v2.begin(), v2.end(), v3.begin(), trans);

	for(j=0; j<v3.size(); j++)
		cout << v3[j] << ' ';     
	cout << endl;
/*
	swap_ranges(v1.begin(), v1.end(), v2.begin());

	for(j=0; j<v1.size(); j++)
		cout << v1[j] << ' ';     
	cout << endl;
	for(j=0; j<v2.size(); j++)
		cout << v2[j] << ' ';     
	cout << endl;

/*
	//for (j = 0; j < v1.size()/2; j++)
	//	swap(v1[j], v1[v1.size()-1-j]);

	// iter_swap(v1.begin(), v1.end()-1);
	// swap(v1[0], v1[7]);
	// copy_backward(v1.begin(), v1.end(), v2.end());
	// copy(v1.begin(), v1.end(), v2.begin());

	for(j=0; j<v1.size(); j++)
		cout << v1[j] << ' ';     
	cout << endl;
*/

	return 0;
}