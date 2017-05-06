#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
	int arr[5];

	for (int i = 0; i < 5; i++ )
		arr[i] = i*2 + 2;

	for (int i = 0; i < 5; i++ )
		cout << arr[i] << " ";
	cout << endl;

/*	
	int arr1[5];

	for (int i = 0; i < 5; i++ )
		arr1[i] = i*2 + 1;
*/	
	
	set<int, less<int> > setNum;
	set<int, less<int> >::iterator iter;

	for (int i = 0; i < 5; i++ )
		setNum.insert(i*2 + 1);
	
	for (iter = setNum.begin(); iter != setNum.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	
	vector<int> v(10);
	
	merge(arr, arr+5, setNum.begin(), setNum.end(), v.begin());

	for ( int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	return 0;

}