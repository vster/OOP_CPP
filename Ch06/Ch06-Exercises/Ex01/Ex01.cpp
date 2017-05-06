#include <iostream>
using namespace std;

class Int
{
	private:
		int i;
	public:
		Int() 
			{ i = 0; }
		Int( int  ii )
			{ i  = ii; }
		void showInt()
			{ cout << i; }
		void addInt (Int i1, Int i2)
			{ i = i1.i + i2.i; } 
};

int main()
{
	Int Int1(5);
	Int Int2(7);
	Int Int3;

	Int3.addInt( Int1, Int2 );

	cout << "\nInt3 = "; Int3.showInt();
	cout << endl;

	return 0;
}


	