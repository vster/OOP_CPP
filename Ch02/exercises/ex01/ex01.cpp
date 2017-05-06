//fahren.cpp
//применение cin и \n
#include <iostream>
using namespace std;

int main()
{
	float volg;                 
  
	cout << "Enter volume in gallons: ";
	cin >> volg;
	float volf =  volg / 7.481;
	cout << "Volume in cubic foots is " << volf << '\n ';
	return 0;
}
