//celsius.cpp
//���������� cin � \n
#include <iostream>
using namespace std;

int main()
{
	int ctemp;                 // ����������� �� �������
  
	cout << "Enter temperature in Celcius: ";
	cin >> ctemp;
	int ftemp = ctemp*9/5 + 32;
	cout << "Temperature in Fahrengeit is " << ftemp << '\n';
	return 0;
}
