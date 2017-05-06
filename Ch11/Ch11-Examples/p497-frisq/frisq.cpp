// frisq.cpp
// ƒружественна€ дл€ Distance функци€ square()
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance                        // ласс английских длин
  {
  private:
    int feet;
    float inches;
  public:
    Distance() : feet(0), inches(0.0) //конструктор (без
                                      //аргументов) 
      {  }
                                   //конструктор (2 аргумента)
    Distance(int ft, float in) : feet(ft), inches(in)  
      {  }
    void showdist()                //вывести рассто€ние
      { cout << feet << "\'-" << inches << '\"'; }
    friend float square(Distance); //дружественна€ ф-ци€
  };
//---------------------------------------------------------
float square(Distance d)                //вернуть квадрат
  {                                     //рассто€ни€
  float fltfeet = d.feet + d.inches/12; //конвертировать 
                                        //в тип float
  float feetsqrd = fltfeet * fltfeet;   //вычислить квадрат
  return feetsqrd;                      //вернуть квадратные футы
  }

 ///////////////////////////////////////////////////////////
int main()
  {
  Distance dist(3, 6.0);             //конструктор с двум€ 
                                     //аргументами (3'-6")
  float sqft;

  sqft = square(dist);               //вернуть квадрат dist
                         //¬ывести рассто€ние и его квадрат
  cout << "\nDistance = "; dist.showdist();
  cout << "\nLength Square = " << sqft << " square feet\n";
  return 0;
  }
  

