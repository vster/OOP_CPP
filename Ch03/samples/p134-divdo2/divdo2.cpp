// divdo2.cpp
// ���������� ��������� continue
#include <iostream>
using namespace std;

int main()
{
	long dividend, divisor;
	char ch;
	do {
		cout << "Enter divedend: "; cin >> dividend;
		cout << "Enter divisor: " ; cin >> divisor;
		if( divisor == 0 )       			// ��� ������� 
			{                        		// ������� �� ����
			cout << "Incorrect divisor!\n"; // ����� ���������
			continue;                           // ������� � ������ �����
			}
		cout << "The individual is " << dividend / divisor;
		cout << ", the rest is " << dividend % divisor;
		cout << "\nOne more?(y/n): ";
		cin >> ch;
		} while( ch != 'n' );
	return 0;
}


