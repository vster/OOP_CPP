// englen.cpp
// наследование в программе перевода английских мер длины
#include <iostream>
using namespace std;
enum posneg { pos, neg };
///////////////////////////////////////////////////////////
class Distance // класс для английских мер длины
{
  protected:   // заметьте, что private использовать нельзя
    int feet;
    float inches;
  public:
    // конструктор без параметров
    Distance ( ) : feet ( 0 ), inches ( 0.0 )
      { }
    // конструктор с двумя параметрами
    Distance ( int ft, float in ) : feet ( ft ), inches ( in )
      { }
    // получение значений от пользователя
    void getdist ( )
      {
        cout << "\nEnter feet: "; cin >> feet;
        cout << "Enter inches: "; cin >> inches;
      }
    // вывод значений на экран
    void showdist ( )
      { cout << feet << "\'" << inches << '\"'; }
};
///////////////////////////////////////////////////////////
class DistSign : public Distance // добавление знака к длине
{
  private:
    posneg sign;                 // значение может быть pos или neg
  public:
    // конструктор без параметров
    DistSign ( ) : Distance ( )
      { sign = pos; }
    // конструктор с двумя или тремя параметрами
    DistSign ( int ft, float in, posneg sg = pos ) :
      Distance ( ft, in )      // вызов конструктора базового класса
      { sign = sg; }           // начальная установка знака
    void getdist ( )           // ввод пользователем длины
      {
        Distance::getdist ( ); // вызов функции getdist из базового класса
        char ch;               // запрос знака
        cout << "Enter sign (+ or -): "; cin >> ch;
        sign = ( ch == '+' ) ? pos : neg;
      }
    void showdist ( )   // вывод расстояния
      {
        // вывод всей информации, включая знак
        cout << ( ( sign == pos ) ? "(+)" : "(-)" );
        Distance::showdist ( );	  
	  }
};
///////////////////////////////////////////////////////////
int main ( )
{
  DistSign alpha;                   // используем конструктор по умолчанию
  alpha.getdist ( );                // получаем данные от пользователя

  DistSign beta ( 11, 6.25 );       // конструктор с двумя аргументами

  DistSign gamma ( 100, 5.5, neg ); // конструктор с тремя аргументами

  // выводим данные для всех переменных
  cout << "\nA = "; alpha.showdist ( );
  cout << "\nB = "; beta.showdist ( );
  cout << "\nC = "; gamma.showdist ( );
  cout << endl;
  return 0;
}


