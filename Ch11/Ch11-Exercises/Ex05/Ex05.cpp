#include <iostream>
#include <string>
using namespace std;

class publication
{
private:
	string title;
	float price;
public:
	virtual void getdata ( )
      {
		cout << "\n  Enter title: ";
		cin >> title;
        cout << "  Enter price: ";		
		cin >> price;
      }
    virtual void putdata ( ) const
      {
        cout << "\n  Title: " << title;
        cout << "\n  Price: " << price;
      }
	virtual bool isOversize() = 0;
};

class book : public publication
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
	bool isOversize()
	{
		return (pages > 800) ? true : false;
	}
};

class tape : public publication
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
	bool isOversize()
	{
		return (duration > 90) ? true : false;
	}

};

int main()
{
	publication* pubarr[100];
	int n = 0;
	char choice;

	do 	{
		cout << "\n Book or tape (b/t)? ";
		cin >> choice;
		if ( choice == 'b')
			pubarr[n] = new book;
		else if (choice == 't')
			pubarr[n] = new tape;
		pubarr[n++]->getdata();
		cout << "Continue (y/n)? ";
		cin >> choice;
	} while ( choice == 'y');

	for ( int j = 0; j < n; j++)
	{
		pubarr[j]->putdata();
		if ( pubarr[j]->isOversize() )
			cout << "\n  Oversized!" << endl;
		cout << endl;
	}
	cout << endl;
	
	return 0;
}
