//fahren.cpp
//���������� cin � \n
#include <iostream>
using namespace std;

int main()
{
	int ftemp;                 // ����������� �� ����������
  
	cout << "Enter Temperature in Fahrenheit: ";
	cin >> ftemp;
	int ctemp = (ftemp-32)*5 / 9;
	cout << "Temperature in Celcius equals " << ctemp << '\n';
	return 0;
}


