// sqrt.cpp
// ������������� ������������ ������� sqrt()
#include <iostream>      //��� cout � �.�.
#include <cmath>         //��� sqrt()
using namespace std;

int main()
{
	double number,answer;  //��������� ���� double ��� ������� sqrt()
	
	cout << "Enter number: ";
	cin >> number;         // ���� �����
	answer = sqrt(number); // ���������� �����
	cout << "Square root is "
	<< answer << endl;     // ����� ����������
	return 0;
}


