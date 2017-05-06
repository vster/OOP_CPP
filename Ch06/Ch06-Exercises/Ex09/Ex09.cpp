#include <iostream>
using namespace std;

class fraction
{
	private:
		int c;
		int z;
	public:
		fraction()
			{}
		void getfraction()
		{
			char dummychar;
			cin >> c >> dummychar >> z;
		}
		void putfraction() const
		{
			cout << c << "/" << z;
		}
		void addfraction (fraction f1, fraction f2)
		{ 
			c = f1.c * f2.z + f2.c * f1.z;
			z = f1.z * f2.z;
		} 
		void subfraction (fraction f1, fraction f2)
		{
			c = f1.c * f2.z - f2.c * f1.z;
			z = f1.z * f2.z;
		}
};

int main()
{
	fraction f1, f2, f3;
	char ch;

	do
	{
		cout << "Enter first fraction: "; f1.getfraction();
		cout << "Enter second fraction: "; f2.getfraction();

		f3.addfraction(f1, f2);

		cout << "Sum of f1 and f2 is "; f3.putfraction(); 
		cout << endl;
		
		f3.subfraction(f1, f2);

		cout << "Substr of f1 and f2 is "; f3.putfraction();
		cout << endl;

		cout << "Continue (y/n)? "; cin >> ch;
	} while (ch != 'n');

	return 0;
}