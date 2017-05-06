#include <iostream>
#include <iomanip>
using namespace std;

const int MAXSIZE = 10;
const int NUMARRAYS = 10;

class arr
{
private: 
	int*ap[NUMARRAYS];
public:
	arr ( )
	{
		for ( int j = 0; j < NUMARRAYS; j++)
			*(ap+j) = new int [MAXSIZE];
	}
	int& operator[ ] ( int n )
	{
		int k, j;
		k = n / MAXSIZE;
		j = n % MAXSIZE;

		return *(*(ap+j)+k);
	}
};

int main ( )
{
	arr a;
	int i;

	for ( i = 0; i < MAXSIZE*NUMARRAYS; i++)
		a[i] = i * 10;
	
	for ( i = 0; i < MAXSIZE*NUMARRAYS; i++)
		cout << a[i] << " ";

	return 0;

}
