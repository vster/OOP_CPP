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
		{
			cin >> grad >> min >> dir;
		}
		void showangle() const
		{
			cout << grad << "\xF8" << min << "\'" << dir;
		}
};

int main()
{
	angle langitude, width;
	char ch;

	do{
		cout << "Enter coords in format <grad> <min> <dir>" << endl;
		cout << "Langitude: "; langitude.getangle();
		cout << "    Width: "; width.getangle();

		cout << "\nYou enter coords: "; langitude.showangle();
		cout << " and "; width.showangle();
		cout << endl;
		cout << "Continue (y/n)? "; 
		cin >> ch;
	} while (ch != 'n');

	return 0;
}