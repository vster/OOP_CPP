#include <iostream>
#include <iomanip>
using namespace std;
const int LEN = 80;

class publication
{
private:
	char title [ LEN ];
	float price;
public:
	void getdata ( )
      {
        cout << "\n  Enter title: ";		
		cin >> title;
        cout << "  Enter price: ";		
		cin >> price;
      }
    void putdata ( ) const
      {
        cout << "\n  Title: " << title;
        cout << "\n  Price: " << price;
      }
};

class date
{
	private:
		int day;
		int month;
		int year;
	public:
		date()
		{}
		void getdate()
		{
			char dummychar;			
			cout << "  Enter date in format dd/mm/yyyy: ";
			cin >> day >> dummychar >> month >> dummychar >> year;
		}
		void showdate() const
		{
			cout << setfill('0') << setw(2) << day << "/" 
				 << setw(2) << month << "/" << year; 
		}
};

class publication2 : private publication, private date
{
private:
	date pdate;
public:
	void getdata ( )
      {
		publication::getdata ( );
		pdate.getdate();
      }
    void putdata ( ) const
      {
		publication::putdata ( ); 
		cout << "\n  Date: ";
		pdate.showdate();
      }
};

class book : private publication2
{
private:
	int pages;
public:
    void getdata ( )
    {
        publication2::getdata ( );
        cout << "  Enter number of pages: "; 
		cin >> pages;
    }
	void putdata ( ) const
	{
        publication2::putdata ( );
		cout << "\n  Number of pages: " << pages;
	}
};

class tape : private publication2
{
private:
	float duration;
public:
	void getdata ( )
	{
        publication2::getdata ( );
        cout << "  Enter duration: "; 
		cin >> duration;
    }
	void putdata ( ) const
	{
        publication2::putdata ( );
		cout << "\n  Duration: " << duration;
	}
};

int main()
{
	book b1;
	tape t1;

	cout << endl;
	cout << "\n Info input about 1st book";
	b1.getdata ( );


	cout << endl;
	cout << "\n Info input about 1st tape";
	t1.getdata ( );

	
	cout << "\nInfo about 1st book";
	b1.putdata ( );

	cout << "\nInfo about 1st tape";
	t1.putdata ( );


	return 0;
}

