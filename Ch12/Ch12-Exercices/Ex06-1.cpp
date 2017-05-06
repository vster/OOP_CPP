#include <fstream>      // для файловых потоков
#include <iostream>
#include <string>
using namespace std;

const int MAX = 80;
///////////////////////////////////////////////////////////
class person            // класс person
{
private:
    string name;      // имя человека
	string otch;
	string family;
    int number;            // его номер
public:
 
	void getData()      // получить данные о человеке
	{
  		char ans;
		ofstream outfile("fdata.txt");
		do
		{  
			cout << "\n  Enter name: "; cin >> name;
			cout << "  Enter otchestvo: "; cin >> otch;
			cout << "  Enter family: "; cin >> family;
			cout << "  Enter number: "; cin >> number;
			outfile << name << ' ' 
				<< otch << ' ' 
				<< family << ' '
				<< number << endl;
			cout << "Continue (y/n)? ";
			cin >> ans;
		} while (ans == 'y');
		outfile.close();		
	}
    void showData()     // вывод данных о человеке
    {
	    char buffer[MAX];
		ifstream infile("fdata.txt");
		while ( !infile.eof() )
		{
//			infile.getline(buffer, MAX);
//			cout << buffer << endl;
			infile >> name >> otch >> family >> number;
			cout << name << ' ' 
				<< otch << ' ' 
				<< family << ' '
				<< number << endl;
		}
		infile.close();
    }
	void findPerson( string fs )
	{
	    char buffer[MAX];
		string buf;
		ifstream infile("fdata.txt");
		while ( !infile.eof() )
		{
			infile.getline(buffer, MAX);
			buf = buffer;
			int n = buf.find(fs);
			if ( n >=0 )
				cout << buffer << endl;
		}
		infile.close();
	}
};

int main()
{
	person p1;
	string fp;

	p1.getData();

	cout << "\nPersons:\n";
	p1.showData();

	
	cout << "Enter person to find: ";
	cin >> fp;
	p1.findPerson(fp);

	return 0;
}