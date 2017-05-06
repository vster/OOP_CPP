//constObj.cpp
//constant Distance objects
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////
class Distance               // ����� � ���������� �������
{
	private:
		int feet;
		float inches;
	public:                    // ����������� � ����� �����������
		Distance(int ft, float in) : feet(ft), inches(in)
		{ }
		void getdist()           // ������������� �����
		{
			cout << "\nEnter number of feet: "; cin >> feet;
			cout << "Enter number of inches: "; cin >> inches;
		}
void showdist() const        // ����������� �����
	{ cout << feet << "\'-" << inches << '\"'; }
};
//////////////////////////////////////////////////////////
int main()
{
	const Distance football(300,0);
	//football.getdist();      // ������: ����� getdist() �������������
	cout << " Length of field is ";
	football.showdist();       // ���������
	cout << endl;
	return 0;
}

