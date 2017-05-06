#include <iostream>
using namespace std;

const int SIZE = 5;

int main ( )
{
	void addarray(float*,float*,float*,int);
	float arr1[SIZE] = {1.0,2.0,3.0,4.0,5.0};
	float arr2[SIZE] = {6.0,6.0,7.0,7.0,8.0};
	float arr3[SIZE];

	addarray(arr1,arr2,arr3,SIZE);
	for (int i = 0; i<SIZE;i++)
		cout << *(arr1+i) << '\t'
		<< *(arr2+i) << '\t'
		<< *(arr3+i) << endl;

	return 0;
}

void addarray(float*fa1,float*fa2,float*fa3,int n)
{
	float*pf1 = fa1;
	float*pf2 = fa2;
	float*pf3 = fa3;

	for (int i = 0; i < n; i++)
		*(pf3+i) = *(pf1+i)+*(pf2+i);
}

