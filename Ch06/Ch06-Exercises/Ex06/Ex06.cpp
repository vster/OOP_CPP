#include <iostream>
#include <iomanip>
using namespace std;

enum etype 
{
	laborer, secretary, manager, 
	accounant, executive, researcher 
};

class date
{
	private:
		int day;
		int month;
		int year;
	public:
		date()
		{}
		void getdate()
		{
			char dummychar;			
			cin >> day >> dummychar >> month >> dummychar >> year;
		}
		void showdate() const
		{
			cout << setfill('0') << setw(2) << day << "/" 
				 << setw(2) << month << "/" << year; 
		}
};


class employee
{
	private:
		int id;
		float salary;
		etype position;
		date accdate;
	public:
		employee()
		{}
		void getemploy()
		{
			char ch;
			cout << "\nEnter info for employee" << endl;
			cout << "Id: "; cin >> id;
			cout << "Salary: "; cin >> salary;
			cout << "First letter of position: " << endl
			<< "(laborer, secretary, manager, accounant, executive, researcher): ";
			cin >> ch;
			switch (ch)
			{
				case 'l': position = laborer; break;
				case 's': position = secretary; break;
				case 'm': position = manager; break;
				case 'a': position = accounant; break;
				case 'e': position = executive; break;
				case 'r': position = researcher; break;
			}
			cout << "Enter date in format dd/mm/yyyy: ";
			accdate.getdate();
		}
		void putemploy() const
		{
			cout << "\nInfo about employee " << endl;
			cout << "         Id: " << id << endl; 
			cout << "     Salary: " << salary << endl;
			cout << "   Position: ";
			switch (position)
			{
				case laborer: cout << "laborer"; break;
				case secretary: cout << "secretary"; break;
				case manager: cout << "manager"; break;
				case accounant: cout << "accounant"; break;
				case executive: cout << "executive"; break;
				case researcher: cout << "researcher"; break;
			}
			cout << endl;
			cout << "Accept date: "; accdate.showdate();
			cout << endl;
		}
};

int main()
{
	employee emp1, emp2, emp3;

	emp1.getemploy();
	emp2.getemploy();
	emp3.getemploy();

	emp1.putemploy();
	emp2.putemploy();
	emp3.putemploy();

	return 0;
}

