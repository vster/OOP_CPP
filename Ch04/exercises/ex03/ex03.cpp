#include <iostream>
using namespace std;

struct Distance               // длина в английской системе
{
	int feet;
	float inches;
};

struct Volume
{
	Distance length;
	Distance width;
	Distance height;
};

int main()
{
	Volume v1 = { { 2, 3 }, { 4, 6}, {7, 2} };

	float l = v1.length.feet + v1.length.inches / 12;
	float w = v1.width.feet + v1.width.inches / 12;
	float h = v1.height.feet + v1.height.inches / 12;

	float v = l * w * h;

	cout << "Volume is " << v << " cubic foots." << endl;

	return 0;
}
