#include <iostream>
using namespace std;

int main()
{
	unsigned int numb;
	unsigned long fact;       	// ��� long ��� ����������
	
	do {
		cout << "Enter whole number: ";
		cin >> numb;                  	// ���� �����
		fact = 1;
		for(int j = numb; j > 0; j--)     	// ��������� 1 ��
			fact *= j;                    // numb, numb-1, ..., 2, 1
		cout << "Factorial of number equal " << fact << endl;
		} while (numb != 0);
	return 0;
}
