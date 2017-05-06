#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib> 
using namespace std;

class time
{
private:
	int hrs;
	int mins;
	int secs;
public:
	time() : hrs(0), mins(), secs()
		{ }
	time(int h, int m, int s) : hrs(h), mins(m), secs(s)
		{ }
	void get_time();
	void put_time() const;
};

void time::get_time()
{
	while ( true )
	{
		cout << "\nEnter hours: ";
		cin.unsetf(ios::skipws);
		cin >> hrs;
		if (hrs < 0 || hrs > 23)
		{
			cout << "Hours must be between 0 and 23!\n";
			cin.clear(ios::failbit);
		}
		if ( cin.good() )
		{
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cin.ignore(10, '\n');
		cout << "Wrong entered hours\n";
	}
	while ( true )
	{
		cout << "Enter minutes: ";
		cin.unsetf(ios::skipws);
		cin >> mins;
		if (mins < 0 || mins > 59)
		{
			cout << "Minutes must be between 0 and 59!\n";
			cin.clear(ios::failbit);
		}
		if ( cin.good() )
		{
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cin.ignore(10, '\n');
		cout << "Wrong entered minutes\n";
	}
	while ( true )
	{
		cout << "Enter seconds: ";
		cin.unsetf(ios::skipws);
		cin >> secs;
		if (secs < 0 || secs > 59)
		{
			cout << "Seconds must be between 0 and 59!\n";
			cin.clear(ios::failbit);
		}
		if ( cin.good() )
		{
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cin.ignore(10, '\n');
		cout << "Wrong entered seconds\n";
	}
}

void time::put_time() const
{
	cout << setw(2) << hrs << ":"
	 << setfill('0') 
	 << setw(2) << mins << ":"
	 << setw(2) << secs;
}

///////////////////////////////////////////////////////////
int main()
{
  time t;
  char ans;
  do
    {
    t.get_time();          // получить его значение
    cout << "\nTime = ";
    t.put_time();         // вывести его
    cout << "\nOnce more (y/n)? ";
    cin >> ans;
    cin.ignore(10,'\n' ); // съесть символы и
                          // разделитель
    } while(ans != 'n');  // цикл до 'n'
  return 0;
}