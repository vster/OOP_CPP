// badelse.cpp
// неправильное сопоставление else и if во вложенных ветвлениях
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter numbers a, b and c: \n";
	cin >> a >> b >> c;
	if ( a == b )
	{
		if( b == c )
			cout << "a, b, and c are equal\n";
	}
	else
		cout << "a and b are not equal\n";
	return 0;
}


