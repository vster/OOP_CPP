// frengl.cpp
// Дружественная перегружаемая операция +
// Дружественная перегружаемая операция *
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance                //Класс английских расстояний
  {
  private:
    int feet;
    float inches;
  public:
    Distance()                //конструктор без аргументов
      { feet = 0; inches = 0.0; }
    Distance( float fltfeet ) //конструктор (1 арг.)
      {    //Переводит float в Distance
      feet = static_cast<int>(fltfeet);    //feet – целая часть
      inches = 12*(fltfeet-feet); //слева - дюймы
      }
    Distance(int ft, float in)    //конструктор (2 арг.)
      { feet = ft; inches = in; }
    void showdist()              //Вывести длину
      { cout << feet << "\'-" << inches << '\"';}
    friend Distance operator + (Distance, Distance); //дружественный
    friend float operator * (Distance, Distance); //дружественный
  };
//---------------------------------------------------------

Distance operator + (Distance d1, Distance d2) // d1 + d2
  {
  int f = d1.feet + d2.feet;       //+ футы
  float i = d1.inches + d2.inches; //+ дюймы
  if(i >= 12.0)                    //если больше 12 дюймов,
    { i -= 12.0; f++;  }           //уменьшить на 12 дюймов,
                                   //прибавить 1 фут
  return Distance(f,i);            //Новая длина с суммой
  }
//---------------------------------------------------------
float operator * (Distance d1, Distance d2) // d1 * d2
  {
	  float fltfeet1 = d1.feet + d1.inches/12;
	  float fltfeet2 = d2.feet + d2.inches/12;
	  float feetsqrd = fltfeet1 * fltfeet2;
	  
	  return feetsqrd;            // Произведение 
  }
//---------------------------------------------------------
int main()
  {
  Distance d1 = 2.5;         //конструктор переводит
  Distance d2 = 1.25;        //float-feet в Distance
  float sqd;
  cout << "\nd1 = "; d1.showdist(); 
  cout << "\nd2 = "; d2.showdist();

  sqd = d1 * d2;            //distance * distance: OK
  cout << "\nsqd = " << sqd << endl;
   return 0;
  }
