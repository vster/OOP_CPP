#include <iostream>
using namespace std;

class employee
{
	private:
		int id;
		float salary;
	public:
		employee()
		{}
		void get_emp()
		{
			cout << "Enter id and salary of employee: "; 
			cin >> id >> salary;
		}
		void display_emp() const
		{
			cout << "Employee has id " << id 
				<< " and salary " << salary 
				<< " dollars" << endl;
		}
};

int main()
{
	employee e1, e2, e3;

	e1.get_emp();
	e2.get_emp();
	e3.get_emp();

	cout << endl; 

	e1.display_emp();
	e2.display_emp();
	e3.display_emp();

	return 0;
}
