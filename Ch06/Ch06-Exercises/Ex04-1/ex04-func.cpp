#include <iostream>
#include "ex04.h"
using namespace std;

employee::employee()
	{}
void employee::get_emp()
{
	cout << "Enter id and salary of employee: "; 
	cin >> id >> salary;
}
void employee::display_emp() const
{
	cout << "Employee has id " << id 
		<< " and salary " << salary 
		<< " dollars" << endl;
}