//circarea.cpp
//������ � ����������� ������������� ����
#include <iostream>          //��� cout � �.�.
using namespace std;

float circarea(float radius);

int main()
{
	float rad;                 			// ���������� ������������� ����
	
	cout << "Enter circle radius: ";	// ������
	cin >> rad;                			// ��������� �������
	float area = circarea( rad );  		// ���������� ������� �����
	cout << "Circle area equals " << area << endl; // ����� ���������� �� �����
	return 0;
}
//------------------------------------------------------
float circarea(float r)
{
	const float PI = 3.14159F; 	
	return (PI * r * r);
}
