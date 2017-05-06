#include <iostream>
using namespace std;

struct date
{
	int day;
	int month;
	int year;
};

enum etype 
{
	laborer, secretary, manager, 
	accounant, executive, researcher 
};

struct employee
{
	int id;
	float salary;
	etype postion;
	date accdate;
};


int main()
{
	employee emp[3];
	int i;
	char ch, dummychar;

	for( i = 0; i < 3; i++)
	{
		cout << "Enter info for employee " << i + 1 << endl;
		cout << "Id: "; 
		cin >> emp[i].id;
		
		cout << "Salary: "; 
		cin >> emp[i].salary;
		
		cout << "First letter of position" << endl
			<< "(laborer, secretary, manager, accounant, executive, researcher): ";
		cin >> ch;
		switch (ch)
		{
			case 'l': emp[i].postion = laborer; break;
			case 's': emp[i].postion = secretary; break;
			case 'm': emp[i].postion = manager; break;
			case 'a': emp[i].postion = accounant; break;
			case 'e': emp[i].postion = executive; break;
			case 'r': emp[i].postion = researcher; break;
		}
		
		cout << "Acceptance date in format dd/mm/yyyy: ";
		cin >> emp[i].accdate.day >> dummychar 
			>> emp[i].accdate.month >> dummychar
			>> emp[i].accdate.year;
		cout << endl;
	}

	for( i = 0; i < 3; i++)
	{
		cout << "Info about employee " << i + 1 << endl;
		cout << "         Id: " << emp[i].id << endl; 
		cout << "     Salary: " << emp[i].salary << endl;
		cout << "   Position: ";
		switch (emp[i].postion)
		{
			case laborer: cout << "laborer"; break;
			case secretary: cout << "secretary"; break;
			case manager: cout << "manager"; break;
			case accounant: cout << "accounant"; break;
			case executive: cout << "executive"; break;
			case researcher: cout << "researcher"; break;
		}
		cout << endl;
		cout << "Accept date: " 
			<< emp[i].accdate.day << "/"
			<< emp[i].accdate.month << "/"
			<< emp[i].accdate.year << endl;
		cout << endl;
	}


	return 0;	
}