#include <iostream>
#include <algorithm>            //для sort()
using namespace std;

float arr[] = { 1.1, -2.2, 3.3, -4.4, 5.5, -6.6, 7.7, 8.8 };

int main()
{
	sort(arr, arr+8);
	
	for ( int j = 0; j<8l; j++)
		cout << arr[j] << " ";
	cout << endl;
	
	 return 0;
}

