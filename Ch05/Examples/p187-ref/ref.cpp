// ref.cpp
// ���������� ���������� ��������� �������� ����������
#include <iostream>
using namespace std;

int main()
{
	void intfrac(float, float&, float&);      // ��������
	float number, intpart, fracpart;
	do {
		cout << "\nEnter real number:";
		cin >> number;                          // ���� ����� �������������
		intfrac(number, intpart, fracpart);		// ���������� ����� � ������� �����
		cout << "Integer part is " << intpart	// ����� �����������
		<< ", fractional part is " << fracpart << endl;
	} while(number != 0.0f );						//����� �� �����, ���� ������ ����
	return 0;
}

//--------------------------------------------------------
// ������� intfrac()
// ��������� ����� � ������� ����� ������������� �����
void intfrac(float n, float& intp, float& fracp)
{
	long temp = static_cast<long>(n);			// �������������� � ���� long,
	intp = static_cast<float>(temp);			// � ������� �� float
	fracp = n - intp;							// �������� ����� �����
}


