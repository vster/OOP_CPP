#include <iostream>
#include <string>
using namespace std;

class employee
{
	private:
		string name;
		long id;
	public:
		employee()
		{}
		void getdata()
		{
			cout << "\nEnter name of employee: "; 
			cin >> name;
			cout << "Enter id of employee: ";
			cin >> id;
		}
		void putdata() const
		{
			cout << "\n  Name: " << name;
			cout << "\nNumber: " << id << endl;
		}
};

int main()
{
	employee emparr[100];
	char ch;

	int n = 0;
	do 
	{
		cout << "\nEnter data about employee with number " << n+1;
		emparr[n++].getdata();
		cout << "Continue (y/n)? "; cin >> ch;
	} while (ch != 'n');

	for (int i = 0; i < n; i++)
	{
		cout << "\nNumber of employee " << i+1 << endl;
		emparr[i].putdata();
	}
	
	return 0;
}
