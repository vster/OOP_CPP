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
