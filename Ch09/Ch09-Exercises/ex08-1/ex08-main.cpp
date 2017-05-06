#include <iostream>
using namespace std;
#include <string.h>          // для функций str*
#include "ex08-func.h"

int main()
{
	Pstring2 s1 = "12345678901234567890";
	Pstring2 s2, s3, s4, s5;

	s3 = s2.left (s1, 10);
	s4 = s2.mid (s1, 3, 5);
	s5 = s2.right (s1, 5);

	return 0;
}