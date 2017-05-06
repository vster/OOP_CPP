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

// comp
bool int_comp( int n1, int n2)
{
	return ( n1 > n2 ) ? true : false;
}

int main()
{
	int j;
	vector<int> v1(8);
	vector<int> v2(8);
	vector<int> v3(8);
	
	vector<int>::iterator iter1;
	vector<int>::iterator iter2;

	/* initialize random seed: */
	srand (time(NULL));
	
	generate(v1.begin(), v1.end(), gen);
	generate(v2.begin(), v2.end(), gen);

	for(j=0; j<v1.size(); j++)
		cout << v1[j] << ' ';     
	cout << endl;
	for(j=0; j<v2.size(); j++)
		cout << v2[j] << ' ';     
	cout << endl<< endl;

	adjacent_difference(v1.begin(), v1.end(), v3.begin());

	// partial_sum(v1.begin(), v1.end(), v3.begin());

	for(j=0; j<v3.size(); j++)
		cout << v3[j] << ' ';     
	cout << endl<< endl;

/*	int sum = 0;

	sum = inner_product(v1.begin(), v1.end(), v2.begin(), sum);

	cout << sum << endl;

/*	int sum = 0;

	sum = accumulate(v1.begin(), v1.end(), sum);

	cout << sum << endl;

/*	iter1 = max_element( v1.begin(), v1.end() );
	cout << iter1-v1.begin() << " " << *iter1 << endl;

	iter2 = min_element( v2.begin(), v2.end() );
	cout << iter2-v2.begin() << " " << *iter2 << endl;

/*	int maxi = v1[0];
	for (int j = 1; j<v1.size(); j++)
	{
		maxi = max( maxi, v1[j] );
	}
	cout << maxi << endl;



/*	make_heap(v1.begin(), v1.end());

	for(j=0; j<v1.size(); j++)
		cout << v1[j] << ' ';     
	cout << endl;

	sort_heap(v1.begin(), v1.end());

	for(j=0; j<v1.size(); j++)
		cout << v1[j] << ' ';     
	cout << endl;


/*	sort (v1.begin(), v1.end());
	sort (v2.begin(), v2.end());

	merge (v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin() );

	for(j=0; j<v3.size(); j++)
		cout << v3[j] << ' ';     
	cout << endl;


/*	// generate(v3.begin(), v3.end(), gen);
	
	partial_sort (v1.begin(), v1.end()-3, v1.end());
	// stable_sort (v1.begin(), v1.end(), int_comp );
	// stable_sort (v1.begin(), v1.end());
	// sort (v1.begin(), v1.end(), int_comp );
	// sort (v1.begin(), v1.end());

	for(j=0; j<v1.size(); j++)
		cout << v1[j] << ' ';     
	cout << endl;
*/
	return 0;
}