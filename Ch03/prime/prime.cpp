// prime.cpp
// ���������� ����� if ��� ����������� ������� �����
#include <iostream>
using namespace std;
#include <process.h>         //��� exit()

int main()
{
	unsigned long n,j;
	
	cout << "Enter number: ";
	cin >> n;                  			// ���� ������������ �����
	for(j = 2; j <= n/2; j++)			// ������� �� ����� �����,
		if(n%j == 0)               		// ������� � 2; ���� �������
		{                          		//�������, �� ����� �� �������
			cout << "Number is not simple; divided on " << j << endl;
			exit(0);					// ����� �� ���������
		}
	cout << "Number is simple\n";
	return 0;
}


