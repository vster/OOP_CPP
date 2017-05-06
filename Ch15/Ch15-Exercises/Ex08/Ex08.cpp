#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
   {
   // int beginRange, endRange, beginPlace;
   int arr[] = { 11, 13, 15, 17, 19, 21, 23, 25, 27, 29 };
   vector<int> v1(arr, arr+10);  // инициализированный вектор
   
   
   int first1 = 2;
   int last1 = 5;
   int first2 = 0;
   
		
   vector<int>::iterator begin = v1.begin();
	vector<int>::iterator end = v1.end();

	int length = end - begin;

	if ((first2<last1)&(first2>=first1))
		cout << "\nOverlay range\n";
	
	copy (begin+first1, begin+last1, begin+first2);
   
	for (vector<int>::iterator it = begin; it != end; it++)
		cout << *it << " ";

	cout << endl;
 
   
   return 0;
   }
