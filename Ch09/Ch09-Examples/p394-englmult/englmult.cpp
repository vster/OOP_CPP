// englmult.cpp
// программа демонстации множественного наследования
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class Type                  // Тип древесины
{
  private:
    string dimensions;
    string grade;
  public:
    // конструктор без параметров
    Type ( ) : dimensions ( "N/A" ), grade ( "N/A" )
      { }
    // конструктор с двумя параметрами
    Type ( string di, string gr ) : dimensions ( di ), grade ( gr )
      { }
    void gettype ( )        // запрос информации у пользователя
      {
        cout << "  Enter nominal sizes (2x4 etc): ";
        cin >> dimensions;
        cout << "  Enter grade (raw, cant etc): ";
        cin >> grade;
      }
    void showtype ( )       // показ информации
      {
        cout << "\n  Sizes: " << dimensions;
        cout << "\n  Grade: " << grade;
      }
};
///////////////////////////////////////////////////////////
class Distance              // английские меры длины
{
  private:
    int feet;
    float inches;
  public:
    // конструктор без параметров
    Distance ( ) : feet ( 0 ), inches ( 0.0 )
      { }
    // конструктор с двумя параметрами
    Distance ( int ft, float in ) : feet ( ft ), inches ( in )
      { }
    void getdist ( )        // запрос информации у пользователя
      {
        cout << "  Enter feet: "; cin >> feet;
        cout << "  Enter inches: "; cin >> inches;
      }
    void showdist ( ) const // показ информации
      {
        cout << feet << "\'-" << inches << '\"';
      }
};
///////////////////////////////////////////////////////////
class Lumber: public Type, public Distance
{
  private:
    int quantity;           // количество
    double price;           // цена за штуку
  public:
    // конструктор без параметров
    Lumber ( ) : Type ( ), Distance ( ), quantity ( 0 ), price ( 0.0 )
      { }
    // конструктор с шестью параметрами
    Lumber ( string di, string gr, // параметры для Type
             int ft, float in,     // параметры для Distance
             int qu, float prc ) : // наши собственные параметры
             Type ( di, gr ),      // вызов конструктора Type
             Distance ( ft, in ),  // вызов конструктора Distance
             quantity ( qu ), price ( prc ) // вызов наших конструкторов
      { }
    void getlumber ( )
      {
        Type::gettype ( );
        Distance::getdist ( );
        cout << "  Enter quantity: "; cin >> quantity;
        cout << "  Enter price: "; cin >> price;
      }
    void showlumber ( ) 
      {
        Type::showtype ( );
        cout << "\n  Length: ";
        Distance::showdist ( );
        cout << "\n  Cost " << quantity << " pcs: " << ( price * quantity ) << " rub";
      }
};
///////////////////////////////////////////////////////////
int main ( )
{
  Lumber siding;            // используем конструктор без параметров

  cout << "\n  Info of casing:\n";
  siding.getlumber ( );     // получаем данные от пользователя

  // используем конструктор с шестью параметрами
  Lumber studs ( "2x4", "const", 8, 0.0, 200, 4.45F );

  // показываем информацию
  cout << "\nCasing"; siding.showlumber ( );
  cout << "\nCant";    studs.showlumber ( );

  cout << endl;
  return 0;
}


