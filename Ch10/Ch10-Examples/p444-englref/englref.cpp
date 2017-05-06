// englref.cpp
// разыменование указателя, возвращаемого оператором new
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
int main ( )
{
  Distance& dist = *( new Distance ); // создаем объект типа Distance
  dist.getdist ( );                   // доступ к членам класса осуществляем через оператор "."
  dist.showdist ( );
  cout << endl;

  return 0;
}


