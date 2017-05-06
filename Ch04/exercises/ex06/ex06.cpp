#include <iostream>
using namespace std;

enum etype 
{
	laborer, secretary, manager, 
	accounant, executive, researcher 
};

int main()
{
	etype e1;
	char ch; 

	cout << "Enter first letter of position" << endl
		<< "(laborer, secretary, manager, accounant, executive, researcher): ";
	cin >> ch;
	switch (ch)
	{
		case 'l': e1 = laborer; break;
		case 's': e1 = secretary; break;
		case 'm': e1 = manager; break;
		case 'a': e1 = accounant; break;
		case 'e': e1 = executive; break;
		case 'r': e1 = researcher; break;
	}
	
	cout << "Full name of position: ";
	switch (e1)
	{
		case laborer: cout << "laborer"; break;
		case secretary: cout << "secretary"; break;
		case manager: cout << "manager"; break;
		case accounant: cout << "accounant"; break;
		case executive: cout << "executive"; break;
		case researcher: cout << "researcher"; break;
	}
	cout << endl;

	return 0;
}