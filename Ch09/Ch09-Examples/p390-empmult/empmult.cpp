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
//Теперь мы рассмотрим эти классы более детально в листинге EMPMULT.
// empmult.cpp
// множественное наследование
#include <iostream>
using namespace std;
const int LEN = 80;       // максимальная длина имени
///////////////////////////////////////////////////////////
class student             // сведения об образовании
{
  private:
    char school[ LEN ];   // название учебного заведения
    char degree[ LEN ];   // уровень образования
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
class employee            // некий сотрудник
{
  private:
    char name[ LEN ];     // имя сотрудника
    unsigned long number; // номер сотрудника
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
class manager : private employee, private student // менеджер
{
  private:
    char title[ LEN ];    // должность сотрудника
    double dues;          // сумма взносов в гольф-клуб
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
class scientist : private employee, private student // ученый
{
  private:
    int pubs;             // количество публикаций
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
class laborer : public employee // рабочий
{
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


