/*
class student
{ };
class employee
{ };
class manager : public employee, private student
{ };
class scientist : private employee, private student
{ };
class laborer : public employee
{ };
*/
//������ �� ���������� ��� ������ ����� �������� � �������� EMPMULT.
// empmult.cpp
// ������������� ������������
#include <iostream>
using namespace std;
const int LEN = 80;       // ������������ ����� �����
///////////////////////////////////////////////////////////
class student             // �������� �� �����������
{
  private:
    char school[ LEN ];   // �������� �������� ���������
    char degree;   // ������� �����������
  public:
    void getedu ( )
      {
        cout << "  Enter name of high school: ";
        cin >> school;
        cout << "  Enter education degree\n";
        cout << "  ( incomplete highest, bachelor, master, candidate of science ): ";
        cin >> degree;
      }
    void putedu ( ) const
      {
        cout << "\n  High school: " << school;
        cout << "\n  Degree: ";
		switch (degree)
		{
		case 'i': cout << "incomplete highest"; break;
		case 'b': cout << "bachelor"; break;
		case 'm': cout << "master"; break;
		case 'c': cout << "candidate of science"; break;
		}
      }
};
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
class manager : private employee, private student // ��������
{
  private:
    char title[ LEN ];    // ��������� ����������
    double dues;          // ����� ������� � �����-����
  public:
    void getdata ( )
      {
        employee::getdata ( );
        cout << "  Enter title: "; cin >> title;
        cout << "  Enter dues to golf-club: "; cin >> dues;
        student::getedu ( );
      }
    void putdata ( ) const
      {
        employee::putdata ( );
        cout << "\n  Title: " << title;
        cout << "\n  Dues to golf-club: " << dues;
        student::putedu ( );
      }
};
///////////////////////////////////////////////////////////
class executive : private manager
{
private:
	double bonus;	// ������� ������
	unsigned long share;	// ���� �����
public:
	void getdata ( )
      {
        manager::getdata ( );
        cout << "  Enter bonus: "; cin >> bonus;
        cout << "  Enter share of actions: "; cin >> share;    
      }
    void putdata ( ) const
      {
        manager::putdata ( );
        cout << "\n  Bonus: " << bonus;
        cout << "\n  Share of actions: " << share;
      }
};

///////////////////////////////////////////////////////////
class scientist : private employee, private student // ������
{
  private:
    int pubs;             // ���������� ����������
  public:
    void getdata ( )
      {
        employee::getdata ( );
        cout << "  Enter amount of publications: "; cin >> pubs;
        student::getedu ( );
      }
    void putdata ( ) const
      {
        employee::putdata ( );
        cout << "\n  Amount of publications: " << pubs;
        student::putedu ( );
      }
};
///////////////////////////////////////////////////////////
class laborer : public employee // �������
{
};
///////////////////////////////////////////////////////////
int main ( )
{
  manager m1;
  executive e1;
  scientist s1;
  laborer l1;

  // ������ ���������� � ���������� �����������
  cout << endl;
  cout << "\nInfo input about 1st manager";
  m1.getdata ( );

  cout << "\nInfo input about 1st executive";
  e1.getdata ( );

  cout << "\nInfo input about 1st scientist";
  s1.getdata ( );

   cout << "\nInfo input about 1st laborer";
  l1.getdata ( );

  // ������� ���������� ���������� �� �����
  cout << "\nInfo about 1st manager";
  m1.putdata ( );

  cout << "\nInfo about 1st executive";
  e1.putdata ( );
  
  cout << "\nInfo about 1st scientist";
  s1.putdata ( );

  cout << "\nInfo about 1st laborer";
  l1.putdata ( );

  cout << endl;
  return 0;
}


