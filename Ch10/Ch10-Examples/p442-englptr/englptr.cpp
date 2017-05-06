// englptr.cpp
// доступ к членам класса через указатель
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance
{
  private:
    int feet;
    float inches;
  public:
    void getdist ( ) // получение информации
      {
        cout << "\nEnter feet: "; cin >> feet;
        cout << "Enter inches: "; cin >> inches;
      }
    void showdist ( ) // вывод информации
      { cout << feet << "\'-" << inches << '\"'; }
};
///////////////////////////////////////////////////////////
int  main ( )
{
  Distance dist;     // определяем объект типа Distance
  dist.getdist ( );  // получаем информацию
  dist.showdist ( ); // выводим на экран

  Distance* distptr;      // определяем переменную-указатель на Distance
  distptr = new Distance; // создаем объект Distance
  distptr->getdist ( );   // получаем для него информацию
  distptr->showdist ( );  // выводим информацию
  cout << endl;

  return 0;
}


