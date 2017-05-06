#include <iostream>
#include <deque>
using namespace std;

int arr1[] = { 11, 22, 33, 44, 55, 66, 77, 88 };

int main()
{
   int j;
	deque<int> deq1;

	for(j=0; j<8; j++)
		deq1.push_back ( arr1[j] );

   for(j=0; j<deq1.size(); j++)
      cout << deq1[j] << ' ';   // вывести элементы
   cout << endl;

   return 0;
}