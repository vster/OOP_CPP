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
 	fstream iofile;
public:

	void getData()      // получить данные о человеке
	{
  		char ans;
//		iofile.seekg(0, ios::end);
		showposition();
		do
		{  
			cout << "\n  Enter name: "; cin >> name;
			cout << "  Enter otchestvo: "; cin >> otch;
			cout << "  Enter family: "; cin >> family;
			cout << "  Enter number: "; cin >> number;
			iofile << name << ' ' 
				<< otch << ' ' 
				<< family << ' '
				<< number << endl;
			cout << "Continue (y/n)? ";
			cin >> ans;
		} while (ans == 'y');
		showposition();
	}
    void showData()     // вывод данных о человеке
    {
		showposition();
		char buffer[MAX];
		iofile.seekp(0, ios::beg);
		showposition();
		while ( !iofile.eof() )
		{
			iofile.getline(buffer, MAX);
			cout << buffer << endl;
		}	
		showposition();    
	}
	void findPerson( string fs )
	{
		showposition();
		char buffer[MAX];
		string buf;
		iofile.seekg(0, ios::beg);
		iofile.seekp(0, ios::beg);
		showposition();
		while ( !iofile.eof() )
		{
			iofile.getline(buffer, MAX);
			buf = buffer;
			int n = buf.find(fs);
			if ( n >=0 )
				cout << buffer << endl;
		}
		showposition();
	}
	void openfile()
	{
		iofile.open("fdata.txt", ios::app |
					ios::out | ios::in );
	}
	void showposition()
	{
		cout << "\nWriting position = " << iofile.tellg() 
			 << ", reading position = " << iofile.tellp() << endl;
	}	
	void closefile()
	{
		iofile.close();	
	}
};

int main()
{
	person p1;
	string fp;

	p1.openfile();

	p1.getData();

	cout << "\nPersons:\n";
	p1.showData();

	
	cout << "Enter person to find: ";
	cin >> fp;
	p1.findPerson(fp);

	p1.closefile();
	
	return 0;
}