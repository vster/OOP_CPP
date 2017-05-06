#include <iostream>
using namespace std;

void calcout(void);

int main()
{
	for (int i = 0; i < 10; i++)
		calcout();

	return 0;
}

void calcout(void)
{
	static int count = 1;
	cout << "Calling number " << count << endl; 
	count++;
}
