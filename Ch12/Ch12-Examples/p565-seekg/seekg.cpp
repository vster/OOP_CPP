// seekg.cpp
// Поиск конкретного объекта в файле
#include <fstream>        // для файловых потоков
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person              // класс person
  {
  protected:
    char name[80];        // имя человека
    int age;              // его возраст
  public:
    void getData()        // получить данные о человеке
      {
      cout << "\n  Enter name: "; cin >> name;
      cout << "  Enter age: "; cin >> age;
      }
    void showData(void)   // вывод данных о человеке
      {
      cout << "\n  Name: " << name;
      cout << "\n  Age: " << age;
      }
  };
///////////////////////////////////////////////////////////
int main()
  {
  person pers;                  // создать объект person 
  ifstream infile;              // создать входной файл
  infile.open("GROUP.DAT",ios::in|ios::binary); // открыть
                                                // файл
  infile.seekg(0, ios::end);    // установить указатель на 0
                                // байт от конца файла
  int endposition = infile.tellg();      // найти позицию
  int n = endposition / sizeof(person);  // число человек
  cout << "\nIn file " << n << " person(s)";

  cout << "\nEnter number of person: ";
  cin >> n;
  int position = (n-1) * sizeof(person); // умножить размер
                         // данных под персону на число персон
  infile.seekg(position);               // число байт от начала
                         // прочитать одну персону
  infile.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
  pers.showData();                      //вывести одну персону
  cout << endl;
  return 0;
  }


