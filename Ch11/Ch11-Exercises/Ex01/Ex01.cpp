#include <iostream>
#include <string>
using namespace std;

class publication
{
private:
	char title[80];
	float price;
public:
	virtual void getdata ( )
      {
//        char buf[80];
		cout << "\n  Enter title: ";
		cin >> title;
//		int len  = strlen(buf);
//		title  = new char [len+1];
//		strcpy (title, buf);
        cout << "  Enter price: ";		
		cin >> price;
      }
    virtual void putdata ( ) const
      {
        cout << "\n  Title: " << title;
        cout << "\n  Price: " << price;
      }
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
};

int main()
{
	publication* pubarr[100];
	int n = 0;
	char choice;

	do 	{
		cout << " Book or tape (b/t)? ";
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
		pubarr[j]->putdata();
	cout << endl;
	
	return 0;
}
