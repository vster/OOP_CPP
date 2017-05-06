#include <fstream>      // для файловых потоков
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
/*
class person            // класс person
  {
  protected:
    char name[80];      // имя человека
	char otch[80];
	char family[80];
    int number;            // его номер
  public:
    void getData()      // получить данные о человеке
      {
      cout << "\n  Enter name: "; cin >> name;
	  cout << "  Enter otchestvo: "; cin >> otch;
	  cout << "  Enter family: "; cin >> family;
      cout << "  Enter number: "; cin >> number;
      }
    void showData()     // вывод данных о человеке
      {
      cout << "\n  Name: " << name;
   	  cout << "\n  Otchestvo: " << otch;
	  cout << "\n  Family: " << family;
	  cout << "\n  Number: " << number;
      }
  };
*/
int main()
{
    const int MAX = 80;
	char ans;
	char buffer[MAX];
	string name;      
	string otch;
	string family;
    unsigned long number;            // его номер
	ofstream outfile("fdata.txt");
	
	do                    // данные от пользователя – в файл
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
	}
	while (ans == 'y');
	outfile.close();
	cout << endl;

	ifstream infile("fdata.txt");
	while ( !infile.eof() )
	{
		infile.getline(buffer, MAX);
		cout << buffer << endl;
	}
	return 0;
}






