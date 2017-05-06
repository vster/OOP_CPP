#include <iostream>
using namespace std;
const int LEN = 80;       // ������������ ����� �����
enum Period {hour, week, mounth};
///////////////////////////////////////////////////////////
class employee            // ����� ���������
{
  private:
    char name[ LEN ];     // ��� ����������
    unsigned long number; // ����� ����������
  public:
    void getdata ( )
      {
        cout << "\n  Enter name: "; cin >> name;
        cout << "  Enter number: ";     cin >> number;
      }
    void putdata ( ) const
      {
        cout << "\n  Name: " << name;
        cout << "\n  Number: " << number;
      }
};
///////////////////////////////////////////////////////////
class employee2 : public employee
{
private:
	double compensation;
	Period period;
public:
	void getdata ( )
	{
		char ch;
		employee::getdata ( );
		cout << "  Enter value of compensation: "; 
		cin >> compensation;
		cout << "  Enter period (h,w,m): ";
		cin >> ch;
		switch (ch)
		{
			case 'h': { period = hour; break; }
			case 'w': { period = week; break; }
			case 'm': { period = mounth; break; }
		}
	}
	void putdata ( ) const
	{
		employee::putdata ( );
		cout << "\n  Value of compensation: " << compensation;
		cout << "\n  Period: ";
		switch (period)
		{
			case hour: { cout << "hour"; break; }
			case week: { cout << "week"; break; }
			case mounth: { cout << "mounth"; break; }
		}
	}
};
///////////////////////////////////////////////////////////
class manager : public employee2 // ��������
{
  private:
    char title[ LEN ];    // ���������, �������� ����-���������
    double dues;          // ����� ������� � �����-����
  public:
    void getdata ( )
      {
        employee2::getdata ( );
        cout << "  Enter title: "; cin >> title;
        cout << "  Enter sum of dues to golf-club: "; cin >> dues;
      }
    void putdata ( ) const
      {
        employee2::putdata ( );
        cout << "\n  Title: " << title;
        cout << "\n  Sum of dues to golf-club: " << dues;
      }
};
///////////////////////////////////////////////////////////
class scientist : public employee2 // ������
{
  private:
    int pubs;                     // ���������� ����������
  public:
    void getdata ( )
      {
        employee2::getdata ( );
        cout << "  Enter amount of publications: "; cin >> pubs;
      }
    void putdata ( ) const
      {
        employee2::putdata ( );
        cout << "\n  Amount of publications: " << pubs;
      }
};
///////////////////////////////////////////////////////////
class laborer : public employee2   // �������
{
};

int main ( )
{
  manager m1;
  scientist s1;
  laborer l1;

  // ������ ���������� � ���������� �����������
  cout << endl;
  cout << "\nInfo input about 1st manager";
  m1.getdata ( );

  cout << "\nInfo input about 1st scientist";
  s1.getdata ( );

  cout << "\nInfo input about 1st laborer";
  l1.getdata ( );

  // ������� ���������� ���������� �� �����
  cout << "\nInfo about 1st manager";
  m1.putdata ( );

  cout << "\nInfo about 1st scientis";
  s1.putdata ( );

  cout << "\nInfo about 1st laborer";
  l1.putdata ( );

  cout << endl;
  return 0;
}