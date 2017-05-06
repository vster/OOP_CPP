// employ2.cpp
// несколько уровней наследования
#include <iostream>
using namespace std;
const int LEN = 80;
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
class manager : public employee // менеджер
{
  private:
    char title[ LEN ];          // должность, например вице-президент
    double dues;                // сумма взносов в гольф-клуб
  public:
    void getdata ( )
      {
        employee::getdata ( );
        cout << "  Enter title: "; cin >> title;
        cout << "  Enter dues to golf-club: "; cin >> dues;
      }
    void putdata ( ) const
      {
        employee::putdata ( );
        cout << "\n  Title: " << title;
        cout << "\n  Dues to golf-club: " << dues;
      }
};
///////////////////////////////////////////////////////////
class scientist : public employee // ученый
{
  private:
    int pubs;                   // количество публикаций
  public:
    void getdata ( )
      {
        employee::getdata ( );
        cout << "  Enter amount of publications: "; cin >> pubs;
      }
    void putdata ( ) const
      {
        employee::putdata ( );
        cout << "\n  Amount of publications: " << pubs;
      }
};
///////////////////////////////////////////////////////////
class laborer : public employee // рабочий
{
};
///////////////////////////////////////////////////////////
class foreman : public laborer // бригадир
{
  private:
    float quotas;               // норма выработки
  public:
    void getdata ( )
      {
        laborer::getdata ( );
        cout << "  Enter quotas: "; cin >> quotas;
      }
    void putdata ( ) const
      {
        laborer::putdata ( );
        cout << "\n  Quotas: " << quotas;
      }
};
///////////////////////////////////////////////////////////
int main ( )
{
  laborer l1;
  foreman f1;

  // введем информацию о нескольких сотрудниках
  cout << endl;
  cout << "\nInfo input about 1st laborer";
  l1.getdata ( );
  cout << "\nInfo input abpout 2nd laborer";
  f1.getdata ( );

  // выведем полученную информацию на экран
  cout << endl;
  cout << "\nInfo abaout 1st laborer";
  l1.putdata ( );
  cout << "\nInfo about 1st foreman";
  f1.putdata ( );

  cout << endl;
  return 0;
}


