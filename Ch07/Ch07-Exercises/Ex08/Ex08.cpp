#include <iostream>
#include <cstring>
using namespace std;

const int LIMIT = 100;

class safearay
{
private:
	int elim[LIMIT];
public:
	safearay()
	{}
	void putel(int j, int e)
	{ 
		if ((j >=0) && (j <= LIMIT-1))
		{ 
			elim[j] = e;
		}
		else
			cout << "\nIndex " << j << " out of range.\n";
	}
	int getel(int j)
	{
		if ((j >=0) && (j <= LIMIT-1))
			return elim[j];
		else
			cout << "\nIndex " << j << " out of range.\n";
	}
};

int main()
{
	safearay sa1;

	int temp = 123;
	
	sa1.putel(7, temp);
	sa1.putel(120, temp);

	temp = 0;
	temp = sa1.getel(7);
	temp = sa1.getel(130);

	return 0;
}