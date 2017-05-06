#include <iostream>
#include <iomanip>
using namespace std;

const int MAXSIZE = 10;
const int NUMARRAYS = 10;

int main ( )
{
	int*ap[10];

	for ( int j = 0; j < NUMARRAYS; j++)
		*(ap+j) = new int [MAXSIZE];


	for (int j = 0; j < NUMARRAYS; j++)
		for (int k = 0; k < MAXSIZE; k++)
			*(*(ap+j)+k) = (j*10+k)*10;
		
	cout << endl;
	for (int j = 0; j < NUMARRAYS; j++)
	{
		for (int k = 0; k < MAXSIZE; k++)
			cout << setw(4) << *(*(ap+j)+k) << " ";
		cout << endl;
	}

	return 0;

}
