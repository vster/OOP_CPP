// fibo.cpp
// ������������� ����� ��������� � ������� ����� while
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//������� ���� unsigned long
	const unsigned long limit = 4294967295; 
	unsigned long next = 0;      // ������������� ����
	unsigned long last = 1;      // ��������� ����
	float fib;

	while(next < limit / 2 )     // ��������� �� ������ ���� ������� �������
	{
		fib = (float) next / (float) last;
		cout << setw(20) << last << " " 
			 << setw(20) << fib << endl;      // ����� ���������� �����
		long sum = next + last;    // �������� ���� ��������� ������
		next = last;               // ���������� ��������������
		last = sum;                // � ���������� ������
	}
	cout << endl;
	return 0;
}

