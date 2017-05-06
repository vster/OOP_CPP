// static.cpp
// ������������� ����������� ��������� ����������
#include <iostream>
using namespace std;

float getavg(float);         // �������� �������

int main()
{
	float data=1, avg;
	
	while( data != 0.0f )
	{
		cout << "Enter number: ";
		cin >> data;
		avg = getavg(data);
		cout << "Average value: " << avg << endl;
	}
	return 0;
}
//--------------------------------------------------------
// ������� getavg()
// ������� ������� �������������� ���� ��������� ��������
float getavg(float newdata)
{
	static float total = 0;    	// ������������� �����������
	static int count = 0;      	// ���������� ��� ������ ������
	
	count++;                   	// ���������� ��������
	total += newdata;          	// ���������� ������ �������� � �����
	return total / count;       // ������� ������ �������� ��������
}


