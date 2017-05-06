#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 10;

int main ( )
{
	int a0[SIZE],a1[SIZE],a2[SIZE],a3[SIZE],a4[SIZE],
		a5[SIZE],a6[SIZE],a7[SIZE],a8[SIZE],a9[SIZE];
	int*ap[10];

	ap[0] = a0;
	ap[1] = a1;
	ap[2] = a2;
	ap[3] = a3;
	ap[4] = a4;
	ap[5] = a5;
	ap[6] = a6;
	ap[7] = a7;
	ap[8] = a8;
	ap[9] = a9;

	for (int j = 0; j < SIZE; j++)
		for (int k = 0; k < SIZE; k++)
			*(*(ap+j)+k) = (j*10+k)*10;
		
	cout << endl;
	for (int j = 0; j < SIZE; j++)
	{
		for (int k = 0; k < SIZE; k++)
			cout << setw(4) << *(*(ap+j)+k) << " ";
		cout << endl;
	}

	return 0;

}
