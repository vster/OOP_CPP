#include <iostream>

using namespace std;

int main()
{
	float a, b, result;
	char op, ch;

	do {
		cout << "Enter first oparand, operation and second operand: ";
		cin >> a >> op >> b;
		switch (op)
			{
			case '+': result = a + b; break;
			case '-': result = a - b; break;
			case '*': result = a * b; break;
			case '/': result = a / b; break;
			default: result = 0;
			}
		cout << "Result is: " << result << endl;
		cout << "One more operation? (y/n) ";
		cin >> ch;
	} while  (ch != 'n');
	return 0;
}
