// strplus.cpp
// ���������� �������� + ��� �����
#include <iostream>
using namespace std;
#include <string.h>   // ��� ������� strcpy, strcat
#include <stdlib.h>   // ��� ������� exit
#include "ex02.h"

///////////////////////////////////////////////////////////
int main ( )
{
	String s1 = "\nMerry Crysmas! "; 	// ���������� ����������� � ����������
	String s2 = "Happy New Year!";   	// ���������� ����������� � ����������
	String s3;                      	// ���������� ����������� ��� ����������

	// ���������� ������
	s1.display ( );
	s2.display ( );
	s3.display ( );

	s1 += s2;

	// s3 = s1 + s2;       // ����������� ������ s3 ��������� �������� ����� s1 � s2

	s1.display ( );     // ���������� ���������
	cout << endl;

	return 0;
}


