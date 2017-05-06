#include <iostream>
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

class book : private publication
{
private:
	int pages;
public:
    void getdata ( )
    {
        publication::getdata ( );
        cout << "  Enter number of pages: "; 
		cin >> pages;
    }
	void putdata ( ) const
	{
        publication::putdata ( );
		cout << "\n  Number of pages: " << pages;
	}
};

class tape : private publication
{
private:
	float duration;
public:
	void getdata ( )
	{
        publication::getdata ( );
        cout << "  Enter duration: "; 
		cin >> duration;
    }
	void putdata ( ) const
	{
        publication::putdata ( );
		cout << "\n  Duration: " << duration;
	}
};

int main()
{
	book b1, b2;
	tape t1, t2;

	cout << endl;
	cout << "\n Info input about 1st book";
	b1.getdata ( );

	cout << endl;
	cout << "\n Info input about 2st book";
	b2.getdata ( );

	cout << endl;
	cout << "\n Info input about 1st tape";
	t1.getdata ( );

	cout << endl;
	cout << "\n Info input about 2st tape";
	t2.getdata ( );


	cout << "\nInfo about 1st book";
	b1.putdata ( );

	cout << "\nInfo about 2st book";
	b2.putdata ( );

	cout << "\nInfo about 1st tape";
	t1.putdata ( );

	cout << "\nInfo about 2st tape";
	t2.putdata ( );

	return 0;
}

