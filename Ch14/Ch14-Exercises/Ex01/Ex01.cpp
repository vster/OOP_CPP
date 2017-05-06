#include <iostream>
using namespace std;


template <class atype>
atype avg(atype *array, long size)
{
	atype sum = 0;
	for (long i = 0; i < size; i++)
		sum += array[i];
	
	return  ((atype)sum/size);
}



int main()
{

	int intArray[] = {1,3,5,7,9,13};
	long longArray[] = {1,3,5,7,9,13};
	double doubleArray[] = {1.0,3.0,5.0,7.0,9.0,13.0};
	char charArray[] = {1,3,5,7,9,13};
	
	cout << "\navg(intArray) = " << avg(intArray, 6);
	cout << "\navg(longArray) = " << avg(longArray, 6);
	cout << "\navg(doubleArray) = " << avg(doubleArray, 6);
	cout << "\navg(charArray) = " << avg(charArray, 6);	
	
	return 0;
}