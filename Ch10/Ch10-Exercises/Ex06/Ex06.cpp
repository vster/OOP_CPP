#include <iostream>
using namespace std;

const int LEN = 80;
int main ( )
{
	int compstr(char*,char*);
	char str1[LEN];
	char str2[LEN];
	char ch;

	do
	{
		cout << "Enter string 1: ";
		cin >> str1;
		cout << "Enter string 2: ";
		cin >> str2;

		cout << endl;

		cout << str1;
		
		switch (compstr(str1,str2))
		{
			case -1:	cout << " less than "; break;
			case 0:		cout << " equal "; break;
			case 1:		cout << " more than "; break;
		}
		cout << str2 << endl;

		cout << "Continue (y/n)? ";
		cin >> ch;
	} while (ch != 'n');
	
	return 0;
}

int compstr(char*s1,char*s2)
{
	char *pch1 = s1;
	char *pch2 = s2;
	
	while (*pch1 || *pch2)
	{
		if (*pch1 > *pch2)
			return 1;
		else 
		if (*pch1 < *pch2)
			return -1;
		pch1++;
		pch2++;
	}
	return 0;
}


