// factor.cpp
// ������� ���������� ����� � ������� ����� for
#include <iostream>
using namespace std;

int main()
{
	unsigned int numb;
	unsigned long fact = 1;       	// ��� long ��� ����������
	
	cout << "Enter whole number: ";
	cin >> numb;                  	// ���� �����
	for(int j=numb; j>0; j--)     	// ��������� 1 ��
		fact *= j;                    // numb, numb-1, ..., 2, 1
	cout << "Factorial of number equal " << fact << endl;
	return 0;
}


