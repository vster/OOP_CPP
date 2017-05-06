#include <iostream>
using namespace std;

class angle
{
	private:
		int grad;
		float min;
		char dir;
	public:
		angle()
			{}
		angle(int g, float m, char d) : grad(g), min(m), dir(d)
			{}
		void getangle()
		{ cin >> grad >> min >> dir; }
		void putangle() const
		{ cout << grad << "\xF8" << min << "\'" << dir; }
};

class ship
{
	private:
		unsigned int num;
		angle langitude;
		angle width;
		static unsigned int count;
	public:
		ship()
			{ count++; num = count;}
		void getship()
		{
			cout << "Enter coords of ship number " << num << endl;
			cout << "Langitude: "; langitude.getangle();
			cout << "    Width: "; width.getangle();
		}
		void putship() const
		{
			cout << "Coords of ship number " << num << " is "; 
			langitude.putangle();
			cout << ", ";
			width.putangle();
			cout << endl;
		}
};

unsigned int ship::count = 0;

int main()
{
	ship s1, s2, s3;

	s1.getship();
	s2.getship();
	s3.getship();

	s1.putship();
	s2.putship();
	s3.putship();

	return 0;
}



