#include <iostream>
using namespace std;

double power(double, int);
double power(char, char);
double power(int, int);
double power(long, long);
double power(float, float);

int main()
{
	int p;
	double num, ans;
	char n1, p1;
	int n2, p2;
	long n3, p3;
	float n4, p4;

	cout << "Enter double number and int degree: "; 
	cin >> num >> p;
	
	ans = power(num, p);
	cout << "Number " << num << " in degree " << p
			 << " is " << ans << endl;

	cout << "Enter char number and char degree: "; 
	cin >> n1 >> p1;
	
	ans = power(n1, p1);
	cout << "Number " << n1 << " in degree " << p1
			 << " is " << ans << endl;

	cout << "Enter int number and int degree: "; 
	cin >> n2 >> p2;
	
	ans = power(n2, p2);
	cout << "Number " << n2 << " in degree " << p2
			 << " is " << ans << endl;

	cout << "Enter long number and long degree: "; 
	cin >> n3 >> p3;
	
	ans = power(n3, p3);
	cout << "Number " << n3 << " in degree " << p3
			 << " is " << ans << endl;

	cout << "Enter float number and float degree: "; 
	cin >> n4 >> p4;
	
	ans = power(n4, p4);
	cout << "Number " << n4 << " in degree " << p4
			 << " is " << ans << endl;

	return 0;
}

double power(double n, int p)
{
	double result = 1.0;
	
	for ( int i = 0; i < p; i++)
		result *= n;
	return result;
}

double power(char n, char p)
{
	double result = 1.0;
	
	for ( int i = 0; i < p; i++)
		result *= n;
	return result;
}

double power(int n, int p)
{
	double result = 1.0;
	
	for ( int i = 0; i < p; i++)
		result *= n;
	return result;
}

double power(long n, long p)
{
	double result = 1.0;
	
	for ( int i = 0; i < p; i++)
		result *= n;
	return result;
}

double power(float n, float p)
{
	double result = 1.0;
	
	for ( int i = 0; i < p; i++)
		result *= n;
	return result;
}
