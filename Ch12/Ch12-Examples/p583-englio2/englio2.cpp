// englio2.cpp
// перегружаемые операции << и >> могут работать с файлами
#include <fstream>
#include <iostream>
using namespace std;
class Distance            // класс английских расстояний
  {
  private:
    int feet;
    float inches;
  public:
    Distance() : feet(0), inches(0.0) // конструктор (без
                                      // аргументов)
      {  }                // конструктор (два аргумента)
    Distance(int ft, float in) : feet(ft), inches(in)    
      {  }
    friend istream& operator >> (istream& s, Distance& d);
    friend ostream& operator << (ostream& s, Distance& d);
  };
//---------------------------------------------------------
istream& operator >> (istream& s, Distance& d) //получить
                                               // данные
  {                       // из файла или с клавиатуры
  char dummy;             // для ('), (-) и (")
                          //с помощью перегруженного >>
  s >> d.feet >> dummy >> dummy >> d.inches >> dummy;
  return s;
  }
//---------------------------------------------------------
ostream& operator << (ostream& s, Distance& d) // послать
                          // данные типа Distance
  {                       // в файл или
  s << d.feet << "\'-" << d.inches << '\"';   // на экран
  return s;               // перегруженным << 
  }
///////////////////////////////////////////////////////////
int main()
  {
  char ch;
  Distance dist1;
  ofstream ofile;         // создать и открыть
  ofile.open("DIST.DAT"); // выходной поток

  do {
    cout << "\nEnter distance: ";
    cin >> dist1;         // получить данные от пользователя
    ofile << dist1;       // записать их в выходной поток
    cout << "Continue (y/n)? ";
    cin >> ch;
    } while(ch != 'n');  
  ofile.close();          // закрыть выходной поток

  ifstream ifile;         // создать и открыть 
  ifile.open("DIST.DAT"); // входной поток

  cout << "\nContent of file:\n";
  while(true)
    {
    ifile >> dist1;       // чтение данных из потока
    if( ifile.eof() )     // выход по EOF
      break;
    cout << "Distance = " << dist1 <<endl; //вывод
                                             // расстояний
    }
  return 0;
  }


