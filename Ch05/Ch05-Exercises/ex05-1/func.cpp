#include <iostream>
#include "ex05.h"
using namespace std;

long hms_to_sec(int hh, int mm, int ss)
{
	long ts = hh * 3600 + mm * 60 + ss;
	return ts; 
}