// factor2.cpp
// ������� ���������� ����� � ������� ��������
#include <iostream>
using namespace std;

unsigned long factfunc(unsigned long); // ��������

int main()
{
	int n;                               // �����, �������� �������������
	unsigned long fact;                  // ��������� ����� �����
	
	cout << "Enter integer number: ";
	cin >> n;
	fact = factfunc(n);
	cout << "Factorial of number " << n << " is " << fact << endl;
	return 0;
}
//--------------------------------------------------------
// ������� factfunc()
// ���������� ������������ ��������� �����
unsigned long factfunc(unsigned long n)
{
	if(n > 1)
		return n * factfunc(n-1);          // ����� ����� ����
	else
		return 1;
}


