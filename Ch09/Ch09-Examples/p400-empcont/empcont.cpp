// empcont.cpp
// 
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class student
{
  private:
    string school;
    string degree;
  public:
    void getedu ( )
      {
        cout << "  Enter name of high school: ";
        cin >> school;
        cout << "  Enter education degree\n";
        cout << "  (the incomplete highest, bachelor, master, candidate of science): ";
        cin >> degree;
      }
    void putedu ( ) const
      {
		  cout << "\n  High school: " << school;
        cout << "\n  Degree: " << degree;
      }
};
///////////////////////////////////////////////////////////
class employee
{
  private:
    string name;
    unsigned long number;
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
class manager
{
  private:
    string title;
    double dues;
    employee emp;
    student stu;
  public:
    void getdata ( )
      {
        emp.getdata ( );
        cout << "  Enter title: "; cin >> title;
        cout << "  Enter dues to golf-club: "; cin >> dues;
        stu.getedu ( );
      }
    void putdata ( ) const
      {
        emp.putdata ( );
        cout << "\n  Title: " << title;
        cout << "\n  Dues to golf-club: " << dues;
        stu.putedu ( );
      }
};
///////////////////////////////////////////////////////////
class scientist
{
  private:
    int pubs;
    employee emp;
    student stu;
  public:
    void getdata ( )
      {
        emp.getdata ( );
        cout << "  Enter amount of publications: "; cin >> pubs;
        stu.getedu ( );
      }
    void putdata ( ) const
      {
        emp.putdata ( );
        cout << "\n  Amount of publications: " << pubs;;
        stu.putedu ( );
      }
};
///////////////////////////////////////////////////////////
class laborer
{
  private:
    employee emp;
  public:
    void getdata ( )
      { emp.getdata ( ); }
    void putdata ( ) const
      { emp.putdata ( ); }
};
///////////////////////////////////////////////////////////
int main ( )
{
  manager m1;
  scientist s1, s2;
  laborer l1;

  // введем информацию о нескольких сотрудниках
  cout << endl;
  cout << "\nInfo input about 1st manager";
  m1.getdata ( );

  cout << "\nInfo input about 1st scientist";
  s1.getdata ( );

  cout << "\nInfo input about 2nd scientist";
  s2.getdata ( );

  cout << "\nInfo input about 1st laborer";
  l1.getdata ( );

  // выведем полученную информацию на экран
  cout << "\nInfo about 1st manager";
  m1.putdata ( );

  cout << "\nInfo about 1st scientist";
  s1.putdata ( );

  cout << "\nInfo about 2nd scientist";
  s2.putdata ( );

  cout << "\nInfo about 1st laborer";
  l1.putdata ( );

  cout << endl;
  return 0;
}


