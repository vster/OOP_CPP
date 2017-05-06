// where.cpp
// указатель this
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class where
  {
  private:
    char charray[10];  //массив из 10 байтов
  public:
    void reveal()
      { cout << "\nMoi adres ne dom i ne ulica, moi adres - " << this; }
                       // вывести адрес объекта
  };
///////////////////////////////////////////////////////////
int main()
  {
  where w1, w2, w3;    //создать три объекта
  w1.reveal();         //посмотреть, где они находятся
  w2.reveal();
  w3.reveal();
  cout << endl;
  return 0;
  }


