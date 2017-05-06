#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
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

	return 0;
}