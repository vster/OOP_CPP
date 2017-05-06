#include <iostream>
using namespace std;

class employee
{
	private:
		int num;
		int id;
		float salary;
		static unsigned int count;
	public:
		employee()
		 { count++; num = count; }
		void get_emp()
		{
			count++;
			cout << "Enter id and salary of employee number " 
				 << num << ": "; 
			cin >> id >> salary;
		}
		void display_emp() const
		{
			cout << "Employee number " << num
				<< " has id " << id 
				<< " and salary " << salary 
				<< " dollars" << endl;
		}
};

unsigned int employee::count = 0;

int main()
{
	employee e1;
	employee e2;
	employee e3;

	e1.get_emp();
	e2.get_emp();
	e3.get_emp();

	cout << endl; 

	e1.display_emp();
	e2.display_emp();
	e3.display_emp();

	return 0;
}
