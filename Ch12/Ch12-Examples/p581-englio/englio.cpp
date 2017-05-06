// englio.cpp
// Перегружаемые операции << и >> 
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance                      // класс английских расстояний
  {
  private:
    int feet;
    float inches;
  public:
    Distance() :feet(0),inches(0.0) // конструктор (0 арг.)
      {  }
                                    // конструктор (2 аргумента)
    Distance(int ft, float in) : feet(ft), inches(in)
      {  }
    friend istream& operator >> (istream& s, Distance& d);
    friend ostream& operator << (ostream& s, Distance& d);
  };
//---------------------------------------------------------
istream& operator >> (istream& s, Distance& d) //получить
                               // значение от пользователя
  {
  cout << "\nEnter feet: ";  s >> d.feet;  // используется
  cout << "Enter inches: ";  s >> d.inches; // перегруженный
  return s;                                  // оператор >>
  }
//---------------------------------------------------------
ostream& operator << (ostream& s, Distance& d)       // вывести
  {                                         // расстояние
  s << d.feet << "\'-" << d.inches << '\"'; // используется
  return s;                                 // перегруженный <<
  }
///////////////////////////////////////////////////////////
int main()
  {
  Distance dist1, dist2;     //Определение переменных
  Distance dist3(11, 6.25);  // определение, инициализация dist3
  cout << "\nEnter two values of distance:";
  cin >> dist1 >> dist2;     // Получить значения от пользователя
                             // вывод расстояний
  cout << "\ndist1 = " << dist1 << "\ndist2 = " << dist2;
  cout << "\ndist3 = " << dist3 << endl;
  return 0;
  }


