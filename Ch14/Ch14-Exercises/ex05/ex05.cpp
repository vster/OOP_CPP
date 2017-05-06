#include <iostream>
using namespace std;

template<class T>
T amax( T *Array, int size )
{
	T max = 0;
	for (int i = 0; i < size; i++)
		if (Array[i] > max)
			max = Array[i];
	return max;
}

int main()
{

	int intArray[] = {1,3,35,7,9,13,4};
	long longArray[] = {1,3,5,27,9,13,4};
	double doubleArray[] = {51.0,3.0,5.0,7.0,9.0,13.0,4.0};
	char charArray[] = {1,63,5,87,9,13,4};

	cout << "\nmax(intArray) = " << amax(intArray, 7);
	cout << "\nmax(longArray) = " << amax(longArray, 7);
	cout << "\nmax(doubleArray) = " << amax(doubleArray, 7);
	cout << "\nmax(charArray) = " << amax(charArray, 7);	

	return 0;
}
