#include <fstream> 
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////
class Distance               // длина в английской системе
{
  private:
    int feet;
    float inches;
  public:                    // конструктор без аргументов
    Distance() : feet(0),inches(0.0)
      { }
    // конструктор с двумя аргументами
    Distance(int ft,float in) : feet(ft),inches(in)
      { }
    void getdist()           // ввод длины пользователем
    {
      cout << "\nEnter number of feet: "; cin >> feet;
      cout << "Enter number of inches: "; cin >> inches;
    }
    void showdist()          // вывод длины на экран
      { cout << feet << "\'-" << inches << '\"'; }
    void add_dist( Distance, Distance ); // прототип
};

int main()
{
	char ch;
	Distance dist;
	fstream file;

	file.open("PROJECT.DAT", ios::app | ios::out |
                      ios::in | ios::binary );
	do
	{
		cout << "\nEnter distance:";
		dist.getdist();
		file.write( reinterpret_cast<char*>(&dist), sizeof(dist) );
	    cout << "Continue (y/n)? ";
		cin >> ch;
    }
	while (ch == 'y');
	
	file.seekg(0);
	file.read( reinterpret_cast<char*>(&dist), sizeof(dist) );
	while ( !file.eof() )
	{
		cout << "\nDistance: ";
		dist.showdist();
		file.read( reinterpret_cast<char*>(&dist), sizeof(dist) );
	}
	cout << endl;
	return 0;
}


