#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>
// #include <functional>
#include <numeric> 
using namespace std;

int arr1[] = { 11, 22, 33, 44, 55, 66, 77, 88 };
int arr2[] = { 22, 33, 44 };
int arr3[8];

// function
void dub ( int x)
{
	cout << 2 * x << " ";
}

// predicate
bool pred(int x)
{
	return ( x == 11 );
}

int main()
{
	int j;
	vector<int> v1(arr1, arr1+8);
	vector<int> v2(arr2, arr2+3);

	// v1.push_back(100);
	// v2.push_back(200);	
	
	for(j=0; j<v1.size(); j++)
		cout << v1[j] << ' ';     
	cout << endl;

	for(j=0; j<v2.size(); j++)
		cout << v2[j] << ' ';     
	cout << endl;

	vector<int>::iterator it1;

	it1 = search (v1.begin(), v1.end(), v2.begin(), v2.end());

	cout << it1-v1.begin()<< " " << *it1 << endl;

	// int i = it1-v1.begin();
	// cout << i << '\t' << v1[i] << endl;

/*	if ( equal(v1.begin(), v1.end(), v2.begin()) )
		cout << "\nVectors are equal.\n";
	else
		cout << "\nVectors are different.\n";


/*	// vector<int>::iterator it1;
	// vector<int>::iterator it2;

	pair<vector<int>::iterator,vector<int>::iterator> pair1;

	pair1 = mismatch (v1.begin(), v1.end(), v2.begin());
	
	cout << "First mismatching elements: " << *pair1.first;
	cout << " and " << *pair1.second << '\n';


	//int i = it1-v1.begin();
	//cout << i << '\t' << v1[i] << endl;

/*	int n = 0;
	// n = count_if(v1.begin(), v1.end(), pred);
	n = count(v1.begin(), v1.end(), 44);

	cout << "\nResult: " << n << endl;

/*	it1 = adjacent_find(v1.begin(), v1.end());

	// it1 = find_if(v1.begin(), v1.end(), pred);
	// it1 = find(v1.begin(), v1.end(), 33);

	int i = it1-v1.begin();
	cout << i << '\t' << v1[i] << endl;
	// cout << i << '\t' << *it1 << endl;

	//for_each(v1.begin(), v1.end(), dub);
*/	
	return 0;
}