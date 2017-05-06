#include <iostream>
using namespace std;

struct sterling
{
	int pounds;
	int shillings;
	int pence;
};

int main()
{
	sterling s1;
	double decpounds, decfrac;

	cout << "Enter sum in decimal pounds: ";
	cin >> decpounds;

	s1.pounds = static_cast<int>(decpounds);
	decfrac = decpounds - s1.pounds;
	s1.shillings = static_cast<int> (decfrac * 20);
	s1.pence = static_cast<int> ((decfrac * 20 - s1.shillings) * 12);

	cout << "Equal sum in old record: J" << s1.pounds 
		<< "." << s1.shillings << "." << s1.pence << endl;

	return 0;
}

