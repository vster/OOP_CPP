#include <iostream>
#include <algorithm>
#include <vector>
// #include <list>
using namespace std;

int main()
{
	vector<int> v;
	vector<int>::iterator iter1;
	vector<int>::reverse_iterator iter2;

	for (int i = 0; i < 10 ; i++)
		v.push_back(i*2 + 2);

	cout << "Before reverse:\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	for (int i = 0; i < v.size()/2; i++ )
		swap(v[i], v[v.size()-1-i]);

/*	
	iter1 = v.end();
	iter2 = v.rbegin();
	++iter2;

	while ( true )
	{
		swap(*iter1, *iter2);
		++iter1;
		//if (iter1 == iter2 )
			// break;
		++iter2;
	}
*/
	cout << "After reverse:\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;


/*	
	list<int> theList;
	list<int>::iterator iter1;
	list<int>::iterator iter2;

	for (int i = 2; i < 18; i += 2)
		theList.push_back(i);
	
	cout << "Before reverse:\n";
	for (iter1 = theList.begin(); iter1 != theList.end(); iter1++)
		cout << *iter1 << " ";
	cout << endl;
	
	iter1 = theList.begin();
	iter2 = theList.end();
	--iter2;

	while (iter1 != iter2)
	{
		swap (*iter1, *iter2);
		++iter1;
		// --iter2;
		if (iter1 == iter2 )
			break;
		--iter2;
	}

	cout << "After reverse:\n";
	for (iter1 = theList.begin(); iter1 != theList.end(); iter1++)
		cout << *iter1 << " ";
	cout << endl;
*/
	return 0;
}