// platters.cpp
// ���������� ��������� switch
#include <iostream>
using namespace std;

int main()
{
	int speed;              // �������� �������� �������������
	cout << "\nEnter number 33,45 or 78: ";
	cin >> speed;           // ���� �������� �������������
	switch(speed)           // ��������, ��������� �� ������ �������� 
		{
		case 33:              // ���� ������������ ���� 33
			cout << "Longplay format\n";
			break;
		case 45:              // ���� ������������ ���� 45
			cout << "Single format\n";
			break;
		case 78:              // ���� ������������ ���� 78
			cout << "Old format\n";
		break;
		}
	return 0;
}


