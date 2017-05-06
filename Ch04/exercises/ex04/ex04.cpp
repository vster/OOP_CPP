#include <iostream>
using namespace std;

struct employee
{
	int id;
	float salary;
};

int main()
{
	employee emp1, emp2, emp3;

	cout << "Enter id and salary of emp1: "; 
	cin >> emp1.id >> emp1.salary;
	cout << "Enter id and salary of emp2: "; 
	cin >> emp2.id >> emp2.salary;
	cout << "Enter id and salary of emp3: "; 
	cin >> emp3.id >> emp3.salary;

	cout << "Employee 1 has id " << emp1.id 
		<< " and salary " << emp1.salary << " dollars" << endl;
	cout << "Employee 2 has id " << emp2.id 
		<< " and salary " << emp2.salary << " dollars" << endl;
	cout << "Employee 3 has id " << emp3.id 
		<< " and salary " << emp3.salary << " dollars" << endl;

	return 0;
}