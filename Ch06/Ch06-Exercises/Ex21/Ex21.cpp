#include <iostream>
using namespace std;

class sterling
{
	private:
		int pounds;
		int shillings;
		int pence;
	public:
		sterling() : pounds(0), shillings(0), pence(0)
			{}
		void get_sterling() 
		{ char dch;	cin >> dch >> pounds >> dch >> shillings >> dch >> pence; }
		void put_sterling() const
		{ cout << "J" << pounds << "." << shillings << "." << pence; }
		void add_sterling( sterling ss1, sterling ss2);
};
	
void sterling::add_sterling( sterling ss1, sterling ss2)
{
	pence = ss1.pence + ss2.pence;
	if (pence > 11)
	{
		shillings++;
		pence -= 12;
	}
	shillings += ss1.shillings + ss2.shillings;
	if (shillings > 19)
	{
		pounds++;
		shillings -= 20;
	}
	pounds += ss1.pounds + ss2.pounds;
}

int main()
{
	sterling s1, s2, s3;

	cout << "Enter sum 1: "; s1.get_sterling();
	cout << "Enter sum 2: "; s2.get_sterling();

	s3.add_sterling(s1, s2);

	cout << "Sum of "; s1.put_sterling();
	cout << " and "; s2.put_sterling();
	cout << " is "; s3.put_sterling();
	
	return 0;
}
