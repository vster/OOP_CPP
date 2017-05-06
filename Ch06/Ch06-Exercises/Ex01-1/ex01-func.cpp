#include <iostream>
#include "ex01.h"
using namespace std;

Int::Int() 
	{ i = 0; }
Int::Int( int  ii )
	{ i  = ii; }
void Int::showInt()
	{ cout << i; }
void Int::addInt (Int i1, Int i2)
	{ i = i1.i + i2.i; } 