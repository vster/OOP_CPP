//circarea.cpp
//������ � ����������� ������������� ����
#include <iostream>          //��� cout � �.�.
using namespace std;

int main()
{
	float rad;                 		// ���������� ������������� ����
	const float PI =3.14159F;  		// ������������ ���������
	
	cout << "Enter circle radius: "; // ������
	cin >> rad;                		// ��������� �������
	float area = PI *rad *rad; 		// ���������� ������� �����
	cout <<"Circle area equals " << area << endl; // ����� ���������� �� �����
	return 0;
}


