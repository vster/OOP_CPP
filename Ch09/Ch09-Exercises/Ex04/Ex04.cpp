#include <iostream>
using namespace std;
const int LEN = 80;

enum dtype {CD, DVD};

class publication
{
private:
	char title [ LEN ];
	float price;
public:
	void getdata ( )
      {
        cout << "\n  Enter name: ";		
		cin >> title;
        cout << "  Enter price: ";		
		cin >> price;
      }
    void putdata ( ) const
      {
        cout << "\n  Name: " << title;
        cout << "\n  Price: " << price;
      }
};


class sales
{
private:
	float ArrSales[3];
public:
	void getdata()
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "  Enter sales for mounth " << i+1 << " : ";
			cin >> ArrSales[i];
		}
	}
	void putdata ( ) const
	{
		for (int i = 0; i < 3; i++ )
			cout << "\n  Sales for mounth " << i+1 
				 << " is " << ArrSales[i];
	}
};

class book : public publication, public sales
{
private:
	int pages;
public:
    void getdata ( )
    {
        publication::getdata ( );
		cout << "  Enter number of pages: "; 
		cin >> pages;
		sales::getdata();
	}
	void putdata ( ) const
	{
        publication::putdata ( );
		cout << "\n  Number of pages: " << pages;
		sales::putdata();
	}
};

class tape : public publication, public sales
{
private:
	float duration;
public:
	void getdata ( )
	{
        publication::getdata ( );
        cout << "  Enter duration: "; 
		cin >> duration;
		sales::getdata(); 
	}
	void putdata ( ) const
	{
        publication::putdata ( );
		cout << "\n  Duration: " << duration;
		sales::putdata();		
	}
};

class disk : public publication, public sales
{
private:
	dtype type;
public:
	void getdata ( )
	{
		char ch;
		publication::getdata ( );
		cout << "  Enter type (c/d): ";
		cin >> ch;
		switch (ch)
		{
			case 'c': { type = CD; break; }
			case 'd': { type = DVD; break; }
		}
		sales::getdata();
	}
	void putdata ( ) const
	{
        publication::putdata ( );
		cout << "\n  Type: ";
		switch (type)
		{
			case CD: { cout << "CD"; break; }
			case DVD: { cout << "DVD"; break; }

		}
		sales::putdata();		
	}
};


int main()
{
	book b1;
	disk d1;

	cout << endl;
	cout << "\n Info input about 1st book";
	b1.getdata ( );

	cout << endl;
	cout << "\n Info input about 1st disk";
	d1.getdata ( );

	cout << "\nInfo about 1st book";
	b1.putdata ( );

	cout << "\nInfo about 1st disk";
	d1.putdata ( );

	return 0;
}