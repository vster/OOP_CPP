// ptrobjs.cpp
// массив указателей на объекты
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person // класс человек
{
  private:
    char name [ 40 ];      // имя человека
  public:
    void setName ( )       // установка имени
      {
        cout << "Enter name: ";
        cin >> name;
      }
    void printName ( )     // показ имени
      {
        cout << "\n  Name: " << name;
      }
};
///////////////////////////////////////////////////////////
int main ( )
{
  person* persPtr [ 100 ]; // массив указателей
  int n = 0;               // количество элементов в массиве
  char choice;

  do
  {
    persPtr [ n ] = new person;       // создаем новый объект
    persPtr [ n ]->setName ( );       // вводим имя
    n++;                              // увеличиваем количество
    cout << "Continue (y/n)?"; // спрашиваем, закончен ли ввод
    cin >> choice;
  }
  while ( choice == 'y' );
  for ( int j = 0; j < n; j++ )
  {
    cout << "\nInfo about number " << j + 1;
    persPtr [ j ]->printName ( );
  }
  cout << endl;

  return 0;
}


